section .data
    fmt db 'Hello, Holberton', 0Ah, 0 ; format string for printf

section .text
    global main

extern printf

main:
    ; call printf to print the message
    mov rdi, fmt    ; load format string address into rdi
    xor eax, eax    ; clear eax to indicate printf has a variable number of arguments
    call printf     ; invoke printf

    ; return 0 from main
    xor eax, eax    ; clear eax
    ret             ; return from main

