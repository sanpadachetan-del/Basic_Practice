#include<iostream>
using namespace std;
int sum_natural(int n){
if(n==1){
    return 1;
}return n + sum_natural(n-1);
}


int main()

{
int n;
cout<<"enter the number";
cin>>n;
cout<<"sum of natural number 1 to " << n << " is: " << sum_natural(n);
return 0;
}