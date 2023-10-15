/*
 * w2_a2_p4.c
 *Description : Write a program to make an array of strings which number of strings is read from the
  user and so the size of each string is read from the user, after that read all strings and
  print it.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 16, 2023
 *      Author: Omar Medhat
 */
#inclu
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{
	char Num_Of_Str,counter1, Size_Of_str;
	char **str;
	clrscr();
	flushall();
	printf("Please enter the number of strings\n");
	scanf("%d",&Num_Of_Str);
	str =(char**)malloc(Num_Of_Str*sizeof(char*));
	printf("*****************\n");
	for (counter1=0;counter1<Num_Of_Str;counter1++)
	{
		flushall();		
		printf("Please enter the max size of the string no %d\n",counter1+1);
		scanf("%d",Size_Of_str);
		str[counter1] = (char*)malloc((Size_Of_str+1)*sizeof(char));
		flushall();	
		printf("Please enter the string no %d\n",counter1+1);
		gets(str[counter1]);
		printf("........................\n");
	}
		printf("*****************\n");
	for (counter1=0;counter1<Num_Of_Str;counter1++)
	{
		printf("String %d: %s\n", counter1 + 1, str[counter1]);
		free(str[counter1]);
		printf("........................\n");
	}
	free(str);
	getch();

}