//5. Implement Bubble sort and Selection sort. Take the input from the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,arr_bblsort[50],arr_selsort[50],temp,i,small;
    /*Bubble Sort starts*/
    printf("Enter the size of the array: ");
    scanf("%d",&m);
    int n=m;
    printf("Enter an array: ");
    for(i=0; i<m; i++)
        scanf("%d", &arr_bblsort[i]);
    while(n!=0)
    {
        for(i=0; i<m; i++)
        {
            if(arr_bblsort[i]>arr_bblsort[i+1])
            {
                temp=arr_bblsort[i];
                arr_bblsort[i]=arr_bblsort[i+1];
                arr_bblsort[i+1]=temp;
            }
        }
        n--;
    }
    printf("The sorted array by bubble sort is: ");
    for(i=0; i<m; i++)
    {
        printf("%d ",arr_bblsort[i]);
    }
    /*Selection Sort starts*/
    printf("\nEnter the size of the array: ");
    scanf("%d",&m);
    printf("Enter an array: ");
    for(i=0;i<m;i++)
        scanf("%d",&arr_selsort[i]);
    for(i=0;i<m;i++)
    {
        for(small=i+1;small<m;small++)
        if(arr_selsort[small]<arr_selsort[i])
        {
            temp=arr_selsort[i];
            arr_selsort[i]=arr_selsort[small];
            arr_selsort[small]=temp;
        }
    }
    printf("The sorted array by selection sort is : ");
    for(i=0;i<m;i++)
    {
        printf("%d ",arr_selsort[i]);
    }
}
