	global		main
	extern		printf

	section .text
main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	move	rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0
