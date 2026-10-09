#include<stdio.h>
int main(){
    int n;
    printf("the number is ");
    scanf("%d",&n);
    int sum=0;
    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    printf("sum of even numbers from %d\n",sum);
}
    