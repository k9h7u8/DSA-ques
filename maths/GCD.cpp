#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (x == 0)
        return y;

    if (y == 0)
        return x;

    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return y;
}

int main()
{
    int a, b;
    cout << "Enter two numbers; " << endl;
    cin >> a >> b;

    int ans = gcd(a, b);
    cout << "GCD of " << a << " & " << b << " is: " << ans << endl;

    return 0;
}