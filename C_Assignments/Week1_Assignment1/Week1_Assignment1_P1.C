/*
 * Week1_Assignment1_P1.c
 *Description : Write a C program to test the different format specifiers with “printf “
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 8, 2023
 *      Author: Omar Medhat
 */
#include<stdio.h>
int main (void)
{
	char x = 'a';
	printf("%c %d %f %ld %lf", x, x, (float)x, (long)x, (double)x);
	getchar();

}
