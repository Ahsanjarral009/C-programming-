#include<stdio.h>
int main (){
	int sum =0 , i;
	for(int i = 1 ; i <=30 ; i+=3 ){
		sum +=  i ;
		}
	printf(" %d", sum);
 return 0 ; }
// 
// #include <stdio.h>
//
//int main() {
//    int n;  // The upper limit for the range
//    int sum = 0; // Initialize the sum to 0
//
//    printf("Enter an upper limit: ");
//    scanf("%d", &n);
//
//    for (int i = 2; i <= n; i +=3) {
//        sum += i; // Add even numbers to the sum
//    }
//
//    printf("The sum of even numbers from 2 to %d is %d\n", n, sum);
////
//    return 0;
//}
