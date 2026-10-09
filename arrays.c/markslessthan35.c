#include<stdio.h>
int main(){
    int marks[10]={23,40,44,45,22,464,4,55,55,66};
    for(int i=0;i<10;i++){
    if(marks[i]<35){
        printf("%d ",i);
    }
}
}