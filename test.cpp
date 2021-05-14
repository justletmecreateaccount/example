#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int find(vector<int> a,int i,int n,int time) {
    if (i == n) return 0;
    if (time < 0) return -1;
    int x, y;
    x = time-find(a, i + 1, n, time);
    y = time-find(a, i + 1, n, time-a[i]);
    if (x > y)  return (time-x); else return (time-y);
}



int main() {
    int n, t,x;
    cin >> n >> t;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    //sort(a.begin(),a.end())
    int ans = find(a,0,n,t);
    cout << ans << endl;
    return 0;
}