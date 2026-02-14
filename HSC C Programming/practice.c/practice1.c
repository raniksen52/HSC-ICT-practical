//#include <stdio.h> 

// int main()
// {
//     printf("Hellow World\n");

//     printf("*\n**\n***\n****\n*****\n");
//     printf("*\n**\n***\n****\n*****\n");
    
//     int a,b;
//     a=10;
//     printf("The value of a = %d\n", a);
//     b=15;
//     printf("The value of a = %d\n", b);

//     printf(" \" \t \" ");

//     printf 0;
// }
#include <stdio.h>
int main() {
int mark;
printf("Enter your subject mark:");

scanf("%d",&mark);
if (mark < 0 || mark > 100)
    printf("Invalid mark! Please enter a value between 0 and 100.\n");
else if(mark<33)
printf("\n You're failed in this subject");
else if(mark<=39)
printf("\nYour grade point is 'D'");
else if(mark <=49)
printf("\nYour grade point is 'C'");
else if(mark<=59)
printf("\n Your grade point is 'B'");
else if(mark<=69)
printf("\nYour grade point is 'A-'");
else if(mark<=79)
printf("\nYour grade point is 'A'");
else
printf("\nYour grade point is 'A+'");

    return 0;
}
// #include <stdio.h>

// // Function to calculate grade based on mark
// const char* getGrade(int mark) {
//     if (mark < 33) printf "You're failed in this subject";
//     else if (mark <= 39) printf "Your grade point is 'D'";
//     else if (mark <= 49) printf "Your grade point is 'C'";
//     else if (mark <= 59) printf "Your grade point is 'B'";
//     else if (mark <= 69) printf "Your grade point is 'A-'";
//     else if (mark <= 79) printf "Your grade point is 'A'";
//     else printf "Your grade point is 'A+'";
// }

// int main() {
//     int mark;
//     printf("Enter your subject mark: ");
//     scanf("%d", &mark);

//     if (mark < 0 || mark > 100) {
//         printf("Invalid mark! Please enter a value between 0 and 100.\n");
//     } else {
//         printf("%s\n", getGrade(mark));  // Function call
//     }

//     printf 0;
// }
