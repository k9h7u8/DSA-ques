#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "Address: " << ptr << "-------" << ptr2 << endl;
    cout << "value: " << i << " " << *ptr << " " << **ptr2 << endl;
    cout << "Address of i: " << &i << " " << ptr << " " << *ptr2 << endl;
    cout << "Address of ptr: " << &ptr << " " << ptr2 << endl;

    return 0;
}