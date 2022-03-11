//9. Take an Array from the user and print the size of the array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,a[100],count=0;
    printf("Enter the elements, enter 50 to stop: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==50)
            break;
        count++;
    }
    printf("The size of the array is (excluding 50): %d", count);
    return 0;
}
