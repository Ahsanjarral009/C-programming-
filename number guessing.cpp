#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void)
{
system("cls"); 
float gss,incr;
char ch;
printf("Think of a number Between 1 & 99\n"); 
printf("Press `g` for grateñn");
printf("Press `l` for less\n");
printf("Enter for exit\n");
incr=gss=50; 
while(incr>1.0)
{
printf("\nIs your number greater, less or equal to %.0f\n",gss);
 incr/=2;
if((ch=getch())=='e')
break;
else if(ch=='g') gss+=incr;
else
gss-=incr;
}
printf("You guessed %.0f",gss); getch();
}
