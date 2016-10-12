;---------------------------------------------------
;Name         : firstVagnerASM.asm
;Author       : Vagner Domingues
;Begin Date   : 10/28/2014
;End Date     : 
;Instructions : nasm -f elf firstVagnerASM.asm
;               ld -m elf_i386 firstVagnerASM.o -o firstvagnerasm
;               ./firstvagnerasm
;---------------------------------------------------

section  .data                           ;Data segment
    barMsg     db   '************************', 0x0a     ;Menu Bar 
    lenBarMsg  equ  $ - barMsg                           ;The lenght of the menu bar
    bar2Msg    db   '*  First Assembly App  *', 0x0a     ;Menu Bar 
    lenBar2Msg equ  $ - bar2Msg                           ;The lenght of the menu bar 
    userMsg    db   'Please enter a number: '            ;Ask the user to enter a number
    lenUserMsg equ  $-userMsg                            ;The length of the message
    dispMsg    db   'You have entered: '
    lenDispMsg equ  $-dispMsg    
    clr        db   0x1b, "[2J", 0x1b, "[H"
    clrlen     equ $ - clr
section .bss                             ;Uninitialized data
    num resb 5
section .text                            ;Code Segment
       global _start
_start:
       mov eax, 4                        ;Clear Screen Section
       mov ebx, 1
       mov ecx, clr
       mov edx, clrlen
       int 0x80

       mov eax, 4                        ;Menu Bar
       mov ebx, 1
       mov ecx, barMsg
       mov edx, lenBarMsg
       int 80h

       mov eax, 4                        ;Menu Bar2
       mov ebx, 1
       mov ecx, bar2Msg
       mov edx, lenBar2Msg
       int 80h


       mov eax, 4                        ;Menu Bar
       mov ebx, 1
       mov ecx, barMsg
       mov edx, lenBarMsg
       int 80h
       

       mov eax, 4                        ;User Prompt Section
       mov ebx, 1
       mov ecx, userMsg
       mov edx, lenUserMsg
       int 80h

       ;Read and store the user input
       mov eax, 3
       mov ebx, 2
       mov ecx, num  
       mov edx, 5                        ;5 bytes (numeric, 1 for sign) of that information
       int 80h
                                         ;Output the message 'The entered number is: '
       mov eax, 4
       mov ebx, 1
       mov ecx, dispMsg
       mov edx, lenDispMsg
       int 80h  

                                         ;Output the number entered
       mov eax, 4
       mov ebx, 1
       mov ecx, num
       mov edx, 5
       int 80h  
; Exit code
       mov eax, 1
       mov ebx, 0
       int 80h
