#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    int *ptr = &num;
    cout << "Address of num: " << ptr << endl;
    cout << "Value of ptr is: " << *ptr << endl;
    int *p = ptr;
    cout << "value of ptr is: " << *p << endl;

    return 0;
}