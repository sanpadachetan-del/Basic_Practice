#include<iostream>
using namespace std;
int main(){
    int x,y;
    x=(y=20)+5; //Embedded assignment: 'y' is assigned first,then used in 'x'
    cout<<"x:"<<x<<endl; //25
    cout<<"y:"<<y<<endl; //20
    return 0;
}