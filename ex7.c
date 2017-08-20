//program: Xmas tree using gotoxy()

#include <windows.h>
#include <stdio.h>

void gotoxy(int, int);

int main()

{
	//makes border
	gotoxy(1,1); printf("*******************************************************************************");
	gotoxy(1,2);printf("*"); gotoxy(79,2);printf("*");
	gotoxy(1,3);printf("*"); gotoxy(79,3);printf("*");
	gotoxy(1,4);printf("*"); gotoxy(79,4);printf("*");
	gotoxy(1,5);printf("*"); gotoxy(79,5);printf("*");
	gotoxy(1,6);printf("*"); gotoxy(79,6);printf("*");
	gotoxy(1,7);printf("*"); gotoxy(79,7);printf("*");
	gotoxy(1,8);printf("*"); gotoxy(79,8);printf("*");
	gotoxy(1,9);printf("*"); gotoxy(79,9);printf("*");
	gotoxy(1,10);printf("*"); gotoxy(79,10);printf("*");
	gotoxy(1,11);printf("*"); gotoxy(79,11);printf("*");
	gotoxy(1,12);printf("*"); gotoxy(79,12);printf("*");
	gotoxy(1,13);printf("*"); gotoxy(79,13);printf("*");
	gotoxy(1,14);printf("*"); gotoxy(79,14);printf("*");
	gotoxy(1,15);printf("*"); gotoxy(79,15);printf("*");
	gotoxy(1,16);printf("*"); gotoxy(79,16);printf("*");
	gotoxy(1,17);printf("*"); gotoxy(79,17);printf("*");
	gotoxy(1,18);printf("*"); gotoxy(79,18);printf("*");
	gotoxy(1,19);printf("*"); gotoxy(79,19);printf("*");
	gotoxy(1,20);printf("*"); gotoxy(79,20);printf("*");
	gotoxy(1,21);printf("*"); gotoxy(79,21);printf("*");
	gotoxy(1,22);printf("*"); gotoxy(79,22);printf("*");
	gotoxy(1,23);printf("*"); gotoxy(79,23);printf("*");
	gotoxy(1,24);printf("*"); gotoxy(79,24);printf("*");
	gotoxy(1,25);printf("*"); gotoxy(79,25);printf("*");
	gotoxy(1,26); printf("*******************************************************************************");
	//for the text above tree
	gotoxy(22,4); printf("x   x         x     x     x     xxxxx");	
	gotoxy(22,5); printf(" x x          x  x  x    x x    x");
	gotoxy(22,6); printf("  x       XX  x     x   x   x   xxxxx");
	gotoxy(22,7); printf(" x x          x     x   x x x       x");	
	gotoxy(22,8); printf("x   x         x     x   x   x   xxxxx");
	
	//makes tree in the centre
	gotoxy(40,13); printf("x");
	gotoxy(39,14); printf("*x*");
	// add your code here.
	gotoxy(38,15); printf("*x*x*");
	gotoxy(37,16); printf("*x*x*x*");
	gotoxy(36,17); printf("*x*x*x*x*");
	gotoxy(39,18); printf("*x*");
	gotoxy(39,19); printf("*x*");
	gotoxy(1,28); system("pause");
	
	
	return 0;
		
}

void gotoxy(int x, int y)
{
	COORD point;
 
 	point.X = x; point.Y = y;
 	
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) ,point);
}
