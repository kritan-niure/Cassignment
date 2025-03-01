#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++)
    {
     scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted number:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}



