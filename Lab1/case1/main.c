#include <stdio.h>

int summation(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int maximum(int arr[], int n)
{
    int max_value = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }
    return max_value;
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = summation(arr, n);
    int max = maximum(arr, n);

    printf("Sum of the elements: %d\n", sum);
    printf("Maximum element: %d\n", max);

    return 0;
}
