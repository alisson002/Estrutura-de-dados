.data

	msg1: .asciiz "\n DIGITE A: "
	msg2: .asciiz "\n DIGITE B: "
	msg3: .asciiz "\n DIGITE A + B: "

.text

main:
	#EXIBIR msg1!
	addi $v0, $zero, 4
	la $a0,msg1
	syscall
	
	#DIGITAR A

	addi $v0, $zero, 5
	syscall

	add $t0, $zero, $v0

	#EXIBIR msg2!
	addi $v0, $zero, 4
	la $a0,msg2
	syscall
	
	#DIGITAR B

	addi $v0, $zero, 5
	syscall

	add $t1, $zero, $v0

	#EXIBIR msg3!
	addi $v0, $zero, 4
	la $a0,msg3
	syscall

	#EXIBIR A + B
	add $a0, $t0, $t1
	addi $v0, $zero, 1
	syscall