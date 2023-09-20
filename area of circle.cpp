#include<stdio.h>
int main(){
	double radius ;
	printf("_________________Calculatinons of circle __________________\n");
	printf("Enter the radius : \n");
	scanf("%lf",&radius);
	printf("Diameter of circle is %.2lf\n",2*radius);
	printf("Circumference of circle is %.2f\n",2*radius*3.14);
	printf("Area of circle is %.2lf",3.14*radius*radius);
	return 0 ;
}