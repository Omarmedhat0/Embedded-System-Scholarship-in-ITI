/*
 * w2_a2_p4.c
 *Description : Write a program to make an array of Employees with size determined at run time
  from a user and read its data and print the ID and net salary for each employee.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 16, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct employee
{
char name[50] ;
int net_salary ;
int ID ;
} ;
int main(void)
{
	int num_of_employee,counter;
	struct employee* employees;
	clrscr();
	printf("Please Enter the number of employee \n");
	flushall();
	scanf("%d",&num_of_employee);
	employees= (struct employee*)malloc(num_of_employee * sizeof(struct employee));
	if (employees == NULL) 
	{
		printf("Memory allocation failed. Exiting...\n");
	    getch();
	    return 1;
	}	
	for (counter=0 ; counter<num_of_employee;counter++)
	{
		flushall();
		printf("Enetr the name of employee no %d\n",counter+1);
		gets(employees[counter].name);
		printf("Enetr the ID of employee no %d\n",counter+1);
		scanf("%d",&employees[counter].ID);
		printf("Enetr the Net Salary of employee no %d\n",counter+1);
		scanf("%d",&employees[counter].net_salary);
		printf("................... \n");
	}
	printf("***********************\n");
	for (counter=0 ; counter<num_of_employee;counter++)
	{
		printf("Employee no. %d name : %s\n",counter+1,employees[counter].name);
		printf("Employee no. %d ID : %d\n",counter+1,employees[counter].ID);
		printf("Employee no. %d Net Salary : %d\n",counter+1,employees[counter].net_salary);
		printf("...................\n");
	}
	free(employees);
	getch();
}