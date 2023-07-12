#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1;
    int next;
    for (int i = 2; i <= n; i++)
    {
        next = a + b;

        a = b;
        b = next;
    }
    return next;
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Value at " << n << " position of fibonacci series is: " << fib(n) << endl;
    return 0;
}