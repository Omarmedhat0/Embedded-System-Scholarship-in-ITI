/*
 * Week1_Assignment2_P2.c
 *Description : Write a C program to receive numbers from the user, and exit when the sum exceeds
  100.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 9, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
int main(void)
{
	int num=0 ;
	int prev_num=0 ;
	printf("Enter the number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	while ((num+prev_num)<=100)
	{
		prev_num+=num;
		scanf("%d",&num);
	}
	printf("The number=%d",(num+prev_num));
	getch();
	clrscr();
}

