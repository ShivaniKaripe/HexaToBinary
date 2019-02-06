#include<stdio.h>
void dtoh(int);
int main()
{
	char h[10];
	printf_s("enter the hexa decimal number");
	scanf_s("%s", &h[0]);
	printf_s("%c", h[1]);
	scanf_s("%s", &h[0]);
	return;
}