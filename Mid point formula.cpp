#include<stdio.h>
#include<math.h>
int main(){
	printf("_____________________Calculating Mid Point___________________\n");
	double x1,x2,y1,y2;
	double formula1,formula2,formula3;
	printf("Enter the values of x1,x2,y1,y2 : \n");
	scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2);
	formula1 = ( x1+x2 )/2;
	formula2 =( y1+y2 )/2;
	printf("Mid point is :(%.1lf,%.1lf)\n",formula1,formula2);
	printf("_____________________Calculating Distance______________________\n");
	formula3 = sqrt(pow(x2 - x1,2)+pow(y2 - y1,2));
	printf("Distance is : %.1lf ",formula3);
	return 0;
}