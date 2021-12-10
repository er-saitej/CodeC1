/* 
    Author: Sai Tej Sunkara, Software Developer 
    Complexity: none
*/
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

void displayVector(vector<int> vect) {
    for(int value : vect) {
        cout<< value<< " ";
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

    // Doubles the size of array during runtime environment and memory will be allocated contigiously.

    // When doubling of array happens, it is expensive - although it takes O(1) time.

    vector<int> vect;
    vector<int> vectorFill(4, 20); // Fills 4 integers with 20's
    vector<int> vectorCopy(vectorFill);
    vectorCopy.reserve(1000);

    displayVector(vect);
    displayVector(vectorFill);
    displayVector(vectorCopy);

    vect.push_back(101);
    cout<< vect.size()<< " - "<< vect.capacity()<< "\n";
    vect.push_back(201);
    cout<< vect.size()<< " - "<< vect.capacity()<< "\n";
    vect.push_back(301);
    cout<< vect.size()<< " - "<< vect.capacity()<< "\n";
    cout<< vectorCopy.capacity()<< "\n";

    displayVector(vect);

    vect.erase(vect.begin()+1);

    displayVector(vect);

    vect.pop_back();

    displayVector(vect);

    vect.clear();

    displayVector(vect);

    cerr<<((double)clock() - initialTime)/CLOCKS_PER_SEC;
    
    return 0;
}