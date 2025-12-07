#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T>
ostream& operator<<(ostream& os, vector<T>& v) {
    for (auto& i : v) os << i << ' ';
    return os;
}
template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}
void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
const int MOD = 1000000007; 
#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
void fun() {
    int X;
    cin >> X;
 int n;
    cin >> n;
 vi arr(n + 1);
   for (int i = 1; i <= n; i++)
   {
    cin>>arr[i];
   }
   
 int q;
    cin >> q;
  vi arr2(n + 1, 0);
 while (q--) {
        int p;
        cin >> p;

        if (arr2[p] == 0) arr2[p] = 1;
        else arr2[p] = 0;

         int total = X;
        for (int i = 1; i <= n; i++) {
            if (arr2[i] == 1) {
                total += arr[i];
            }
        }
 cout << total << "\n";
    }
}

signed main() {
    Sonic
    fun();
}
  
 
 