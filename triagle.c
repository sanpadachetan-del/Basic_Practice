#include<stdio.h>
int main(){
int a;
printf("enter the age of ram");
scanf("%d",&a);
int b;
printf("enter the age of shyam");
scanf("%d",&b);
int c;
printf("enter the age of ajay");
scanf("%d",&c);
if (a>b)
{printf("%d is greatest",a);
    /* code */
}else {
    printf("%d is gretest",c);
}
if (b>c)
{printf("%d is greatest",b);
    
}else{
    printf("%d is greatest",c);
}

}