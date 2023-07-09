#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a negative number" << endl;
    cin >> n;
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }
    cout << "Answer:" << answer << endl;
    int newBit = ~answer;
    cout << newBit << endl;
    int res = newBit + 1;
    cout << res;
    return 0;
}

// #include <iostream>
// #include <bitset>

// int main()
// {
//     int decimalNumber;
//     std::cout << "Enter a negative decimal number: ";
//     std::cin >> decimalNumber;

//     // Convert the decimal number to binary using two's complement
//     std::bitset<sizeof(int) * 8> binaryNumber(decimalNumber);

//     // Print the binary representation
//     std::cout << "Binary representation: " << binaryNumber << std::endl;

//     return 0;
// }