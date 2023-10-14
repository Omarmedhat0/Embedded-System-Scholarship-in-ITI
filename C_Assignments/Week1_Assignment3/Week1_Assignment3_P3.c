/*
 * Week1_Assignment3_P3.c
 *Description :If you have a matrix of dimension 3*4. Write a program to read it from the user and
  find the sum of each row & the average of each column
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 10, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#define nrow 	3
#define ncol	4
int main(void)
{
	int arr[nrow][ncol];
	int sum_of_rows =0 , average_of_column=0 , sum_of_column=0;
	int row;
	int col; 
	clrscr();
	printf("Please enter the elements of the matrix sequentially\n");
	fflush(stdin);fflush(stdout);
	for( row=0;row<nrow;row++)
	{
		for( col=0;col<ncol;col++)
		{
			scanf("%d",&arr[row][col]);
		}
	}
	for( row=0;row<nrow;row++)
	{
		for ( col=0;col<ncol; col++)
		{
			sum_of_rows=sum_of_rows+arr[row][col];
		}
		printf("Sum of the row number %d = %d \n",(row+1),sum_of_rows);
		sum_of_rows =0 ;
	}
	for ( col=0;col<ncol; col++)
	{
		for( row=0;row<nrow;row++)
		{
			sum_of_column=sum_of_column+arr[row][col];
		}
		average_of_column=sum_of_column/nrow;
		printf("The average of column %d = %d \n",(col+1),average_of_column);
		average_of_column=0;
		sum_of_column=0;
	}

	getchar();
}

