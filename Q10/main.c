//10.  Take each element of the 4x4 matrix from the user and print it, then add each element from the 2D matrix and print the sum,
//print the sum of both the diagonals

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sum=0,a[4][4], pd_sum=0, sd_sum=0;
    printf("Enter the array elements\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    printf("You have entered\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            sum=sum+a[i][j];
    }
    printf("\nThe sum of all the elements is: %d", sum);
    for(i=0;i<4;i++)
    {
        pd_sum=pd_sum+a[i][i];
    }
    printf("\nThe sum of principle diagonal is: %d", pd_sum);
    for(i=0;i<4;i++)
    {
        sd_sum=sd_sum+a[i][4-i-1];
    }
    printf("\nThe sum of secondary diagonal is: %d", sd_sum);
    return 0;
}
