#include <stdio.h>
char a[100];

int main(){
    printf("Enter a letter :\n");
    gets(a); // charecter input

    printf("You've entered: \n"); 
    puts(a); //prints only string
    /* 
     *putchar(a); //prints only charechter
     */
}