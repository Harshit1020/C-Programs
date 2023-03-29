#include <stdio.h>

void mergeSort();
void merge();
int arr[50];
int main()
{

    int n;
    printf("Enter the number you wanna sort:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter the element :");
        scanf("%d", &arr[i]);
    }

    merge(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    return 0;
}

void merge(int arr[], int low, int high)
{

    int mid;

    if (low < high)
    {

        mid = (low + high) / 2;
        merge(arr, low, mid);
        merge(arr, mid + 1, high);
        mergeSort(arr, low, mid, high);
    }
}

void mergeSort(int arr[], int low, int mid, int high)
{

    int i, j, k, h, b[50];

    h = low;
    i = low;
    j = mid + 1;
    while (h <= mid && j <= high)
    {

        if (arr[h] <= arr[j])
        {

            b[i] = arr[h];
            h++;
        }
        else
        {

            b[i] = arr[j];
            j++;
        }

        i++;
    }
    if (h > mid)
    {

        for (k = j; k <= high; k++)
        {

            b[i] = arr[k];
            i++;
        }
    }

    else
    {

        for (k = low; k <= mid; k++)
        {

            b[i] = arr[k];
            i++;
        }
    }

    for (k = low; k <= high; k++)
    {

        arr[k] = b[k];
    }
}