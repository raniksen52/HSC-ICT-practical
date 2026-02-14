#include <stdio.h>

int main()
{
    int a;
    a = 10;
    printf("The value of a = %d\n", a);
    a = 29;
    printf("The value of a = %d\n", a);
    int b = 34;
    printf("The value of b = %d\n",b);

    int c = 43,d = 56;
    printf("The value of c = %d\n", c);
    printf("The value of d = %d\n", d);
    printf("The value of a,b,c,d = %d, %d, %d, %d\n", a, b, c, d);

    float x = 5.4443, y = 7.4544;
    //y = 56.553;
    printf("The value of a,b = %f, %f\n", x, y);

    char t = 'R';
    t = 'G';
    printf("The value of t = %c\n", t);

    const float pi = 3.1416;
    //pi = 3.1;
    printf("The value of a = %f", pi);
    return 0; 
}