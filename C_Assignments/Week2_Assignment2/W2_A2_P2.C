/*
 * w2_a2_p2.c
 *Description : Using a function to read an array from user, and another one to print it.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 16, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#define size_of_arr 10
void read_arr(int *arr,int size_of_array);
void print_arr(int *arr,int size_of_array);
void main (void)
{
	int arr[size_of_arr];
	clrscr();
	printf("Enetr the 10 elemnts of the array sequenatly\n");
	read_arr(&arr,size_of_arr);
	print_arr(&arr,size_of_arr);
	getch();
}
void read_arr(int *arr,int size_of_array)
{
	int counter  ;
	for (counter =0 ; counter<size_of_array; counter++)
		{
			scanf("%d",&arr[counter]);
		} 
}
void print_arr(int *arr,int size_of_array)
{
	int counter  ;
	for (counter =0 ; counter<size_of_array; counter++)
		{
			printf("%d  ",arr[counter]);
		} 
}
