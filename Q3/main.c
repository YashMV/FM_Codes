//3. Print the sequence shown in Q1 but the number of rows should be decided by the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
