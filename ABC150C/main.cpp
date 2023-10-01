#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int, char**) {
    int n;
    cin >> n;
    vector<int> Origin(n);
    for (int i = 0; i < n; i++) {
        Origin[i] = i;
    }
    vector<int> P(n);
    vector<int> Q(n);
    for (int i = 0; i < n; i++) {
        cin >> P[i];
        P[i]--;
    }
    for (int i = 0; i < n; i++) {
        cin >> Q[i];
        Q[i]--;
    }
    int a = -1;
    int b = -1;
    int count = 0;
    do {
        count++;
        if (Origin == P)a = count;
        if (Origin == Q)b = count;
    } while (next_permutation(Origin.begin(),Origin.end()));
    cout << abs(a - b) << endl;
    return 0;
}