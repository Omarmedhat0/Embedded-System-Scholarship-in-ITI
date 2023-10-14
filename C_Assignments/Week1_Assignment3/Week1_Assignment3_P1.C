/*
 * Week1_Assignment3_P1.c
 *Description :Write a program to read an array and print it using 2 for loops?
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 10, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#define size 10
int main(void)
{
	int arr[size]={1,5,6,10,2,3,8,19,6,10};
	int max =0 , min =arr[0] ;
	int i;
	clrscr();
	for( i=0;i<size;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
		if (arr[i]<=min)
		{
			min=arr[i];
		}
	}
	printf("Max num = %d \nMin num = %d ",max,min);
	getchar();
	clrscr();
}

