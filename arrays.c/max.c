#include<stdio.h>
int main(){
    int arr[7]= {2,3,4,-77,-34,-45,-56};
    int minimum=arr[0];
    for ( int i = 0; i < 6; i++)
    {if(minimum>arr[i]){
        minimum=arr[i];
    }
        /* code */
    }
    printf("%d",minimum);

    // int arr[7]= {2,3,4,-77,-34,-45,-56};
    // int max=arr[0];
    // for ( int i = 0; i < 6; i++)
    // {if(max<arr[i]){
    //     max=arr[i];
    // }
    //     /* code */
    // }
    // printf("%d",max);

}