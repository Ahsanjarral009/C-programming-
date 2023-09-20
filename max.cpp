#include<stdio.h>
int maximum(int x,int y ,int z);
int minimum(int x , int y , int z);
int main(){
	int number1 , number2 , number3;
	
		printf("Enter the number1,number2,number3 : \n ");
		scanf("%d%d%d",&number1,&number2,&number3);
		printf("%d is Maximum " , maximum(number1,number2,number3));
		printf("%d is minimum ",minimum(number1,number2,number3));
		return 0 ;
	}

int maximum(int x, int y , int z){
	int max ;
	if (y>max){
		max = y;
		
	}
	if (z>max){
		max = z;}
		if (x>max){
		max = x ;}
return max ; }
int minimum(int x , int y , int z ){
	
	int min  = x ;
	if (min > y ){
		min = y;
		
	}
	if (min > z ){
		min = z;}
		if (min > x){
		min = x ;}
return min ; 
}
 
