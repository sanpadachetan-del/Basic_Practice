#include<stdio.h>
int main(){
    int n;
    printf("enetr number of rows");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++){//no of lines/row->i
    for (int j = 1; j <=i; j++){//no,of columbs->j
    printf(" * ");
}
    printf("\n");
}
}