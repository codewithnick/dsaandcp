#include<bits/stdc++.h>
using namespace std;

//constant vars and functions
#define NULL_CHAR '\0'
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll

#define FOR(init,cond,inc) for(auto i=init;i<cond;i+=inc)
#define rep(n) for(auto i01=0;i01<n;i01++)
#define fin(x) for ( auto &i : x) cin >> i ;
#define fout(x) for ( auto i : x) cout << i << " ";
#define F first
#define S second
#define EB emplace_back
#define square(a) a*a
#define cube(a) a*a*a
#define sum_of_n(n) (auto)(n*(n+1))/2
#define present(c,x) ((c).find(x) != (c).end())

//IO MANIP
#define SETBOOL cout<<std::boolalpha;
#define UNSETBOOL cout<<std::noboolalpha;
#define SETHEX cout<<std::hex;
#define SETOCT cout<<std::oct;
#define SETDEC cout<<std::dec;
#define SETWIDTH(n) cout<<std::setw(n);
#define SETFILL(n) cout<<std::setfill(n);
#define SET_LEFT cout<<std::left;
#define SET_RIGHT cout<<std::right;

//definition of datatypes
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<int,char> pic;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef map<int,int> mii;
typedef map<int,bool> mib;
typedef map<ll,ll> mll;
typedef map<int,char> mic;
typedef map<char,int> mci;
typedef map<char,bool> mcb;

//for debugging offline only
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
#define nline cout<<'\n';
#define space cout<' ';
#define tabspace cout<<'\t';
//online judge
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
    #define working cerr << "Working here.." << "\n" ;
#else
    #define debug(x)
    #define working
#endif

//constants
const ll mod = 1e9 + 7 , mod0 = 998244353, mod1 = 1e9 + 9;
const bool outputfile=false;
int getcoins(int n,vector<int>&dp){
    if(n<dp.size())return dp[n];
    int ans=n-50,cnt=ans/15;
    n-=cnt*15;
    return cnt+getcoins(n,dp);
}
void nikhil(int testcase,vector<int>&dp){
 //main code here
 int n;
 cin>>n;
 cout<<getcoins(n,dp)<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        if(outputfile){
            freopen("output.txt", "w", stdout);
            freopen("input.txt", "r", stdin);
            freopen("error.txt", "w", stderr);
        }
    #endif

 vector<int> dp(101);
 int arr[16]={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3,1},x=15;
 rep(x){
 dp[i01]=arr[i01];
 }

 for(int i=15;i<dp.size();i++){
    dp[i]=i;
    dp[i]=min(dp[i],1+dp[i-15]);
    dp[i]=min(dp[i],1+dp[i-10]);
    dp[i]=min(dp[i],1+dp[i-6]);
    dp[i]=min(dp[i],1+dp[i-3]);
    dp[i]=min(dp[i],1+dp[i-1]);
 }
    int t=1;
    cin>>t;
    while(t--){
        nikhil(t,dp);
    }
    return 0;
}

/*
*IO MANIP


*/

