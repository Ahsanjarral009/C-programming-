#include<stdio.h>
#define SIZE 10 

void modifyarray();
 void modifyelement(int e );
int main(){ 
//int arr[SIZE] ; 
//int result_1 , set_1; 
//for(int i = 0 ; i < SIZE ; i++){
//	
//	printf("Enter the %d Value",i);
//	scanf("%d",&arr[i]);
//}
  modifyarray();
//for(int i = 0 ; i < SIZE ; i++){
//	
//	printf("%d\t",arr[i]);


return 0 ; 
}

void modifyarray(){
	int j ;

int arr[SIZE] ; 
 
for(int i = 0 ; i < SIZE ; i++){
	
	printf("Enter the %d Value",i);
	scanf("%d",&arr[i]);
}






	for(j = 0 ; j < SIZE ; j++){
	
		arr[j] *=3;}
	
printf("Values after modifing\n");
	 for(int i = 0 ; i < SIZE ; i++){
	
	printf("Array address : %d \t  array[%d] Cantain VALUE  %d\n",&arr,i,arr[i]);
	 
	}
	
	printf("Modifying Element \n");
	
	 modifyelement(arr[5]);
}
void modifyelement(int e){
	e *= 3 ; 
	int arr[SIZE];
	int i = 0 ; 
	printf("MODIFIED ELEMENT IS arr[5] %d",e);
	
}