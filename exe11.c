#include<stdio.h>

int main(void)
{
	char ch;
	printf("please enter a character\n");
	scanf("%c", &ch);
	printf("\nThe ascii is %d for your character %c\n\n\n",ch,ch);
	system("pause");
	return 0;
}
