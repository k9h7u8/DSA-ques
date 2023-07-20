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
    // return end;
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
    int pivot = pivotElement(arr, size);
    cout << "Pivot element is present at index " << pivot;

    return 0;
}