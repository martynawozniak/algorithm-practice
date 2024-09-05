#include <iostream>

using namespace std;

int main () {
    long long n, l, sum;
    cin >> n;
    sum = n*(n+1)/2;
    for(int i = 0; i < n-1; i++) {
        cin >> l;
        sum -= l;
    }
    cout << sum;
    return 0;
}
