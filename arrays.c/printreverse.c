#include<stdio.h>
int main(){
    int arr[5];
    for ( int i = 0; i <=4; i++)
    {printf(" enter the elements %d\n",i+1);
        scanf("%d",&arr[i]);
        /* code */
    }for ( int i = 4; i >=0; i--)
    {printf(" %d",arr[i]);
        
    }
}