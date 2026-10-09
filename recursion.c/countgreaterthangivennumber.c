#include<stdio.h>
int main(){
    int arr[5]={2,4,4,55,5};
    // int count=0;
    
    int count=0;
    int x=5;
    for (int  i = 0; i <=4; i++)
    {
        if(arr[i]>x) count++;
        /* code */
    }printf("%d",count++);
    
}