; 101-hello_holberton.asm
section .data
    hello db 'Hello, Holberton', 0Ah, 0

section .text
    global main
    extern printf

main:
    ; prepare arguments for printf
    push rbp
    mov rdi, hello
    xor eax, eax
    call printf

    ; exit
    mov eax, 0
    pop rbp
    ret
