#include <iostream>
using namespace std;

void rowSum(int arr[][3], int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void colSum(int arr[][3], int n, int m)
{
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return rowIndex;
}

int largestColSum(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    int ColIndex = -1;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            ColIndex = j;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return ColIndex;
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

    cout << "Row sum is: " << endl;
    rowSum(arr, 3, 3);
    cout << "Column sum is: " << endl;
    colSum(arr, 3, 3);
    int ans1 = largestRowSum(arr, 3, 3);
    cout << "Maximum row sum is at index: " << ans1 << endl;
    int ans2 = largestColSum(arr, 3, 3);
    cout << "Maximum col sum is at index: " << ans2 << endl;

    return 0;
}