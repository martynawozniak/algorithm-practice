#include <iostream>

using namespace std;

int main () {
    int n, s, c = 0;
    cin >> n;
    long long wynik = 0;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if (s == 0) {
            c++;
        }
        else {
            wynik += c;
        }
    }
    cout << wynik;
    return 0;
}