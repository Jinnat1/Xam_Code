#include <stdio.h>
void minimum (int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i = 0; i< n; i++)
    if (arr[i] < min)
        min = arr[i];

     printf("Minimum value is = %d",min);
}

int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    minimum(arr, 5);
    return 0;
}
