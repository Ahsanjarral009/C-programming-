#include<stdio.h>
int main(){
	int arr[] = {2,3,4,5,6,7,8,9,45}; 
	int var , a1 , a2 = 0 ;  

   for(int a1 = 0 ; a1 <  9 ;  a1++){
   	arr[a1]; 
   	printf("%d\t",arr[a1]);
   }
printf("\nEnter the number to find its location : \n"); 
scanf("%d",&var); 
while(var != a2 ){
	a2++;
}
printf("location of %d is : %d\n",var,a2-1); 
}
