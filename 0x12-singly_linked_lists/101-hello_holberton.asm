section .data
	message db "Hello, Holberton\n", 0
	format db "%s", 18, 0

section .text
	extern printf

	global _start
_start:
	push message
	push format
	call printf

	mov eax, 1
	xor ebx, ebx
	int 0x80
