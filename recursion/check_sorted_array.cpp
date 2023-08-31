#include <iostream>
using namespace std;

bool sorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        int ans = sorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    bool ans = sorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}