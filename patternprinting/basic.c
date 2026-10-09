#include<stdio.h>
void england(){
    printf("the aarti my girlfriend");
    australia();
    return ;
} void australia(){
    printf("the nandni is my second gf");
    england();
    return ;
} void india(){
    printf("the third girlfriend is monika");
    australia();
    return ;
}int main(){
    india();
    return 0;
}