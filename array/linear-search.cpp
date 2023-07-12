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

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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
    cout << "Enter the elements for search " << endl;
    int key;
    cin >> key;
    bool found = linearSearch(arr, size, key);
    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is not present";
    }

    return 0;
}