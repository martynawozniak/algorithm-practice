#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double a, min_licz = 1000000000.00;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        min_licz = min(min_licz, a);
    }
    cout << fixed << setprecision(2) << (double)min_licz;
    return 0;
}