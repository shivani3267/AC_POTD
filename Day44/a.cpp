//CF:Freinds And Restaurants
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vll vector<long long>
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

//HELPER FUNCTIONS..
const int MAXN = 1e6; vector<bool> isPrime(MAXN + 1, true); vector<int> primes;
void build_sieve(){ isPrime[0]=isPrime[1]=0; for(int i=2;i<=MAXN;i++) if(isPrime[i]){ primes.push_back(i); if((ll)i*i<=MAXN) for(int j=i*i;j<=MAXN;j+=i) isPrime[j]=0; } }
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
vector<ll> sieve(ll n){ vector<bool> prime(n+1,true); for(ll p=2;p*p<=n;p++) if(prime[p]) for(ll i=p*p;i<=n;i+=p) prime[i]=false; vector<ll> res; for(ll p=2;p<=n;p++) if(prime[p]) res.push_back(p); return res; }
void arrinp(vector<ll>&a,ll n){a.resize(n); for(ll i=0;i<n;i++) cin>>a[i];}
void arrprint(vector<ll>&a){ for(ll i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<"\n";}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
//Bit Manipulation
bool isSet(ll n,ll k){ return (n & (1LL << k)) != 0; }
ll setK(ll n, ll k) { return n | (1LL << k); }
ll unsetK(ll n, ll k) { return n & ~(1LL << k); }
ll toggleK(ll n, ll k) { return n ^ (1LL << k); }
string decToBinary(ll n){ string s = ""; while (n > 0) { s = to_string(n % 2) + s; n /= 2; } return s; }

/*-------------<<CODE HERE>>----------------*/
void solve(){
    ll n;
    cin>>n;
    vll a,b;
    arrinp(a,n);
    arrinp(b,n);
    vll c;
    for(ll i=0;i<n;i++)c.push_back(b[i]-a[i]);
    sort(c.begin(),c.end());
    ll i=0,j=n-1;
    ll ans=0;
    while(i<j){
        if(c[i]+c[j] >=0 ){
            ans++;
            i++;
            j--;
        }
        else i++;
    }
    cout<<ans<<"\n";
    return;
}
/*----------------------*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}