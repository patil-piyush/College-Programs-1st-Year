;assignment Name    : write an ALP to display "hello world" using 64 bit programming with macro
;------------------------------------------------------------------------------------------------

section .data
	msg1 db 10,"welcome",10
	msg1_len: equ $-msg1
	
	msg2 db 10,"hello world using 64-bit programming!!!",10,10	;
	msg2_len: equ $-msg2	; lenght of "hello world" string
	
;------------------------------------------------------------------------------------------------

%macro print 2
	MOV RAX, 1	;system call 1 is write
	MOV RDI, 1	;file handle 1 is STDOUT
	MOV RSI, %1	;"assinment number 1B"
	MOV RDX, %2	;number of bytes
	syscall
%endmacro

%macro exit 0
	MOV RAX,60	;system call 60 is exit
	MOV RDI, 0
	syscall
%endmacro

section .text
	Global _start
	
_start:
	print msg1, msg1_len
	print msg2, msg2_len
	
	exit
