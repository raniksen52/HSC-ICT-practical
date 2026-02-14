#include <stdio.h>
int main()
{
    int a,b;
    a = 5;
    b = 6;
    printf("%d\n", a>6);
    printf("%d\n", a>=5);
    printf("%d\n", a>4);
    printf("%d\n", a>b);
    printf("%d\n", b>a);
    printf("%d\n", a>=b);
    printf("%d\n", b>=a);
    printf("%d\n", b==a);
    printf("%d\n", b!=a);
}