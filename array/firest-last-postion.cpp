// #include <bits/stdc++.h>
// int firstOcc(vector<int>& arr, int size, int key)
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
//             end = mid-1;
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
// int secondOcc(vector<int>& arr, int size, int key)
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
//             beg = mid+1;
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
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int, int> p;
//     p.first = firstOcc(arr,n,k);
//     p.second= secondOcc(arr,n,k);
//     return p;
// }
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    int mid = (beg + end) / 2;
    int ans = -1;
    while (beg <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}
int secondOcc(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    int mid = (beg + end) / 2;
    int ans = -1;
    while (beg <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            beg = mid + 1;
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

    return ans;
}

int main()
{
    int arr[] = {2, 3, 3, 4, 5};
    cout << "First occurrence of 3 is found at index " << firstOcc(arr, 5, 3) << endl;
    cout << "First occurrence of 3 is found at index " << secondOcc(arr, 5, 3) << endl;
    return 0;
}