#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string str;
    cout<<"Input a string: ";
    getline(cin, str);
    char maxRepeatedChar;
    int maxCount = 0;
    transform(str.begin(), str.end(), str.begin(), ::tolower);   
    for(int i=0; i<str.length(); i++) {
        int count = 0;
        for(int j=0; j<str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > maxCount) {
        maxCount = count;
        maxRepeatedChar = str[i];
        }
    }
    cout<<maxRepeatedChar<<" - "<<maxCount;
}