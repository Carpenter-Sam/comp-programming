// https://usaco.org/index.php?page=viewproblem2&cpid=567
#include <cstdio>
#include <iostream>
using namespace std;

// the argument is the input filename without the extension
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}


int main() {
    setIO("paint");

	int la, ua, lb, ub; 
    cin >> la >> ua >> lb >> ub;

    bool overlapping = false;
    // Overlapping if lower A is less than or equal to lower B and upper A is greater than or equal to upper B
    if ((la <= lb) && (ua >= ub)) {
        overlapping = true;
    }
    // Overlapping if lower A is greater than or equal to lower B and upper A is less than or equal to upper B
    else if ((la >= lb) && (ua <= ub)) {
        overlapping = true;
    }
    // Overlapping if lower A is less than upper B (but more than lower B) 
    else if ((la < ub) && (la > lb)) {
        overlapping = true;
    }
    // Overlapping if upper A is more than lower B (but less than upper B)
    else if ((ua > lb) && (ua < ub)) {
        overlapping = true;
    }

    // Any area overlapping?
    // (Max of upper A and B) - (Min of lower A and B)
    if (overlapping) {
        int l = (la < lb) ? la : lb;
        int u = (ua > ub) ? ua : ub;

        cout << (u - l) << std::endl;
    } 
    // Not overlapping? A + B areas
    else {
        cout << (ua - la) + (ub - lb) << std::endl;
    }
    
    return 0;
}

