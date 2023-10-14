/*
 * Week1_Assignment2_P5.c
 *Description :Write a C program to print the multiplication table in descending order from table 1 to
  table 10 sequentially and separated by group of “ *’s ”.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 9, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
int main(void)
{
	int num1,num2;
	for (num1=10;num1>=0;num1--)
	{
		for (num2=0;num2<=12;num2++)
		{
			printf("%d * %d = %d \n",num1,num2,num1*num2);
		}
		printf ("****************\n");
	}
	getch();
	clrscr();
}

