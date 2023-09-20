#include<stdio.h>
int main(){
	int arr[10] = {2,3,4,5,8,6,45,32,67,23};
   int val,a1,a2=0 ; 
   for(int a1 = 0 ; a1<=10;a1++){
   	printf("%d\t",arr[a1]);
	   arr[a1]; 
   }
   printf("Enter the number to find its location  : \n"); 
   scanf(" %d",&val); 
   while(val != arr[a2]){
   	a2++;
	      }
	      
	      printf("The location of %d is %d ",val , a2+1); 
return 0 ; 
}