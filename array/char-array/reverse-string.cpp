#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main()
{
    char arr[20];
    cout << "Enter the string: " << endl;
    cin >> arr;
    cout << arr << endl;
    int len = getLength(arr);
    cout << "Length of the string is: " << len << endl;
    reverse(arr, len);
    cout << "Reverse of the string is: " << arr << endl;

    return 0;
}