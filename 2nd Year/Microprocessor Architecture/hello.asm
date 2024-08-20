section .data
    msg db 'Hello, World!'; Define the string with a newline at the end
    msg_len equ $ -msg;

section .text
    global _start          ; 

_start:
    mov rax, 1            ; sys_write system call number (1 for write)
    mov rdi, 1            ; File descriptor 1 (stdout)
    mov rsi, msg        ; Pointer to the string
    mov rdx, msg_len           ; Length of the string (including newline)
    syscall               ; Call kernel

    
    mov rax, 60           ; 
    xor rdi, 0          ; 
    syscall               
