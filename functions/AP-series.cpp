#include <iostream>
using namespace std;

int apSeries(int n)
{
    int ap = 3 * n + 7;
    return ap;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Value of n th term is: " << apSeries(n) << endl;

    return 0;
}