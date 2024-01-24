#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string str, temp_string;
    cout<<"Enter a string: ";
    cin>>str;
    int i = 0, j = str.length() - 1;
    temp_string = str;
    
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }

    // Convert both the original and reversed strings to lowercase for case-insensitive comparison
    transform(temp_string.begin(), temp_string.end(), temp_string.begin(), ::tolower);
    transform(str.begin(), str.end(), str.begin(), ::tolower);    
    
    if (str == temp_string)
        cout<<"The string is palindrome.";
    else
        cout<<"The string is not palindrome.";
}