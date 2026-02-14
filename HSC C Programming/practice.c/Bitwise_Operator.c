#include <stdio.h>
int main(){
    int a,b;
    a = 10;
    b = 6;
    printf("Bitwise and of %d & %d is = %d\n",a,b,a&b);//and(&)
    printf("Bitwise or of %d & %d is = %d\n",a,b,a|b);//or(|)
    printf("Bitwise xor of %d & %d is = %d\n",a,b,a^b);//xor(^)
    printf("Bynary Left shift of %d is = %d\n",a, a<<3);//a<<n hear n=number of space
    printf("Bynary Right shift of %d is = %d\n",a, a>>3);
    printf("Bitwise not of %d is = %d\n",a, ~a);//bitwise not(~) it means it will turn over the bits (0,1) 0 will be 1 and 1 will be 0

}