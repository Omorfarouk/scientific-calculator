#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void SIN();
void COS();
void TAN();
int main(){

printf("\t scientific calculator!!\n\n");
int choice;
printf(" 1 : Addition \n");
printf(" 2 : Subtraction \n");
printf(" 3 : Multiplication \n");
printf(" 4 : Division \n");
printf(" 5 : Modulus\n");
printf(" 6 : Power \n");
printf(" 7 : Factorial \n");
printf(" 8 : square \n");
printf(" 9 : cube \n");
printf(" 10 : squareroot\n");
printf(" 11 : sin()\n");
printf(" 12 : cos()\n");
printf(" 13 : tan()\n");
while(1){
printf("\n Choose operator: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
addition();
break;
case 2:
subtraction();
break;
case 3:
multiplication();
break;
case 4:
division();
break;
case 5:
modulus();
break;
case 6:
power();
break;
case 7:
factorial();
break;
case 8:
square();
break;
case 9:
cube();
break;
case 10:
squareroot();
break;
case 11:
SIN();
break;
case 12:
COS();
break;
case 13:
TAN();
break;
case 0:
exit(0);
default:
printf("!! please enter valid operation");

}
}
return 0;
}
void addition(){
printf("Enter the numbers you want to add: ");
int a,b;
scanf("%d%d",&a,&b);
printf(" sum = %d\n",a+b);
}
void subtraction(){
printf("Enter the numbers you want to subtract: ");
int a,b;
scanf("%d%d",&a,&b);
printf(" subtraction= %d\n",a-b);
}
void multiplication(){
printf("Enter the numbers you want to multiply: ");
int a,b;
scanf("%d%d",&a,&b);
printf(" multiplication = %d\n",a*b);

}
void division(){
printf("Enter the numbers you want to divide: ");
int a,b;
scanf("%d%d",&a,&b);
printf(" division %f\n",(float)a/(float)b);
}
void modulus(){
printf("Enter the numbers you want to find modulus of: ");
int a,b;
scanf("%d%d",&a,&b);
printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
int n,factorial;
printf("Enter the number you want the factorial of: ");
scanf("%d",&n);
factorial=1;
for(int i=1;i<=n;i++){
factorial=factorial*i;
}

printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
double b;
double p;
printf("Enter the base and the power: ");
scanf("%lf%lf",&b,&p);
double e=pow(b,p);
printf("The power is %lf",e);
}
void square(){
double b;
printf("Enter the number you want the square of: ");
scanf("%lf",&b);
double p=pow(b,2);
printf("The square of %lf is %lf",b,p);
}
void cube(){
double b;
printf("Enter the number you want the cube of: ");
scanf("%lf",&b);

double p=pow(b,3);
printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
double b;
printf("Enter the number you want the square root of : ");
scanf("%lf",&b);
double s = sqrt(b);
printf("The square root of %lf is %lf",b,s);
}
void SIN(){
double b;
printf("enter the value:");
scanf("%lf",&b);
double si=sin(b);
printf("sin(%lf)=%.2lf",b,si);
}
void COS(){
double b;
printf("enter the value:");
scanf("%lf",&b);

double co=cos(b);
printf("cos(%lf)=%.2lf",b,co);
}
void TAN(){
double b;
printf("enter the value:");
scanf("%lf",&b);
double ta=tan(b);
printf("tan(%lf)=%.2lf",b,ta);
}