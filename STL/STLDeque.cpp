#include<bits/stdc++.h>
#include<algorithm>
#include<deque>
using namespace std;

void displayDeque(deque<int> deque) {
    for(auto value: deque) cout<< value<< " ";
    cout<< "\n";
}

int32_t main() {
    clock_t initialTime = clock();

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    deque<int> deque;

    cout<< deque.size();

    displayDeque(deque);

    deque.push_back(10);

    displayDeque(deque);

    deque.pop_back();

    displayDeque(deque);

    deque.push_front(10);

    displayDeque(deque);



    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}