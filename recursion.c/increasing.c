#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n%2==0)
    cout<<"it is an even number";
    else
    cout<<"it is an odd number";
    getch();
}


// #include<stdio.h> 
// void increasing(int x,int n){
//     if(x>n)return;
//     printf("%d\n",x);
//     increasing(x+1,n);
// }
// int main(){
//     int n; 
//     printf("enetr the number");
//     scanf("%d",&n);
//     increasing(1,n);
//     return 0;

// }
// void increasing(int x,int n){
// if(x>n)return;
// printf("%d \n",x);
// increasing(x+1,n);
// }

// int main(){
//     int n ;
//     printf("enter the number ");
//     scanf("%d",&n);
//     increasing(1,n);
//     return 0;
// }