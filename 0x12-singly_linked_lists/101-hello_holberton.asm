section .data
    msg db 'Hello, Holberton', 0Ah ; message to print followed by newline character
    format db '%s', 0              ; format string for printf

section .text
    global main

extern printf

main:
    ; call printf to print the message
    mov rdi, format     ; first argument: format string
    mov rsi, msg        ; second argument: pointer to message
    xor eax, eax        ; clear eax to indicate varargs
    call printf         ; call printf function

    ; return 0 to indicate success
    xor eax, eax        ; set eax to 0
    ret                 ; return from main

