//7. Check the String if it is Palindrome or not

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;
    char str[50], str_rev[50];
    printf("Enter a string: ");
    gets(str);
    n=strlen(str);
    for(i=n-1; i>=0; i--)
    {
        str_rev[i]=str[n-i-1];
    }
    str_rev[n]='\0';
    if(strcmp(str,str_rev)==0)
    {
        printf("The string is a palindrome");
    }
    else
        printf("The string is not a palindrome");
    return 0;
}
