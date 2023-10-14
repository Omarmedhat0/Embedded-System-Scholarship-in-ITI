/*
 * Week1_Assignment2_P1.c
 *Description Write a C program to implement the algorithm of the Magic Box puzzle.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 9, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h> 
void main(void)
{
	int n , row=1 , col=1 , currentnum=0;
	scanf("%d",&n);

	while (currentnum<(n*n))
	{
		currentnum++;
		if (currentnum==1)
		{
			col=2;
			row=1;
			gotoxy(col,row);
			printf("%d",currentnum);
		}

		else if (((currentnum-1)%n) != 0)
		{
			if (row==1)
			{
				row =n;
			}
			else
			{
				row -- ;
			}
			if (col==1)
			{
				col = n;
			}
			else
			{
				col -- ;
			}
			gotoxy(col,row);
			printf("%d",currentnum);
		}
		else if(((currentnum-1)%n) == 0)
		{
			if (row==n)
			{
				row =1;
			}
			else
			{
				row ++ ;
			}
			gotoxy(col,row);
			printf("%d",currentnum);
		}
		
	}
	getch();
	clrscr();
}


