#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alternateSwap(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{

    int evenArr[] = {2, 4, 6, 7, 8, 3};
    int oddArr[] = {1, 5, 6, 8, 4};
    cout << "Array after alternate swapping of elements" << endl;
    alternateSwap(evenArr, 6);
    printArray(evenArr, 6);
    return 0;
}