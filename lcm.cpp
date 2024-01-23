#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2, remainder, gcd, lcm;
    cout<<"Enter the 2 numbers: ";
    cin>>num1>>num2;
    int n1 = num1, n2 = num2;
    while (n2 != 0)
    {
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    
    gcd = n1;
    cout<<"GCD is: "<<gcd<<endl;
    
    lcm = (num1 * num2) / gcd;
    cout<<"LCM is: "<<lcm;
}