/*debug-------------------------------------------------------------------------------*/
#define _GLIBCXX_DEBUG
#ifdef _DEBUG
#define debug(...) COUT(__VA_ARGS__)
#else
#define debug(...)
#endif
/*include&using-----------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
/*typename----------------------------------------------------------------------------*/
template <class T> using V = vector<T>;
template <class T> using VV = V<V<T>>;
template <class T> using P = pair<T,T>;
template <class T> using M = map<T,T>;
template <class T> using S = set<T>;
template <class T> using PQ = priority_queue<T>;
template <class T> using PQG = priority_queue<T,V<T>,greater<T>>;
using ll = long long;
using st = string;
using vl = V<ll>;
using vvl = V<V<ll>>;
using vc = V<char>;
using vvc = V<V<char>>;
using vs = V<st>;
using vvs = V<V<st>>;
using vb = V<bool>;
using vvb = V<V<bool>>;
/*constant----------------------------------------------------------------------------*/
const ll INF = 1e9;
const ll MOD = 1e9+7;
const vl dx = {1,0,-1,0,1,0,-1,0};
const vl dy = {0,1,0,-1,0,1,0,-1};
/*macro-------------------------------------------------------------------------------*/
#define re(n) for(ll _ = 0; _ < (ll) n; _++)
#define rep(i,n) for(ll i = 0; i < (ll) n; i++)
#define rrep(i,n) for(ll i = (ll) n - 1; i >= 0;i--)
#define repp(i,x,n) for(ll i = (ll) x; i < (ll) n; i++)
#define bitrep(i,n) for(ll i = 0; i < (1<<(ll)n); i++)
#define each(x,A) for(auto &(x): (A))
#define all(A) A.begin(), A.end()
#define len(A) ll(A.size())
#define pb(a) push_back(a)
#define mp make_pair
#define pc cout << setprecision(15) << fixed
/*input-------------------------------------------------------------------------------*/
void CIN(){}
template <class Head,class... Tail>
void CIN(Head&& h,Tail&&... t){cin>>h; CIN(t...);}
#define CINL(...) ll __VA_ARGS__;CIN(__VA_ARGS__)
#define CINS(...) string __VA_ARGS__;CIN(__VA_ARGS__)
#define CIND(...) double __VA_ARGS__;CIN(__VA_ARGS__)
/*output------------------------------------------------------------------------------*/
void COUT(){cout << endl;}
template <class Head, class... Tail>
void COUT(Head h, Tail... t){cout << h << " "; COUT(t...);}
/*function----------------------------------------------------------------------------*/
void Yes(bool ans){cout << (ans? "Yes" : "No") << endl;}
void YES(bool ans){cout << (ans? "YES" : "NO") << endl;}
template <class T> T ceil(T a,T b){return (a+b-1)/b;}
template <class T> void chmax(T &a, const T& b){if(a<b){a=b;}}
template <class T> void chmin(T &a, const T& b){if(a>b){a=b;}}
template <class T> T gcd(T a,T b){if(a<b)swap(a,b); if(a%b==0)return b; return gcd(b,a%b);}
template <class T> T lcm(T a,T b){return a/gcd(a,b)*b;}
template <class T> T modpow(T x,T n,T mod){T res=1; for(ll i=0;i<n;i++){res=res*x%mod;}return res;}
bool range(ll ny, ll nx, ll H, ll W) {if(ny < 0 || ny >= H || nx < 0 || nx >= W) return false; return true;}
/*------------------------------------------------------------------------------------*/


int main() {
  ll n,a1;
  cin >> n >> a1;
  ll s = a1, s2 = a1*a1, ans = 0; // 和、ans
  rep(i,n-1){
    ll a = 0;
    cin >> a;
    ans += (i+1)*a*a + s2 - 2*a*s;
    s += a;
    s2 += a*a;
  }
  COUT(ans);
}