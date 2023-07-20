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

int pivotElement(int nums[], int n)
{
    int total = 0;
    for (int x = 0; x < n; x++)
    {
        total += nums[x];
    }

    int curSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (curSum == total - curSum - nums[i])
        {
            return i;
        }
        curSum += nums[i];
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
    int pivot = pivotElement(arr, size);
    cout << "Pivot element is present at index " << pivot;

    return 0;
}