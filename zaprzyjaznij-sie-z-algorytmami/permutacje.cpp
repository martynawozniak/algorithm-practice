#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, a;
    int wynik = 1;
    cin >> n;
    vector <int> zlicz(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a <= n)
            zlicz[a-1]++;
    }
    for(int i = 0; i < n; i++) {
        if(zlicz[i] != 1)
            wynik = 0;
    }
    if(wynik == 1)
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}