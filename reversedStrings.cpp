    // Sean Coffman 8/28/24
    // reversedStrings.cpp

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int r;
    cout << "\nPlease enter a string:";
    getline(cin, str);
    for(r = str.length() - 1; r >= 0; r--)
    {
        cout << str[r];
    }
    return 0;
}