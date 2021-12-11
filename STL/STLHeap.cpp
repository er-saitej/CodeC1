/* 
    Author: Sai Tej Sunkara, Software Developer 
    Complexity: none
*/
#include<bits/stdc++.h>
#include<array>
#include<queue>
#include<algorithm>
using namespace std;

class MinHeap {
    public:
        bool operator()(int a, int b) { // Check the definitions of operators
            return a>b;
        }
};

class MaxHeap {
    public:
        bool operator()(int a, int b) {
            return a<b;
        }
};

int32_t main() {

    clock_t initialTime = clock();

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    array<int, 6> arr = {10, 45,20, 55, 75, 05};

    priority_queue<int, vector<int>, MaxHeap> maxHeap;    

    for(int i=0; i<arr.size(); ++i) {
        maxHeap.push(arr.at(i));
    }

    while(!maxHeap.empty()) {
        cout<< maxHeap.top()<< " ";
        maxHeap.pop();
    }
    cout<< "\n";

    priority_queue<int, vector<int>, MinHeap> minHeap;

    for(int i=0; i<arr.size(); ++i) {
        minHeap.push(arr.at(i));
    }

    while(!minHeap.empty()) {
        cout<< minHeap.top()<< " ";
        minHeap.pop();
    }

    cerr<<((double)clock() - initialTime)/CLOCKS_PER_SEC;
    
    return 0;
}