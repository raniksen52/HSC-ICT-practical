#include<stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("1st num = %d and 2ns num = %d\n", a, b);

    printf("%d + %d = %d\n", a, b, a+b);

    // int c;
    // c = sum(a, b);// 3, 4
    // printf("%d\n", c);
    
    printf("%d", sum(a, b));

    return 0;
}
