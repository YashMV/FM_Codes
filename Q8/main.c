//8. Do the Q5 again by implementing the bubble sort algorithm in a separate function.

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[],int ele)
{
    int n,i,temp;
    while(n!=0)
    {
        for(i=0; i<ele; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        n--;
    }
    printf("The sorted array by selection sort is: ");
    for(i=0; i<ele; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int m,arr_bblsort[50],arr_selsort[50],temp,i,small;
    printf("Enter the size of the array: ");
    scanf("%d",&m);
    int n=m;
    printf("Enter an array: ");
    for(i=0; i<m; i++)
        scanf("%d", &arr_bblsort[i]);
    bubbleSort(arr_bblsort,m);
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
