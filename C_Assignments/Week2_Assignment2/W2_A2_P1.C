/*
 * w2_a2_p1.c
 *Description :Write a swap function using call by address.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 16, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>

void Swap(int *num1 , int *num2)
	{
	int temp ;
	temp = *num1 ;
	*num1 = *num2;
	*num2 = temp ;
	}

void main(void)
	{
	int num1 , num2;
	clrscr();
	printf("Please enter 2 numbers \n");
	flushall();
	scanf("%d %d",&num1 , &num2);
	Swap(&num1,&num2);
	printf("Number 1 : %d\nNumber 2 : %d", num1 , num2);
	getch();
	}