#include<stdio.h>
void swap(int* x,int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}int main(){
    int a=2;
    int b=5;
    swap(&a,&b);
 printf("the a number is %d\n",a);
    printf("the b numbeer is %d",b);


}