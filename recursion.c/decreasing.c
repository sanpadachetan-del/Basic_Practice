#include<stdio.h> //us
    void increasing(int n){//void greeting(int n){
    if(n==0) return;
      increasing(n-1); //printf("%d\n",n);        //printf("good morning\n");
       printf("%d\n",n);        //decreasing(n-1); //greeting(n-1);   //ye call lgata 
    return ;
}
// cmammet me deacreasing ka code hai

int main(){
    int n;
    printf("enetr the number ");
    scanf("%d",&n);//call  lagay function se
    increasing(n);//greeting(n);
    //for (int  i = 1; i <=n; i++)
    //{ printf ("good morning\n");
        /* code */
   // }
    return 0;
}
// #include<iostream>
// using namespace std;
// void increasing(int n){
//     if(n==0) return;
//     increasing(n-1);
//     cout<<"the number is"<<increasing<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     ci>>n;
//     increasing(n);
//     return 0;

// }