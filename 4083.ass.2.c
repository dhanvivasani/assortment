
#include <stdio.h>
int main()
{
    int arr[100], size, i,t;
    int max1, max2;
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max1 = max2 = t;
    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);
}

