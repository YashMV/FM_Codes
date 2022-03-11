//9. Take an Array from the user and print the size of the array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,a[50];
    printf("Enter the number of elements: ");
    scanf("%d",&m);
    printf("Enter the array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The size of the array is: %d", m*sizeof(a[0]));
    return 0;
}
