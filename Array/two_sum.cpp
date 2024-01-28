#include<bits/stdc++.h>
using namespace std;

// Complexity:  O(n^2)

bool twosum(int arr[], int size, int target) {
    for(int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                // Print the indices and values of the pair
                cout << "Pair found at indices: " << i << " and " << j << endl;
                cout << "Values of the pair: " << arr[i] << " and " << arr[j] << endl;
                // return true;  // Indicate that a pair is found
            }
        }
    }
    cout << "Pair not found" << endl;
    // return false;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    twosum(arr, size, target);

    return 0;
}
