segment .data
	prompt db 'What is your name? '
	helloMsg db 'Hello '
	helloMsgLength equ $-helloMsg
	endOfLine db '.', 0xA
        endOfLineLength equ $-endOfLine

segment .bss
	name: resb 8

segment .text

	global _start

	_start:

	; Output the information
	mov eax, 4              ; Write 
	mov ebx, 1              ; to the standard output(screen/console)
	mov ecx, prompt         ; the info variable prompt
        mov edx, 19             ; of size 19(characters)
	int 0x80                ; invoke the interrupt

	; Read screen input and store its value
	mov eax, 3              ; Read
	mov ebx, 1              ; form standard input(keyboard)
	mov ecx, name           ; storing ate memory location 'name'
        int 0x80                ; invoke the interrupt

	; Output the string helloMsg
	mov eax, 4              ; Write
	mov ebx, 1              ; to the stadard output (screen/console)
        mov ecx, helloMsg       ; the info at helloMsg
	mov edx, helloMsgLength ; length of the info in bytes
	int 0x80                ; invoke the interrupt

	mov esi, name           ; Initialize the source index

loopAgain:

	mov al, [esi]           ; al is a 1 byte register
	cmp al, 0xA             ; If al holds an ASCII new line...
	je exitLoop             ; then jump to label exitLoop

	; if al does not hold an ASCII newLine...
	mov eax, 4              ; Write
	mov ebx, 1              ; to standard output(screen/console)
	mov ecx, esi            ; the info at address esi
	mov edx, 1              ; 1 byte(character) of that information
	int 0x80                ; invoke interrupt

	add esi, 1              ; you could also use the inc instruction
	                        ; to increment esi

	cmp esi, name+8         ; See if esi is pointing past the
	                        ; end of the 8 reserved bytes

	jl loopAgain

exitLoop:
        ; Output that info ".",0xA 
	mov eax, 4              ; Write
	mov ebx, 1              ; to the standard output(screen/console)
	mov ecx, endOfLine      ; the information at helloMsg
	mov edx, endOfLineLength; length of information in bytes
        int 0x80

        ; Exit  	

	mov eax, 1
	mov ebx, 0
	int 0x80 
