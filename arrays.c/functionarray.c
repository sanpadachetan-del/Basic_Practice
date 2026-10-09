#include<stdio.h>
void fun(int x[]){
    int temp=x[0];//x[0]=10;
    x[0]=x[1];
    x[1]=temp;
        return;
}
int main(){
   int arr[2]={2,9};//int arr[5]={2,3,4,5,6};
    printf(" %d %d\n",arr[0],arr[1]);//printf("%d\n",arr[0]);
    fun(arr);
    printf(" %d %d\n",arr[0],arr[1]);//printf("%d\n",arr[0]);
return 0;
}