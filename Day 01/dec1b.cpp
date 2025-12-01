#include<bits/stdc++.h>

using namespace std;
typedef long ll;


void solve(){
    ll k,n,w;
    cin>>k>>n>>w;
    ll banana_cost =  w*0.5*(2*k+(w-1)*k); //using A.P formula
    ll ans = banana_cost>n ? banana_cost-n :0;
    cout<<ans<<endl;
}

int main(){
    solve();
    return 0;
}