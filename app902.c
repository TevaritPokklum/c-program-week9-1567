#include <stdio.h>
int callUserName(){
    //Declarative string
    char firstName[] ="";
    char lastName[] ="";
    printf("Enter strings of First name:");
    scanf("%s",&firstName);
    printf("%n",&firstName);

    printf("Enter strings of Last name:");
    scanf("%s",&lastName);
    printf("%n",&lastName);
    
    printf("%s",&firstName);
    printf("%s",&lastName);

}