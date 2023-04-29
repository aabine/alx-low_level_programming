section .data
    msg db 'Hello, Holberton', 0Ah ; message string with newline character
    fmt db '%s', 0               ; format string for printf

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; prepare arguments for printf
    mov rdi, fmt
    mov rsi, msg
    xor eax, eax

    ; call printf to print the message
    call printf

    ; clean up and exit
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

