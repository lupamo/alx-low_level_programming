global main
global printf
section .text
printf:
	push rbp
	mov rbp, rsp

section .text
main:
	push qword format_string
	call printf
	mov rax, 60
	xor rdi, rdi
	syscall
section .data
format_string: db "Hello, Holberton!\n", 0
