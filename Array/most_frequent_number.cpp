#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];
    cout << "Enter an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int maxCount = 0, maxRepeatedNumber;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxRepeatedNumber = arr[i];
        }
    }
    cout << maxRepeatedNumber << " - " << maxCount;
}