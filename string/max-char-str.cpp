#include <iostream>
using namespace std;

char getMaxChar(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int number = 0;
        if (c >= 'a' && c <= 'z')
        {
            number = c - 'a';
        }
        else
        {
            number = c - 'A';
        }
        arr[number]++;
    }
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    cout << "Maximum occurring character in string is: " << getMaxChar(s) << endl;
    return 0;
}