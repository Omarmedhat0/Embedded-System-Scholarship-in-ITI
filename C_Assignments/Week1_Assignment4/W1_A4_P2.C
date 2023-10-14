/*
 * w1_a4_p2.c
 *Description :Write a program to receive one employee’s data display the code, name, and net
   salary.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 12, 2023
 *      Author: Omar Medhat
 */
#include  <stdio.h>
#include <conio.h>
typedef struct employee
{
int ID ;
float Age;
float salary;
float detuct ;
float bonus ;
char name[51];
}employee;
int main(void)
{
	employee data1;
	float net_salary ;
	clrscr();
	printf("Enter employee name \n");
	flushall();
	gets(data1.name);
	printf("Enter ID \n");
	scanf("%d",&data1.ID);
	printf("Enter AGE \n");
	scanf("%f",&data1.Age);
	printf("Enter salaray \n");
	scanf("%f",&data1.salary);
	printf("Enter detuct \n");
	scanf("%f",&data1.detuct);
	printf("Enter bonus \n");
	scanf("%f",&data1.bonus);
	net_salary = data1.salary + data1.bonus - data1.detuct;

	printf("****************\n");
	printf("Employee's name : %s \n" , data1.name);
	printf("Employee's ID : %d \n" , data1.ID) ;
	printf("Employee's net salary %f \n ", net_salary) ;
	getch();

}

