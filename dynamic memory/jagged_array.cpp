
#include <iostream>
using namespace std;

int main()
{
    // taking input size of rows
    int n;
    cout << "Enter the no of rows ";
    cin >> n;
    // creating pointer array for row size
    int **arr = new int *[n];
    // creating array  of no of elements in each row
    int *size = new int[n];
    // taking elements input
    for (int i = 0; i < n; i++)
    {
        // input size of elements
        cout << "Enter " << i + 1 << " row size ";
        cin >> size[i];
        // creating column array of that size
        arr[i] = new int[size[i]];
        // input values of elements
        cout << "Enter " << size[i] << " elements for " << i + 1 << " row ";
        for (int j = 0; j < size[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output
    cout << endl
         << "output" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}