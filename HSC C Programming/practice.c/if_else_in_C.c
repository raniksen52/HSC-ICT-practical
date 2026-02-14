#include <stdio.h>
int main(){

    //if(43){ //Instead of 43 if we write any thing without 0 it will be print Inside If Block
       // printf("Inside If Block\n");
        //printf("Inside If Block\n");
    //}
   // else{
     //   printf("Inside Else Block\n");
      //  printf("Inside Else Block\n");
   // }
   // printf("End\n");

 /*    if(0){
        printf("Inside If Block\n");
    }
    else{
        printf("Inside Else Block\n");
        printf("Inside Else Block\n");
    }
    printf("End\n"); */


    /* int a;
    printf("Inter any int number = ");
    scanf("%d",&a); */
    /* if(a%2 == 0){
        printf("This nuumber is Even number\n");
    }
    else{
        printf("This number is Odd number\n");
    } */
    /*  if(a%2){
        printf("This nuumber is Odd number\n");
    }
    else{
        printf("This number is Even number\n");
    }

    int b;
    printf("Enter any int number = ");
    scanf("%d",&b);
    if( b>=0){
        printf("This number is positive\n");
    }
    else{
        printf("This number is negative\n");
    } */


    int a,b;
    printf("Enter two int number a & b =");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%d is geater\n",a);
    }
    else{
        printf("%d is geater\n",b);
    }
    printf("End");
}