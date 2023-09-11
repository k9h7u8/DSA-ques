#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return false;
    }
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] > key)
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main()
{
    int n;
    n = 5;
    int arr[5] = {2, 3, 4, 5, 6};
    int ans = binarySearch(arr, 0, n - 1, 50);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    return 0;
}