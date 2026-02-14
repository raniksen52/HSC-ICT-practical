#include <stdio.h>
int main()
{
    int a, b;
    a = 5;
    b = 8;
    printf("%d\n", (a>4)&&(a>2)); //&& (and) both if both 1(true) so print 1
    printf("%d\n", (a>4)&&(a>b));
    printf("%d\n", (a>b)||(a>4));//|| (or) if any one is 1(true) so print 1
    printf("%d\n", (2>b)||(a>b));
    printf("%d\n", (a>2));
    printf("%d\n", !(a>4));// ! (not) if is it 1 so print 0
}