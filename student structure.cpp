#include<stdio.h>
 struct student {
 	
 	char name[50];
 	int id ;
 	float marks ;
 	
 };

int main(){
FILE *fptr;
fptr = fopen("student structure.txt","w");
struct student student1,student2,student[7];
printf("Enter your id ; \n");
scanf(" %d", &student1.id);
getchar();
printf("Enter your name : \n");
fgets( student1.name, sizeof( student1.name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student1.marks);
fprintf(fptr,"===========STUDENT N0.1=======\n");
fprintf(fptr,"Student's id = %d\n", student1.id);
fprintf(fptr,"Student name's : %s \n",student1.name);
fprintf(fptr,"Student's marks : %.2f\n",student1.marks);
printf("THANK YOU .");
printf("\n");
printf("Enter your id ; \n");
scanf(" %d", &student2.id);
getchar();
printf("Enter your name : \n");
fgets( student2.name, sizeof( student2.name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student2.marks);
fprintf(fptr,"===========STUDENT N0.2=======\n");
fprintf(fptr,"Student's id = %d\n", student2.id);
fprintf(fptr,"Student name's : %s \n",student2.name);
fprintf(fptr,"Student's marks : %.2f\n",student2.marks);
 printf("THANK YOU \n");
 printf("\n");
 

printf("Enter your id ; \n");
scanf(" %d", &student[0].id);
getchar();
printf("Enter your name : \n");
fgets( student[0].name, sizeof( student[0].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[0].marks);
fprintf(fptr,"===========STUDENT N0.3=======\n");
fprintf(fptr,"Student's id = %d\n", student[0].id);
fprintf(fptr,"Student name's : %s\n",student[0].name);
fprintf(fptr,"Student's marks : %.2f\n",student[0].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[1].id);
getchar();
printf("Enter your name : \n");
fgets( student[1].name, sizeof( student[1].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[1].marks);
fprintf(fptr,"===========STUDENT N0.4=======\n");
fprintf(fptr,"Student's id = %d\n", student[1].id);
fprintf(fptr,"Student name's : %s\n",student[1].name);
fprintf(fptr,"Student's marks : %.2f\n",student[1].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[2].id);
getchar();
printf("Enter your name : \n");
fgets( student[2].name, sizeof( student[2].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[2].marks);
fprintf(fptr,"===========STUDENT N0.5=======\n");
fprintf(fptr,"Student's id = %d\n", student[2].id);
fprintf(fptr,"Student name's : %s\n",student[2].name);
fprintf(fptr,"Student's marks : %.2f\n",student[2].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[3].id);
getchar();
printf("Enter your name : \n");
fgets( student[3].name, sizeof( student[3].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[3].marks);
fprintf(fptr,"===========STUDENT N0.6=======\n");
fprintf(fptr,"Student's id = %d\n", student[3].id);
fprintf(fptr,"Student name's : %s\n",student[3].name);
fprintf(fptr,"Student's marks : %.2f\n",student[3].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[4].id);
getchar();
printf("Enter your name : \n");
fgets( student[4].name, sizeof( student[4].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[4].marks);
fprintf(fptr,"===========STUDENT N0.7=======\n");
fprintf(fptr,"Student's id = %d\n", student[4].id);
fprintf(fptr,"Student name's : %s\n",student[4].name);
fprintf(fptr,"Student's marks : %.2f\n",student[4].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[5].id);
getchar();
printf("Enter your name : \n");
fgets( student[5].name, sizeof( student[5].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[5].marks);
fprintf(fptr,"===========STUDENT N0.8=======\n");
fprintf(fptr,"Student's id = %d\n", student[5].id);
fprintf(fptr,"Student name's : %s\n",student[5].name);
fprintf(fptr,"Student's marks : %.2f\n",student[5].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[6].id);
getchar();
printf("Enter your name : \n");
fgets( student[6].name, sizeof( student[6].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[6].marks);
fprintf(fptr,"===========STUDENT N0.9=======\n");
fprintf(fptr,"Student's id = %d\n", student[6].id);
fprintf(fptr,"Student name's : %s\n",student[6].name);
fprintf(fptr,"Student's marks : %.2f\n",student[6].marks);
printf("THANK YOU .");
printf("\n");


printf("Enter your id ; \n");
scanf(" %d", &student[7].id);
getchar();
printf("Enter your name : \n");
fgets( student[7].name, sizeof( student[7].name ), stdin);
printf("Enter your marks : \n");
scanf(" %f", &student[7].marks);
fprintf(fptr,"===========STUDENT N0.10=======\n");
fprintf(fptr,"Student's id = %d\n", student[7].id);
fprintf(fptr,"Student name's : %s\n",student[7].name);
fprintf(fptr,"Student's marks : %.2f\n",student[7].marks);
printf("THANK YOU .");
printf("\n");
return 0 ; 
} 