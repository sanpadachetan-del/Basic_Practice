#include<iostream>
using namespace std;
int main(){
    //print number 1 to 10
    int i=1;
    do{
        cout<<i<<" ";
        i++;

    }while(i<=10);

    //password check
    string password;
    while(password!="admin123") {
        cout<<"enter passsword:";
        cin>>password;
    }

    return 0;

    
}