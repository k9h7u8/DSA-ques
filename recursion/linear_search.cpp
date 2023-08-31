#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int n;
    n = 5;
    int arr[5] = {2, 3, 4, 5, 6};
    int ans = linearSearch(arr, n, 63);
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