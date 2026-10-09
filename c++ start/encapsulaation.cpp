// #include<iostream>
// using namespace std;
// class student{
//     private:
//     int marks;
//     public:
//     void setmarks(int m)
// {
//     marks=m;

// }void showmarks(){
//     cout<<"marks"<<marks;

// }
// };
// int main(){
//     student s1;
//     s1.setmarks(85);
//     s1.showmarks();
//     return 0;
// }
#include<iostream>
using namespace std;
void increasing(int n){
    if(n==0) return;
    increasing(n-1);
    cout<<"the number is"<<increasing<<endl;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    increasing(n);
    return 0;

}