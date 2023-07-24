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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
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
    cout << "Elements of an array after sorting: " << endl;
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}