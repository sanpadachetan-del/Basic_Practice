#include <stdio.h>
 int main() {
    int num = 10;  // Declare an integer variable
    int *ptr;      // Declare a pointer variable
    
    ptr = &num;    // Store the address of num in ptr
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in pointer ptr: %p\n", ptr);
    printf("Value accessed using pointer ptr: %d\n", *ptr);
 
    return 0 ;
}