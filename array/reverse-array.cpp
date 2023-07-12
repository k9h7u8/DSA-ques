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

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int size;
    cout << "enter the size of an array " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the elements of an array " << endl;
    getArray(arr, size);
    cout << "Elements of an array " << endl;
    printArray(arr, size);
    reverseArray(arr, size);
    cout << "Reversed Array " << endl;
    printArray(arr, size);
    return 0;
}