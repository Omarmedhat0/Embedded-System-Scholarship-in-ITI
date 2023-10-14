/*
 * w1_a1_p2.c
 *Description :Write a recursive function to compute the power operation: X^Y
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 15, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
int Power_Operation (int x , int y )
   {
	if (y==0
	)
		{
		return 1;
		}
	else
	   {

	   return x* Power_Operation ( x ,  y-1 ) ;
	   }
	}

void main(void)
	{
	int x,y,result ;
	clrscr();
	flushall();
	printf("Enter the number and the power sequental \n");
	scanf("%d %d",&x,&y);
	result = Power_Operation (x,y);
	printf("Result = %d \n",result);
	getch();
	}
