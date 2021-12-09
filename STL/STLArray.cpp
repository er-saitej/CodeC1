#include<bits/stdc++.h>
#include<array>
#include<algorithm>
using namespace std;

void displayArray(array<int, 6> arr) {
    for(int i=0; i<arr.size(); ++i) {
        cout<< arr[i]<< " ";
    }
    cout<< "\n";
}

void updateArray(array<int, 6> &arr, int index, int value) { // Pass array<int, 6> &arr to change values in original array or use array<int, 6> arr to change values in a copy of an array.
    arr[index] = value;
}

int32_t main() {
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    array<int, 6> arr = {1, 6, 3, 5, 4, 2};

    arr[0] = 10;
    updateArray(arr, 0, 100);

    displayArray(arr);

    // Sorting entire array
    sort(arr.begin(), arr.end());

    displayArray(arr);

    // Fill functions
    arr.fill(10);

    displayArray(arr);

    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC << '\n';
    return 0;
}