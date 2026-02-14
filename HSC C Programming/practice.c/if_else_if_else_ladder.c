#include <stdio.h>
int main(){
    //int a,b;
    /* printf("Enter two int number=");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater than %d\n",a,b);

    }
    else if(a==b){
        printf("%d is equal to %d\n",a,b);
    }
    else{
        printf("%d is less than %d\n",a,b);
        
    } */
     /* printf("Enter 1st int number = ");
     scanf("%d",&a);
     printf("Enter 2nd int number = ");
     scanf("%d",&b);
     printf("A = %d\n",a);
     printf("B = %d\n",b);
     if(a>b){
        printf("A is greater than B\n",a,b);

    }
    else if(a==b){
        printf("A is equal to B\n",a,b);
    }
    else{
        printf("A is less than B\n",a,b);
        
    }*/

    int a;
    printf("Inter any number = ");
    scanf("%d",&a);
    //5printf("A = %d\n",a);
    /* if(a>0){
    printf("The number is positive\n");
    }
    else if(a==0){
        printf("The number is Zero\n");
    }
    else{
        printf("The number is negative\n");
    } */
     if(a<0){
    printf("The number is negative\n");
    }
    else if(a>0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is zero\n");
    }
    return 0; 
}