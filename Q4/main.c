//4. Take a String input and count the number of vowels in it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int count=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count=count+1;
    }
    printf("The number of vowels is: %d", count);
    return 0;
}
