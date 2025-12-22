//CODEFORCES PROBLEM: TWIN PERMUTATION(https://codeforces.com/contest/1831)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
/*focus on making it equal instead of less than😀*/
 
 
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
   for(ll i=0;i<n;i++) cout<<n+1-a[i]<<" ";
   cout<<endl;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}