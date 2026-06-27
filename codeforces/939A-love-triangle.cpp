// https://codeforces.com/problemset/problem/939/A
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int planes;
    cin >> planes;

    unordered_map<int, int> links = {}; // improve by using vector instead of u_map
    bool triangle = false;

    for (int i = 1; i <= planes + 1; i++) {
        int loves;
        cin >> loves;

        links.insert({i, loves});

        if (links.count(loves) == 0) { // Check if B -> C exists
            continue;
        } else if (links.count(links[loves]) == 0) { // Check if C -> ? exists
            continue;
        } else if (links[links[loves]] == i) { // Check if C -> exists
            triangle = true;
            break;
        }
    }

    if (triangle) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    
    return 0;
}
