#include<stdio.h>
int power(int a, int b){//recurtion
    if(b==0)return 1;
    int recANS =a*power(a,b-1);
    return recANS;



//     int x=1; 
//   for(int i=1;i<=b;i++){
//     x=x*a;
//   }
//   return x;
}
int main(){
    int a;
    printf("enter base ");
    scanf("%d",&a);
    int b;
    printf("enter power b");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
            return 0; 
    }