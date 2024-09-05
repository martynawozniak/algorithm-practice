#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
 
 using namespace std;

 int main() {
    int n;
    long sum_temp, curr_diff, sum = 0;
    long min_diff = LONG_MAX;
    cin >> n;
    vector<int> seq(n);
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
        sum += seq[i];
    }
    
    sum_temp = sum;
    for (int i = 0; i < n - 1; i++) {
        sum_temp -= seq[i];
        curr_diff = abs(sum_temp - (sum - sum_temp));
        min_diff = min(curr_diff, min_diff);
    }
    cout << min_diff;
    return 0;
 }