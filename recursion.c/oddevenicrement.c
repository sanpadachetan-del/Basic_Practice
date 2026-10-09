#include<stdio.h>
int main(){
    int arr[6]={2,3,4,5,4,3};
    for (int i = 0; i <= 5; i++)
    { if(i%2!=0) arr[i]*=2;// ! nahi hai= to multiple kar do
       else arr[i]+=10;
        /* code */
    }for (int i = 0; i <=5; i++)

    {printf("%d ",arr[i]);
        /* code */
    }
    
    
}
