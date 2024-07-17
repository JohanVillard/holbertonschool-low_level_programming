			global 		main							;DIRECTIVE: 		INSTRUCTION OPERANDS		;Définition de main à cause de gcc à la place de start - pas besoin de ld... pas de global _start	;On est dans le main comme en C.

			section 	.text							;SECTION:			INSTRUCTION OPERANDS		;Déclare la section .text
main:		mov			rax, 1							;			LABEL: 	INSTRUCTION OPERANDS		;Charge 1 dans rax correspondant à sys_write (appel système pour écrire)	;rax -- r = 64 BITS; a = 
			mov			rdi, 1							;					INSTRUCTION OPERANDS		;Charge 1 dans rdi. Affichera sur stdout (File descriptor 1)
			mov			rsi, message					;       			INSTRUCTION OPERANDS		;Charge l'adresse du message dans rsi
			mov			rdx, len						;					INSTRUCTION OPERANDS		;Charge la longueur du message dans rdx
			syscall										;					INSTRUCTION					;Fait l'appel système pour afficher le msg

    		mov 		rax, 60                 		;					INSTRUCTION OPERANDS		;Charge le numéro d'appel du système (60: sys_exit)
    		xor 		rdi, rdi                 		;					INSTRUCTION OPERANDS		;Met à zéro le code de sortie (0)
    		syscall                      				;					INSTRUCTION					;Fait l'appel du système pour sortir du programme

						section 	.data				;SECTION:			INSTRUCTION OPERANDS
message:	db 			'Hello, World', 0xa			;			LABEL: 	INSTRUCTION OPERANDS		;db: Declare Byte; Message à imprimer + saut de ligne
			len 		equ $ - message					;					INSTRUCTION OPERANDS		;Longueur du message(len) =(equ/calcule) adresse actuelle($) - l'adresse du message(message)

			section 	.note.GNU-stack					;SECTION:			INSTRUCTION OPERANDS
