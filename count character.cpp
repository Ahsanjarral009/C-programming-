#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void)
{ 
system("cls");
int a=0;
printf("Type any sentence\n");
while(getche()!='\r')
a++;
printf("\nTotal Characters typed = %d",a); getch();
}
