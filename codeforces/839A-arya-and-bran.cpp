// https://codeforces.com/problemset/problem/839/A
#include <iostream>
using namespace std;

int main() {
    int total_days, days = 0, candies_needed, candies_total = 0;
    cin >> total_days >> candies_needed;

    while (candies_needed > 0 || days++ < total_days) {
        int new_candies;
        cin >> new_candies;
        candies_total += new_candies;

        if (candies_total/8 >= 1) {
            candies_needed -= 8;
            candies_total -= 8;
        } else {
            candies_needed -= candies_total;
            candies_total = 0;
        }
    }

    if (candies_needed == 0) {
        cout << days  << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
