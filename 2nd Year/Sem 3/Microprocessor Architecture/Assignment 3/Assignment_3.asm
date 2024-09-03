;Assignment no. : 3
;Assinment name: write an ALP to find number of positive / negative elements from 64-bit array

;------------------------------------------------------------------------------------------------------------------
section .data
	nline	db	10,10
	nline_len	equ	$-nline
	
	ano	db	10,"  Assignment number - 3",10
	   	db	"positive / negative elements from 64 bit array",10
	ano_len	equ	$-ano
	
	arr64	dq	-21H, 5FH, -33H, 11H, 62H
	n	equ	5  ; variable which stores number of elements in the array
	
	pmsg	db	10,10,"The number of positive elements from 64-bit array: "
	pmsg_len	equ	$-pmsg
	
	nmsg	db	10,10,"The number of negative elements from 64-bit array: "
	nmsg_len	equ	$-nmsg
	
;------------------------------------------------------------------------------------------------------------------
	
section .bss
	p_count resq 1	;reserve quadword for count of positive numbers
	n_count resq 1	;reserve quadword for count of positive numbers
	
	char_ans resb 16
	
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
	print ano,ano_len	
	
	mov rsi,arr64	;move elements of array in rsi
	mov rcx,n	;n is the counter for 5 numbers in the array
	
	mov rbx,0	;counter for positive number
	mov rdx,0	;counter for negative number
	
next_num:
	mov rax,[rsi]	;mov rsi values to rax for further operations
	rol rax,1	;rotate the rax to left by 1 for checking the sign of number
	jc negative	;jump to negative if carry = 1

positive:
	inc rbx	;increment rbx-positive counter
	jmp next	;jump to next
	
negative:
	inc rdx	;increment rdx-negative counter 

next:
	add rsi,8	;add 8 bytes to rsi for next number in array
	dec rcx	;decrement rcx-n
	jnz next_num	;jump if rcx is not equal to zero
	
	mov [p_count],rbx
	mov [n_count],rdx
	
	print pmsg,pmsg_len
	mov rax,[p_count]
	call Display
	
	print nmsg,nmsg_len
	mov rax,[n_count]
	call Display
	
	print nline,nline_len
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
