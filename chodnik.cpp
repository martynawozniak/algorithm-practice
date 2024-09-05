#include <iostream>

using namespace std;

int main () {
    long long n, l, suma;
    cin >> n;
    suma = n*(n+1)/2;
    for(int i = 0; i < n-1; i++) {
        cin >> l;
        suma -= l;
    }
    cout << suma;
    return 0;
}