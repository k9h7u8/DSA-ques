
#include <iostream>
using namespace std;

// int firstOcc(int arr[], int size, int key)
// {
//     int beg = 0;
//     int end = size - 1;
//     int mid = (beg + end) / 2;
//     int ans = -1;
//     while (beg <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < key)
//         {
//             beg = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (beg + end) / 2;
//     }

//     return ans;
// }
// int secondOcc(int arr[], int size, int key)
// {
//     int beg = 0;
//     int end = size - 1;
//     int mid = (beg + end) / 2;
//     int ans = -1;
//     while (beg <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             beg = mid + 1;
//         }
//         else if (arr[mid] < key)
//         {
//             beg = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (beg + end) / 2;
//     }

//     return ans;
// }

int firstOcc(int arr[], int beg, int end, int key)
{
    int ans = -1;
    if (beg > end)
    {
        return ans;
    }

    int mid = (beg + end) / 2;

    if (arr[mid] == key)
    {
        ans = mid;
        end = mid - 1;
        return ans;
    }
    if (arr[mid] < key)
    {
        return firstOcc(arr, mid + 1, end, key);
    }
    else
    {
        return firstOcc(arr, beg, mid - 1, key);
    }
}
int secondOcc(int arr[], int beg, int end, int key)
{
    int ans = -1;
    if (beg > end)
    {
        return ans;
    }

    int mid = (beg + end) / 2;

    if (arr[mid] == key)
    {
        beg = mid + 1;
        ans = mid;
        return ans;
    }

    if (arr[mid] < key)
    {
        return firstOcc(arr, mid + 1, end, key);
    }
    else
    {
        return firstOcc(arr, beg, mid - 1, key);
    }
}

int main()
{
    int n = 5;
    int arr[5] = {2, 3, 3, 4, 5};
    cout << "First occurrence of 3 is found at index " << firstOcc(arr, 0, n - 1, 3) << endl;
    cout << "First occurrence of 3 is found at index " << secondOcc(arr, 0, n - 1, 3) << endl;
    return 0;
}