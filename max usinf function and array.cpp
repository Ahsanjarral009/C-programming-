
#include<stdio.h>
int maximum(int array[],int n);
int minimum(int array[],int n );
int main(){
FILE *fptr ; 
fptr = fopen("max.txt","w");
	int n,max,min;
  printf("Enter the number of values : \n"); 
  scanf( "%d" , &n);
	int arr[n] ;

  for(int i = 0 ; i < n ;i++ ){
  	printf("Enter value %d ",i+1);
  	scanf("%d",&arr[i]);
}
    max = maximum(arr,n);
    min = minimum(arr,n); 
    
    fprintf(fptr,"Maximum value is %d\n",max);
    fprintf(fptr,"Minimum value is %d",min);
  fclose(fptr) ; 
    return 0 ; }
    
int maximum(int array[],int n){
	int max ;   
	for(int i = 0 ; i < n ;i++){
		
		
		
		if(array[i] > max){
			
		max = array[i];
		
		}
		
	}
	return max ; 
}
int minimum(int array[],int n){
	int min = array[0] ;   
	for(int i = 0 ; i < n ;i++){
		
		
		
		if(array[i] < min){
			
		min = array[i];
		
		}
		
	}
	return min ; 
}