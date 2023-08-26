#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};
    cout << "Address of array " << arr << endl;
    cout << "Address of array " << &arr[0] << endl;
    cout << "value of array at 0 position " << arr[0] << endl;
    cout << 0 [arr] << endl;
    cout << "value of array at 0 position " << *arr << endl;
    cout << *arr + 1 << endl;
    cout << "value of array at 1 position " << arr[1] << endl;
    cout << "value of array at 1 position " << *(arr + 1) << endl;
    cout << "--------------------------------" << endl;
    int temp[10];
    cout << sizeof(temp) << endl;
    int *s = temp;
    cout << sizeof(s) << endl;
    cout << sizeof(*s) << endl;
    cout << sizeof(&s) << endl;
    return 0;
}