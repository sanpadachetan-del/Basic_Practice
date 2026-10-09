
#include<iostream>
using namespace std;
int factorial(int n){
  if(n==1 || n==0) return 1;
  int factorial=n*factorial(n-1);
  return factorial;
}

{
  int n;
  cout<<"enter the number";
  cin>>n ;
  int fact=factorial(n);
  cout<<"factorial"=fact;
  return 0;

}