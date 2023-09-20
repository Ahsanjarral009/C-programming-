#include<stdio.h>
int main(){
	int var,num,temp;
	printf("Enter first value : \n");
	scanf("%d",&var);
	printf("Enter second value : \n");
	scanf("%d",&num);
	printf("First value before swaping is : %d\n",var);
	printf("second value before swaping is : %d\n",num);
	
	temp = num; //swaping value of num into temp
	num = var;//swaping value of var into num
	var =temp;//swaping value of temp into var
	printf("\n");
	printf("First value after swaping : %d\n",var);
	printf("Second valus after swaping : %d\n ",num);
	return 0 ; 
}


