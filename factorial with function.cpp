#include<stdio.h>


void factorial(int val);


int main(){
int num ;	
printf("Enter the number : \n");
scanf(" %d",&num);

  factorial(num);
return 0 ; 
}
  void factorial(int val){
	int f = 1  ; 
	for(int i = 1 ; i<=val;i++){
		f*=i;
	}
	
	printf("The factoiral of %d is : %d",val,f);
	
}