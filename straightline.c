#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("x1 is");
    scanf("%d",&x1);
    printf("y1 is");
    scanf("%d",&y1);
    printf("x2 is");
    scanf("%d",&x2);
    printf("y2 is");
    scanf("%d",&y2);
    printf("x3 is ");
    scanf("%d",&x3);
    printf("y3 is");
    scanf("%d",&y3);
    double m1 =(y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);
    if (m1==m2)
    {printf("one streaght line");
        /* code */
    }else{
        printf("not streaght line");
    }
    
    
}