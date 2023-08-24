#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int n, int m, int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3];
    // take input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // take output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Search an element
    int key;
    cout << "Enter the element to search" << endl;
    cin >> key;

    if (isPresent(arr, 3, 3, key))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }

    return 0;
}