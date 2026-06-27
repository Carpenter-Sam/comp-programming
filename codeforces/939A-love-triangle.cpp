// https://codeforces.com/problemset/problem/939/A
#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int val;
    Node *next;
};

int main() {
    int planes;
    cin >> planes;

    unordered_map<int, Node> links = {};
    bool triangle = false;

    for (int i = 1; i < (planes + 1); i++) {
        links.insert({i, Node()});
    }

    for (int i = 1; i < (planes + 1); i++) {
        int loves;
        cin >> loves;

        // if (links.count(loves) == 0) {
        //     links.insert(loves, Node(0, nullptr));
        // }
        
        // if (links.count(i) == 0) {
        //     links.insert({i, Node(loves, links[loves])});
        // } else {
        //     links[i]
        // }

        links[i].val = loves;
        links[i].next = &links[loves];

        // new node link
            // for node value check unordered map to see if it exists
                // if not exists then add to it
            // check if exists in unordered map
                // doesn't exist? then add it with node
                // does exist? change node
        // check if node forms a triangle
            // triangle if after three links is back in same place

    }
    // check if node forms a triangle
    return 0;
}
