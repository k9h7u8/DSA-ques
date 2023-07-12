#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a binary number" << endl;
    cin >> n;
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        // int bit = n & 1;
        int bit = n % 10;
        if (bit == 1)
        {
            answer = pow(2, i) + answer;
        }
        n = n / 10;
        i++;
    }
    cout << "Answer: " << answer << endl;
    return 0;
}
