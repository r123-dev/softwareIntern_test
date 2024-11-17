#include<bits/stdc++.h>
using namespace std;

pair<vector<int>, double> solve() {
   
    vector<int> units = {1, 2, 5, 10, 20, 50};
    vector<int> dp(100, INT_MAX); 
    dp[0] = 0; 
    vector<int> res;
    for (int i = 1; i < 100; ++i) {
        for (int unit : units) {
            if (i < unit) {
                //adfljk;a
            }
            else
            dp[i] = min(dp[i], dp[i - unit] + 1);
        }
        res.push_back(dp[i]);
    }

 double sum_units = 0;
    for (int re : res) {
        sum_units += re;
    }
    double avg_units = sum_units / 99;
 return {res, avg_units};
}

int main() {
    pair<vector<int>,double> vt = solve();
    vector<int> results=vt.first;
    double avg=vt.second;
   
    cout << "Results for values 1 to 99: ";
    for (int i = 0; i < results.size(); ++i) {
        if (i != 0) cout << ", ";
        cout << results[i];
    }
    cout << endl;

   
    cout << "Average units used: " << avg << endl;

    return 0;
}