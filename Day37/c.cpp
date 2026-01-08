#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    if((x & (x-1)) ==0 ){
        cout<<1<<endl;
        return 0;
    }
    int ans =0;
    while(x){
        if(x & 1) ans++;
        x = x>>1;
    }
    cout<<ans<<endl;
    return 0;
}