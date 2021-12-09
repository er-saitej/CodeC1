#include<bits/stdc++.h>
using namespace std;

void updateArray(int arr[], int index, int value) { // arr pointer address will be updated in this function. So actual array is affected with 3000.
    arr[index] = value;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int arr[3]; // When array is defined, its pointer address is stored in arr

    cout<<arr<<'\n'; // Prints hexadecimal value which is an address for that array

    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }

    updateArray(arr, 2, 3000); // Here pointer address is passed

    for(int j=0; j<n; ++j) {
        cout<<arr[j]<<" ";
    }

    // However in STL array, arr pointer address will not be stored. Instead a copy will be stored because it uses C++ templates.
    return 0;
}