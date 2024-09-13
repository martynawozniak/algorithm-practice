#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, p, k;
    cin >> n >> m;
    vector<vector<int>> wieki(5, vector<int>(n + 1,0));
    vector<int> dane(n,0);

    for (int i = 0; i < n; i++) {
        cin >> dane[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            if (dane[j] == i + 1) {
                if (j == 0) wieki[i][j+1] = 1;
                else wieki[i][j+1] = wieki[i][j] + 1;
            }
            else wieki[i][j+1] = wieki[i][j];
        }
    }


    for (int i = 0; i < m; i++) {
        cin >> p >> k;
        for (int j = 0; j < 5; j++) {
            if (wieki[j][k] - wieki[j][p - 1] > 0) {
                cout << j + 1;
                break;
            }
        }
        cout << endl;
    }
    
    return 0;
}