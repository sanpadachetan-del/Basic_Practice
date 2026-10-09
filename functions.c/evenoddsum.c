#include<stdio.h>
int main(){
    int arr[7]={2,3,4,5,5,5,4};
    for (int i = 0; i < 6; i++)
    {if(i%2!=0)arr[i]*=2;
        /* code */else arr[i]+=10;
    }
for (int i = 0; i < 6; i++){
    printf("%d ",arr[i]);
}


    
}