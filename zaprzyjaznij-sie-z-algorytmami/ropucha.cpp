#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, el, liscie;
    cin >> n;   //docelowa pozycja
    cin >> m;   //liczba lisci
    int wynik = n;
    liscie = n;
    vector<int> zlicz(n, 0);
    for (int i = 0; i < m; i++) {
        cin >> el;
        zlicz[el - 1]++;
        if (zlicz[el - 1] > 1) 
            wynik++;
         if (zlicz[el - 1] == 1) 
            liscie--;
        if (liscie == 0) break;
    }
    for (int i = 0; i < n; i++) {
        if (zlicz[i] == 0) {
            wynik = -1;
            break;
        }
    }
    if (n > m) wynik = -1;
    cout << wynik;
    return 0;
}