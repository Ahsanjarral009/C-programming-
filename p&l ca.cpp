#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int main(){
 const	char* arr[]={"USA","UK","PAK","CAN","CHI","IND"};
 long int amt[5];
	printf("=================Profit&Loss Calculator==============\n");
	puts("+++++++++++++++++++++Welcome+++++++++++++++++++++++++++++\n");
	printf("\n");
	printf("Lets calculate your profit and loss. \n Press any key to : \n");
	getch();
	system("cls");
	
	
	
	printf("Enter Marketplace  : \n");
	printf("[1].USA\n");
	printf("[2].UK\n");
	printf("[6].PAK\n");
	printf("[7].CAN\n");
	printf("[8].CHI\n");
	printf("[9].IND\n");
	int num ;
	scanf("%d",&num);
	switch (num){
		case 1 : 
		puts("_______PRODUCT DETAILS_______");
	   printf("Total Product cost : \n");
	   scanf(" %ld",&amt[0]);
	   printf("Delivery Charges : \n");
	   scanf(" %ld", &amt[1]);
	   printf("VAT%% : \n");
	   scanf(" %ld", &amt[2]);
	   printf("Product selling price : \n");
	   scanf(" %ld", &amt[3]);
	   printf("Average sale/day : \n ");
	   scanf(" %ld", &amt[4]);
	   system("cls");
	 puts("__________PROFIT CALCULATON____________");
	 long int vat ,total_amt1;
	 vat = (amt[2]*amt[3])/100;
	 total_amt1 = amt[3] + vat;
	 printf("%ld%%vAT on %ld is : %ld\n",amt[2],amt[3],vat);
		  
		  	   break ; 
	  } 
	
	
	   return 0 ; 
}