#include <iostream>
using namespace std;

int main()
{
    char ch[5] = "abcd";
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;

    char temp = 'z';
    char *s = &temp;
    cout << s << endl;

    return 0;
}