extern	printf

SECTION .data

	message db "Hello, Holberton", 10

SECTION .text

	global main
	main:
	mov edi, message
	mov eax, 0
	call printf
	mov rax, 0
	ret
