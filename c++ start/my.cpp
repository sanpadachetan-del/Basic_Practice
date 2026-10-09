// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"he is from mp and he is handsome boy";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//   if(n==1 || n==0) return 1;
//   int fact=n*factorial(n-1);
//   return fact;
// }

//  int main() {
//   int n;
//   cout<<"enter the number";
//   cin>> n ;
//   int fact=factorial(n);
//   cout<<"factorial=" <<fact;
//   return 0;

// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the base";
//     cin>>a;
//      int b;
//      cout<<"enter power";
//      cin>>b;
//      int p = pow (a,b);
//      cout<<"%d raisad toof power %d,is%d "<<p,a,b;
//      return 0;

//}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=i;j++){
//         cout<<" * ";
//     } cout<<endl;}
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int number [15]={0};
//      number [0]= {10};
//      number [14]={150};
//      for(int i=0;i<15;i++){
//         cout<<number[i]<<" ";
//      }
// }
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("example.txt");   // creates text file

    file << "Hello! This is a text file created using Dev-C++.";

    file.close();
    cout << "File created successfully!";
    return 0;
}