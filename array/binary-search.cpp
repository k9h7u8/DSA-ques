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

int binarySearch(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    int mid = (beg + end) / 2;
    // mid = beg + (end-beg)/2
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
        mid = (beg + end) / 2;
    }

    return -1;
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
    int key;
    cin >> key;
    int index = binarySearch(arr, size, key);
    cout << index;

    return 0;
}