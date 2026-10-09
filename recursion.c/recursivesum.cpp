// #include<iostream>
// using namespace std;
// int sum_of_digits(int num){
//     if(num==0){
//         return 0;
//     }
//     return(num%10)+sum_of_digits(num/10);
// }


// int main()
// {
//     cout<<sum_of_digits(432);
//     return 0;
// }
#include<iostream>
using namespace std;
void preInpost(int n){
    if(n==0) return ;
    cout<<"pre endl",n;
    preInpost(n-1);
    printf("in %d\n",n);
    preInpost(n-1);
    printf("post %d\n",n);
    return;
}
int main(){
    int n;
    cout<<("enter the number");
    cin>>n;
    preInpost(n);
           return 0; 

    }