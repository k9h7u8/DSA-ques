
#include <iostream>
using namespace std;

long long int sqrtBS(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int sqrtInt = sqrtBS(n);
    cout << "Square root of " << n << " is: " << morePrecision(n, 3, sqrtInt) << endl;

    return 0;
}