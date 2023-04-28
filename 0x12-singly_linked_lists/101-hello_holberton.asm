section .data
    msg db 'Hello, Holberton', 10 ; message to be printed, with newline character

section .text
    global _start

_start:
    ; write the message to stdout
    mov rax, 1          ; system call for write
    mov rdi, 1          ; file descriptor for stdout
    mov rsi, msg        ; pointer to message
    mov rdx, 16         ; message length
    syscall             ; call kernel

    ; exit with status 0
    mov rax, 60         ; system call for exit
    xor rdi, rdi        ; exit status 0
    syscall             ; call kernel

