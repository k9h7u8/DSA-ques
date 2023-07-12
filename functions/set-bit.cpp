#include <iostream>
using namespace std;

int setBit(int a, int b)
{
    int count = 0;

    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Total no of set bits: " << setBit(a, b) << endl;

    return 0;
}