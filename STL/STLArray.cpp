#include<bits/stdc++.h>
#include<array>
using namespace std;

array<int, 6> updateArray(array<int, 6> arr, int index, int value) {
    arr[index] = value;
    return arr;
}

int32_t main() {
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    arr[0] = 10;
    arr = updateArray(arr, 0, 100);

    for(int i=0; i<arr.size(); ++i) {
        cout<< arr[i]<< " ";
    }

    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC << '\n';
    return 0;
}