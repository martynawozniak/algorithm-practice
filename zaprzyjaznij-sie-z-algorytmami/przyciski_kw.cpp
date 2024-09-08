#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, l, max_licz = 0;
    cin >> n >> m;
    vector<int> przyciski(n+1,0);
    for (int i = 0; i < m; i++) {
        cin >> l;
        if (l != n + 1) {
            przyciski[l]++;
            max_licz = max(przyciski[l], max_licz);
        }
        else
            fill(przyciski.begin(), przyciski.end(), max_licz);
    }

    for (int i = 1; i < n + 1; i++) {
        cout << przyciski[i] << " ";
    }
    return 0;
}