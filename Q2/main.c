//2. Take a String, integer, char, double input from user and print it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int x;
    char ch;
    double y;
    printf("Enter a string: ");
    gets(str);
    printf("Your have entered: ");
    puts(str);
    printf("Enter an Integer: ");
    scanf("%d", &x);
    printf("Your have entered: %d", x); printf("\n");
    printf("Enter a Character: ");
    scanf(" %c", &ch);
    printf("Your have entered: %c", ch); printf("\n");
    printf("Enter a double: ");
    scanf("%lf", &y);
    printf("Your have entered: %lf", y); printf("\n");
    return 0;
}
