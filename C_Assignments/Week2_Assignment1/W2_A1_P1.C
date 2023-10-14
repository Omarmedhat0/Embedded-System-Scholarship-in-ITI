/*
 * w1_a1_p1.c
 *Description :Write two functions to read an Employee’s data and other to print its Name with the
  net salary.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 15, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
	{
	char name[50] ;
	int net_salary ;
	} employee1;
void Read_Data (void)
	{
	struct employee employee2 ;
	printf ("Enter employee's name\n");
	flushall();
	gets(employee2.name);
	flushall();
	printf ("Enter employee's net_salary\n");
	scanf ("%d",&employee2.net_salary);
	strcpy(employee1.name,employee2.name);
	employee1.net_salary=employee2.net_salary;

	}
void Print_Data(struct employee employee2)
	{
	flushall();
	printf ("Employee's name %s \n",employee2.name);
	printf ("Employee's salary %d \n",employee2.net_salary);
	}
int main(void)
	{
	clrscr();
	Read_Data();
	Print_Data(employee1);
	getch();
	}