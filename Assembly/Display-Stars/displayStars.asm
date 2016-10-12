;Program Name: displayStars.asm
; nasm -f elf displayStars.asm
; ld -m elf_i386 displayStars.o -o displayStars
; ./displayStars
;
; gotoxy macro
    %macro gotoxy 2
        push       ax
        push       bx
        push       dx
 
        mov     ah, 0x02
 
        mov     dh, %1
        ;row
        mov     dl, %2
        ;column
        xor     bh, bh
        int     0x10
        ;interrupt
        pop     dx
 
        pop     bx
 
        pop     ax
    %endmacro

; Write macro 
    %macro write_string 2         ; Number of paramteres
         mov   eax, 4             ; System call number (sys_write)
         mov   ebx, 1             ; file descriptor (stdout)
         mov   ecx, %1            ; first parameter , message to write
         mov   edx, %2            ; second parameter , message size
         int   0x80               ; call the kernell

    %endmacro

; Exit macro
    %macro exit_program 1
         mov   eax, %1            ; return code (1 -> Normal) 
         int   0x80
    %endmacro

section .text
    global  _start      ; Must be declared for linker (gcc)
_start:                 ; Tell linker entry point

	
         write_string strcls, sizecls     ; Clear screen
         write_string s2, 40
         write_string newline, len2
         write_string msg, len           
         write_string s2, 40
         write_string newline, len2
         write_string newline, len2
         write_string menu, menuLen
         write_string menu1, menu1Len
         write_string menu2, menu2Len
         write_string menu3, menu3Len
         write_string menu4, menu4Len
         write_string newline, len2
         write_string menuOption, menuOptionLen
         gotoxy    4, 4 

         exit_program 1                   ; Exit program 
         

section .data
menu db 'Choose one of the options below',0xa
menuLen equ $ - menu
menu1 db '1) Add two numbers',0xa
menu1Len equ $ - menu1
menu2 db '2) Multiply two numbers',0xa
menu2Len equ $ - menu2
menu3 db '3)Divide two numbers',0xa
menu3Len equ $ - menu3
menu4 db '4)Subtract two numbers',0xa
menu4Len equ $ - menu4
menuOption db 'Enter option',0xa,0xD
menuOptionLen equ $ - menuOption
msg db 'Welcome to Assembly!',0xa  ; a message
len equ $ - msg               ; length of a message
s2 times 40 db '*'
newline db ' ',0xa            ; inserts a newline
len2 equ $ - newline
strcls db 27,"[2J",27,"[01;01H"
sizecls equ $ - strcls   
