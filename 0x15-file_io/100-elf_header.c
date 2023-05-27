#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

void print_error(char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr elf_header)
{
	int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", elf_header.e_ident[i]);
    printf("\n");

    printf("  Class:                             ");
    switch (elf_header.e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("Invalid class\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }

    printf("  Data:                              ");
    switch (elf_header.e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("Invalid data encoding\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }

    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (elf_header.e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("TRU64 UNIX\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM architecture\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone (embedded) application\n");
        break;
    default:
        printf("<unknown: %d>\n", elf_header.e_ident[EI_OSABI]);
        break;
    }

    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (elf_header.e_type)
    {
    case ET_NONE:
        printf("No file type\n");
        break;
    case ET_REL:
        printf("Relocatable file\n");
        break;
    case ET_EXEC:
        printf("Executable file\n");
        break;
    case ET_DYN:
        printf("Shared object file\n");
        break;
    case ET_CORE:
        printf("Core file\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }

    printf("  Entry point address:               0x%lx\n", elf_header.e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Cannot open the file");

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
        print_error("Unable to read ELF header");

    print_elf_header_info(elf_header);

    close(fd);

    return 0;
}

