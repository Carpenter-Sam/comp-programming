// https://codeforces.com/problemset/problem/868/A
#include <iostream>
using namespace std;

int main() {
    string target;
    cin >> target;

    int total_words;
    cin >> total_words;

    bool first = false, last = false, full_word = false;

    for (int i = 0; i < total_words; i++) {
        string word;
        cin >> word;

        if (word == target) {
            full_word = true;
            break;
        }

        if (word[0] == target[1]) {
            last = true;
        }
        if (word[1] == target[0]) {
            first = true;
        }

        if (first and last) {
            break;
        }
    }

    if (full_word || (first && last)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
