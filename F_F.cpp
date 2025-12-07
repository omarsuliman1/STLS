#include <bits/stdc++.h>
using namespace std;

#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

void fun() {
    int n;
    cin >> n;
 vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
 vector<int> ans(n);
    stack<pair<int,int>> st;  
   for(int i = 0; i < n; i++){
        while(!st.empty() && st.top().first >= arr[i])
            st.pop();

        if(st.empty())
            ans[i] = 0;
        else
            ans[i] = st.top().second + 1;   

        st.push({arr[i], i});
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

signed main(){
    Sonic
    fun();
}
