;Assignment no. : 2
;Assinment name: write X86/64 bit ALP to accept a string and to display it's length

;------------------------------------------------------------------------------------------------------------------
section .data 
	msg	db	10,10,"enter the string: "
	msg_len	equ	$-msg
	
	smsg	db	10,10,"the length of the string is: "
	smsg_len	equ	$-smsg
	
section	.bss
	string resb 50
	string1 equ $-string
	count resb 1
	char_ans resb 2
	
;------------------------------------------------------------------------------------------------------------------

%macro print 2
	mov rax,1
	mov rdi,1
	mov rsi,%1
	mov rdx,%2
	syscall
%endmacro

%macro Read 2
	mov rax,0
	mov rdi,0
	mov rsi,%1
	mov rdx,%2
	syscall
%endmacro

%macro Exit 0
	mov rax,60
	mov rdi,0
	syscall
%endmacro

;------------------------------------------------------------------------------------------------------------------

section .text
	global _start
_start:
	print msg,msg_len
	Read string,string1
	mov [count],rax
	
	print smsg,smsg_len
	mov rax,[count]
	call Display
	Exit

;------------------------------------------------------------------------------------------------------------------

Display:
	mov rbx,16	;divisor = 16 for hex
	mov rcx,2	;number of digits
	mov rsi,char_ans+1	;load last byte adress of char_ans buffer in rsi
	
cnt:
	mov rdx,0	;make rdx = 0 (as in div instruction rdx = rax/rbx )
	div rbx
	
	cmp dl,09h	;check for remainder in rdx
	jbe add30
	add dl,07h
	
add30:
	add dl,30h	;calculate ASCII code
	mov [rsi],dl	;storeit in buffer 
	dec rsi	;point to one byte back
	
	dec rcx	; decrement count
	jnz cnt	;if not zero repeat
	
	print char_ans,2	;display result on screen
ret

;------------------------------------------------------------------------------------------------------------------
