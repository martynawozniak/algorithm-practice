#include <iostream>

using namespace std;

int main () {
    int x, y, s;
    cin >> x >> y >> s;
    if ((y-x)%s == 0)
        cout << (y-x)/s;
    else
        cout << (y-x)/s + 1;
    return 0;
}