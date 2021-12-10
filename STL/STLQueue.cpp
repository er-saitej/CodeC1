/* 
    Author: Sai Tej Sunkara, Software Developer 
    Complexity: none
*/
#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
using namespace std;

void displayQueue(queue<int> que) {
    while(!que.empty()) {
        cout<< que.front()<< " ";
        que.pop();
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

    queue<int> queue;

    for(int i=0; i<4; ++i) {
        queue.push(i*i);
    }

    displayQueue(queue);

    cerr<<((double)clock() - initialTime)/CLOCKS_PER_SEC;
    
    return 0;
}