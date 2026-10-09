#include<stdio.h>
int main(){
   int a,b;
   printf("a is");
   scanf("%d",&a);
   printf("b is");
   scanf("%d",&b);
   int multiply =a*b;
   int division =a/b;
   int subtraction=a-b;
   int addition = a+b;
   printf("multiply%d\n",multiply);
   printf("division %d\n",division);
   printf("substraction %d\n",subtraction);
   printf("addition%d\n",addition);
return 0;
}