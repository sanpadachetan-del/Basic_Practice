#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways =0;
    int dowanways=0;
    if(cr==er && cc==ec)return 1;
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec);

    }if(cc==ec){
        dowanways+=maze(cr+1,cc,er,ec);

    }if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
         dowanways+=maze(cr+1,cc,er,ec);

    }int totalways=rightways +dowanways;
    return totalways;

}

int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    int m ;
    printf("enter the number of colums");
    scanf("%d",&m);
    int numofways=maze(1,1,m,n);
    printf("%d",numofways);
    return 0;


}