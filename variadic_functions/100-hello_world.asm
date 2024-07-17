section .note.GNU-stack

section .data
	msg db 'Hello, World!', 0xA			;Message à imprimer + byte de fin(0xA)
	len equ $ -msg						;Longueur du message(len) =(equ/calcule) adresse actuelle($) - l'adresse du message(msg)

section .text							;Déclare la section .text
	global _start						;Doit être déclaré pour que l'éditeur de liens(linker) trouve l'entrée du programme

_start:									;Dis a l'éditeur de lien que c'est le point d'entrée
	;Appel du sytème de sys_write
	mov rdx, len						;Charge la longueur du message dans rdx
	mov rsi, msg						;Charge l'adresse du message dans rsi
	mov rax, 1							;Charge 1 dans rax pour sys_write (appel système pour écrire)															
	syscall								;Fait l'appel système pour afficher le msg

 	;Appel du sytème de sys_exit
    mov rax, 60                 		;Charge le uméro d'appel du sytème (60: sys_exit)
    xor rdi, rdi                 		;Met à zéro le code de sortie (0)
    syscall                      		;Fait l'appel du système pour sortir du programme
