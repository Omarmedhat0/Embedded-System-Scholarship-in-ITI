/*
 * w2_a2_p3.c
 *Description : Write a function to make a string copy from source string to destination string. (like
  strcpy())
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 16, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
void str_copy(int *destination , int *source);
void main(main)
{
	char string1[20];
	char string2[20]="Empty";
	clrscr();
	printf("Now the destination string is : %s\n",string2);
	flushall();
	printf("Please Enter the new string that you want to be copied\n");
	gets(string1);
	str_copy(string2 , string1);
	printf("Now the destination string is : %s\n",string2);
	getch();

}
void str_copy(int *destination , int *source)
{
	int counter=0 ; 
	while(source[counter]!=NULL)
	{
		destination[counter]=source[counter];
		counter++;
	}
}