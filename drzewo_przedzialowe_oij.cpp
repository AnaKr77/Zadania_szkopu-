#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int64_t> t; 

int main() {
    int n;
    cin >> n;
    int64_t l = 1;
    for (int i = 0; i < n; i++) {
        l *= 2;
    }
    
    int p;
    cin >> p;
    
    for (int i = 0; i < p; i++) {
        int64_t a;
        cin >> a;
        int64_t b = a;

        while (a < l || b < l) {
            a *= 2;
            b = b * 2 + 1;
        }

        if (a >= l && a < 2 * l) {
            t.push_back(a - l);
        }
        if (b >= l && b < 2 * l) {
            t.push_back(b - l);
        }
    }

    if (!t.empty()) {
        auto min_it = min_element(t.begin(), t.end());
        auto max_it = max_element(t.begin(), t.end());
        cout << *min_it << " " << *max_it << endl;
    } else {
        cout << "0 0" << endl;
    }

    return 0;
}
