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
int main()
{
    char arr[10];
    cin >> arr;
    cout << arr << endl;
    cout << "Length of the string is: " << getLength(arr) << endl;

    return 0;
}