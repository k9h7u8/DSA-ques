#include <iostream>
#include <vector>
using namespace std;

// m is the position from where we have to reverse the array
vector<int> reverseArray(vector<int> v, int m)
{
    int start = m + 1;
    int end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void printArray(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    v.push_back(6);
    vector<int> ans = reverseArray(v, 3);
    cout << "Reversed Array " << endl;
    printArray(ans);
    return 0;
}