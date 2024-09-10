#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, l, prev_licz = 0;
    int max_licz = 0;
    cin >> n >> m;
    vector<int> przyciski(n+1,0);
    for (int i = 0; i < m; i++) {
        cin >> l;
        if (l != n + 1) {
            if(przyciski[l] < prev_licz) przyciski[l] = prev_licz + 1;
            else przyciski[l]++;
            max_licz = max(przyciski[l], max_licz);
        }
        else {
            prev_licz = max_licz;
        }
    }

    for (int i = 1; i < n + 1; i++) {
        if (przyciski[i] < prev_licz) przyciski[i] = prev_licz;
    }

    for (int i = 1; i < n + 1; i++) {
        cout << przyciski[i] << " ";
    }
    return 0;
}