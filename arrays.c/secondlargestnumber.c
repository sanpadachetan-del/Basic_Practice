#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]= {-7,-3,-4,-77,-34,-45,-56};
    int max = INT_MIN;
    int smax=INT_MIN;
    for ( int i = 1; i <= 6; i++)
    {if(max<=arr[i]){
        max=arr[i];}
    }for ( int i = 1; i <= 6; i++)
    {if(arr[i]!=max && smax<=arr[i]){
        smax=arr[i];
        /* code */
    }
    printf("%d",smax);
}}