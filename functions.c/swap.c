#include<stdio.h>
int main(){
int a;
printf("enter the a number");
scanf("%d",&a);
int b;
printf("entert b number ");
scanf("%d",&b);//without using third variable imp

a=a+b;
b=a-b;
a=a-b;

//using third variable
// int temp;
// temp=a;
// a=b;
// b=temp;
printf("the value of a %d\n",a);
printf("the value of b %d",b);
return 0;}