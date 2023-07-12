#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of an array " << endl;
    cin >> size;
    int arr[100];
    int sum = 0;
    cout << "Enter the elements of an array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the array is: " << sum;
    return 0;
}