#include<stdio.h>
int main(){
    int n;
    printf("eter the number is");
    scanf("%d",&n);
    int r;
    printf("eter the number is");
    scanf("%d",&r);
int  nfact =1;
int rfact=1;
int nrfact =1;
for (int  i = 2; i <=n; i++)
{        nfact =nfact*i;
    /* code */
}for ( int i =2; i <=r; i++)
{ rfact=  rfact*i;
    /* code */
}for (int i = 2; i <=n-r; i++)
{ nrfact=nrfact*i;
    /* code */
}
int ncr =nfact/(rfact*nrfact);
printf(" %d",ncr);




}