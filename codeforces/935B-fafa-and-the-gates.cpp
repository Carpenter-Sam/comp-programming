// https://codeforces.com/problemset/problem/935/B
# include <iostream>
using namespace std;

int main() {
    int moves, toll;
    cin >> moves;

    string moveset;
    cin >> moveset;

    bool upper = false;
    int tally, fee = 0;

    if (moveset[0] == 'R') {
        tally = -1;
    } else {
        upper = true;
        tally = 1;
    }

    for (int i = 1; i < moves; i++) {
        char move = moveset[i];
        if (move == 'R') {
            tally -= 1;
        } else {
            tally += 1;
        }

        if (tally == -1 && upper) {
            upper = false;
            fee += 1;
        } else if (tally == 1 && !(upper)) {
            upper = true;
            fee += 1;
        }
        
    }

    cout << fee;

    return 0;
}