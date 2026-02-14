#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks = ");
    scanf("%d",&marks);
    printf("Your marks is = %d\n",marks);
    if(marks<0 || marks>100){
        printf("Invalid Marks\n");
    }
    else if(marks>=80){
        printf("You get A+\n");
    }
    else if(marks>=70){
        printf("You get A\n");
    }    
    else if(marks>=60){
        printf("You get A-\n");
    }    
    else if(marks>=50){
        printf("You get B\n");
    }    
    else if(marks>=40){
        printf("You get C\n");
    }    
    else{
        printf("You get F\n");
    }

    return 0;
}