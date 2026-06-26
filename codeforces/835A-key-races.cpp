// https://codeforces.com/problemset/problem/835/A
#include <iostream>
using namespace std;

int main() {
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int total1, total2;
    total1 = s * v1 + 2 * t1;
    total2 = s * v2 + 2 * t2;

    if (total1 == total2) {
        cout << "Friendship";
    } else if (total1 < total2) {
        cout << "First";
    } else {
        cout << "Second";
    }

    return 0;
}
