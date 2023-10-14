/*
 * Week1_Assignment2_P3.c
 *Description :Write a C program to print a simple menu with 3 choices, when select one choice
  print the choice word and exit.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 9, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
int main(void)
{
	char choice ;
	printf("Please Enter your choice \n Choice1 \n Choice2\n Choice3 \n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice);
	switch(choice)
	{
	case '1' :
		printf("choice1");
		break;
	case '2' :
		printf("choice2");
		break;
	case '3' :
		printf("choice3");
		break;
	default :
		printf("Invalid choice");
		break;
	}
	getch();
	clrscr();
}

