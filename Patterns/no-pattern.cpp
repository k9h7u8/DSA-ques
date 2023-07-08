#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            int val = j;
            cout << val;
            val++;
        }
        int val = i - 1;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << val;
            val--;
        }
        cout << endl;
    }
    return 0;
}