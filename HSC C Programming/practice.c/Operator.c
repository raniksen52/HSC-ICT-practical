#include <stdio.h> 

int main()
{
    int a,b,c;
    a=10;//=,+ operator and a,b operand
    b=3;
    c=a+b;
    printf("The sum of a and b = %d\n",c);
    printf("the sum of %d + %d = %d\n", a,b,c);
    printf("a+b = %d\n",c);
    printf("%d + %d = %d\n",a,b,c);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    double d,f;
    d=20;
    f=6;
    printf("%lf / %lf = %lf\n",d,f,d/f);
    //long double d,f;
    //d=20;
    //f=6;
    //printf("%Lf / %Lf = %Lf\n",d,f,d/f);
}