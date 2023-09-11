#include <iostream>
using namespace std;

void _mergeSort(int arr[], int temp[], int left, int right);
void merge(int arr[], int temp[], int left, int mid,
           int right);

void mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    _mergeSort(arr, temp, 0, array_size - 1);
}

void _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid = 0;
    if (right > left)
    {
        mid = (right + left) / 2;

        _mergeSort(arr, temp, left, mid);
        _mergeSort(arr, temp, mid + 1, right);

        merge(arr, temp, left, mid + 1, right);
    }
}

void merge(int arr[], int temp[], int left, int mid,
           int right)
{
    int i, j, k;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
