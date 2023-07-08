#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int start = 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << start;
            start++;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "*";
        }
        int val = n - i + 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << val;
            val--;
        }
        cout << endl;
    }
    return 0;
}