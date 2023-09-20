#include<stdio.h>
void swap(int *a,int *b);
int main(){
	
	int v = 5 ; 
	int m = 10 ; 
	printf("Before swaping\n");
	printf("a = %d \n b = %d \n",v,m); 
	
	printf("After Swaping\n"); 
	swap(&v,&m);
	return 0 ; 
	
}
void swap(int *a , int*b){
	

	int temp =0; 
	temp = *a ; 
	*a = *b ; 
	*b = temp ; 
	printf("a = %d \n,b = %d \n",*a,*b);  
	
}