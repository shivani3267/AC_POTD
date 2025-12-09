// Code forces B:Long Long https://codeforces.com/contest/1843/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+= abs(a[i]);
    } 
    ll opcnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]<0){
            while(i<n && a[i]<=0) i++;
            opcnt++;
        }
    }
    cout<<sum <<" "<<opcnt<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}