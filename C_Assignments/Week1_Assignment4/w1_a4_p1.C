/*
 * w1_a4_p1.c
 *Description :Write a program to display a menu to the user with the following options

	New
	Display
	Exit

	The target of each option is to display for the user a specified message. The program
	terminates if the user choose ‘Exit’ from the menu or press ‘ESC’.
	N.B. The keys available to the user is up arrow, down arrow, home, end, enter and
	escape.
 *Note : This code has been written on DOSBox Emulator based on borland c compiler
 * 	Created on: Oct 12, 2023
 *      Author: Omar Medhat
 */
#include <stdio.h>
#include <conio.h>
#define UP 0x48 //Extended Key (72)
#define DOWN 0x50 //Extended Key (80)
#define HOME 0x47 //Extended Key (71)
#define END 0x4F //Extended Key (79)
#define ENTER 0xD //Normal Key (13)
#define ESCAPE 0x1B //Normal Key (27)
#define NORMAL_ATTR 0x07 //work with BorlandC only
#define HILIGHT_ATTR 0x70//work with BorlandC only
#define New 0
#define Display 1
#define Exit 2
int termiated = 0 ;
int main(void)
{
	int row = 10 , col =25 ,  pos=0 , i=0 , ch;
	char menu[3][10]= {" New     "," Display "," Exit    "};
	clrscr();
	do{
		clrscr();
		//Draw Menu
		for (i=0;i<3;i++)
		{
			gotoxy(col,row+i);
			if (i==pos)
			{
				textattr(HILIGHT_ATTR);
				cprintf("%s",menu[i]);
				textattr(NORMAL_ATTR);
			}
			else if (i!=pos)
			{
				textattr(NORMAL_ATTR);
				cprintf("%s",menu[i]);
			}

		}
		flushall();
		ch=getch();
		switch(ch)
		{
			case NULL:
			{	
				ch=getch();
				switch(ch)
				{
				case UP :
				{
					if (pos==0)
					{
						pos=2;
					}
					else
					{
						pos--;
					}
					break;
				}
				case DOWN :
				{
					if (pos==2)
					{
						pos=0;
					}
					else
					{
						pos++;
					}
					break;
				}
				case HOME :
					pos = 0 ;
					break;
				case END :
					pos = 2 ;
					break;
				}
				break;
			}
			case ENTER :
			{
				switch(pos)
				{
				case New : 
					{
						clrscr();
						printf("New Message");
						getch();
						break;
					}
				case Display :
					{
						clrscr();
						printf("Display On");
						getch();
						break;
					}
				case Exit :
					{
						termiated=1;
						break;
					}
				} 
				break;
			}
			case ESCAPE :
			{
				termiated=1;
				break;
			}
		}
	}
	while(!termiated);
}
