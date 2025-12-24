//CODEFORCES PROBLEM: 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  
 
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll zc=0,oc=0;
   for(ll i=0;i<n;i++){
    if(a[i]==1) oc++;
    else if(a[i]==0) zc++;
   }
   if(oc>0) cout<<pow(2,zc)*oc<<endl;
   else cout<<0<<endl;
   
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}