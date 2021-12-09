#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int arr[3];
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }

    for(int j=0; j<n; ++j) {
        cout<<arr[j]<<" ";
    }

    return 0;
}