#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, rev;

    cout << "Enter a string: ";
    cin >> s;

    rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
