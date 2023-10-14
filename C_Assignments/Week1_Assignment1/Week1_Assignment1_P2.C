/*
 * Week1_Assignment1_P2.c
 *Description :Write a C program to read a character from the user and print it and its ASCII code.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 8, 2023
 *      Author: Omar Medhat
 */
#include<stdio.h>
int main (void)
{
	char x ;
	printf("Enter Char ");
	fflush(stdin);fflush(stdout);
	x =getchar() ;
	printf("%d",x);
	getch();
}
