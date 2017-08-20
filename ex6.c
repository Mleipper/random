//program: Xmas tree using gotoxy()

#include <windows.h>
#include <stdio.h>

void gotoxy(int, int);

int main()

{
	gotoxy(40,1); printf("x");
	gotoxy(39,2); printf("xxx");
	// add your code here.
	gotoxy(38,3); printf("xxxxx");
	gotoxy(37,4); printf("xxxxxxx");
	gotoxy(36,5); printf("xxxxxxxxx");
	gotoxy(39,6); printf("xxx");
	gotoxy(39,7); printf("xxx");
	gotoxy(1,15); system("pause");
	return 0;
		
}

void gotoxy(int x, int y)
{
	COORD point;
 
 	point.X = x; point.Y = y;
 	
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) ,point);
}
