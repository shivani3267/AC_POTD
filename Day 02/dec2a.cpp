// A. Shizuku Hoshikawa and Farm Legs

#include<bits/stdc++.h>

using namespace std;
typedef long ll;


void solve(){
    int n;
    cin>>n;
    set<pair<int,int>>st;
    //no. of possible int val for x,y in 2x + 4y = n => x+2y=n/2
    for(int x=0;x<=n;x++){
        int y=(n-2*x);
        if(y>=0 && y%4 == 0 ){
            st.insert({x,y/4});
        }
    }
    cout<<st.size()<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}