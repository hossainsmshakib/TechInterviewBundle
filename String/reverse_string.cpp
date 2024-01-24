#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int i = 0, j;
    j = str.length() - 1;

    // reverse the string
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout<<"Reverse string is: "<<str;
}