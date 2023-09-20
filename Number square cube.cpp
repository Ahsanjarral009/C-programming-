#include<stdio.h>
int main(){
	int n ;
	printf("For how much number you want conversions : \n"); 
	scanf("%d",&n);
	
	printf("\t<Number>\t<Square>\t<Cube>\n");
	for(int i = 1 ; i <= n ; i++){
	
  printf("\t%d\t\t%d\t\t\t%d",i,i*i,i*i*i);
 printf("\n"); 
}
return 0 ; 
}