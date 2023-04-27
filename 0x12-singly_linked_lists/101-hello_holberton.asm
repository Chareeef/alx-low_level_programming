section .data
	message db "Hello, Holberton\n", 10, 0

section .text
	global main

	extern printf

main:
	; prepare args for printf
	mov rdi, message
	xor rax, rax

	; call printf
	call printf

	; exit
	mov rax, 60
	xor rdi, rdi
	syscall
