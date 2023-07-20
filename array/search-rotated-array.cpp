#include <iostream>
using namespace std;
void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int beg = s;
    int end = e;
    int mid = beg + (end - beg) / 2;
    while (beg <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = beg + (end - beg) / 2;
    }

    return -1;
}

int pivotElement(int arr[], int n)
{
    int beg = 0;
    int end = n - 1;
    int mid = beg + (end - beg) / 2;
    while (beg < end)
    {
        if (arr[mid] >= arr[0])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (beg + end) / 2;
    }

    return beg;
}

int main()
{
    int size;
    cout << "Enter the size of an array " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the elements of an array " << endl;
    getArray(arr, size);
    cout << "Elements of an array " << endl;
    printArray(arr, size);
    cout << "Enter the elements for search " << endl;
    int k;
    cin >> k;
    int pivot = pivotElement(arr, size);
    if (k >= arr[pivot] && k <= arr[size - 1])
    {
        cout << "Element is present at index: " << binarySearch(arr, pivot, size - 1, k);
    }
    else
    {
        cout << "Element is present at index: " << binarySearch(arr, 0, pivot - 1, k);
    }

    return 0;
}