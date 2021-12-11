#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
using namespace std;

void displayStack(stack<int> stck) {
    while(!stck.empty()) {
        cout<< stck.top()<< " ";
        stck.pop();
    }
    cout<< "\n";
}

int32_t main() {

    clock_t initialTime = clock();

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    stack<int> stck;

    stck.push(10);
    stck.push(45);
    stck.push(90);

    displayStack(stck);

    stck.pop();

    displayStack(stck);

    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;

    return 0;
}