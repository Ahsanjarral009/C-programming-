#include<stdio.h>
int main(){
	int factorial=1,num,i;
	printf("Enter value to take factorial from : \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	 factorial*=i;
	} printf("%d\n",factorial);
	return 0 ;
}