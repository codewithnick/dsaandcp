


#include<bits/stdc++.h>
using namespace std;

//constant vars and functions
#define NULL_CHAR '\0'
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define size(x) ((int)(x).size())
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

bool comp(int a,int b){
    return abs(a)<abs(b);
}
void nikhil(int testcase){
 //main code here
 ll n,s,m,mex=0;
 cin>>n;
 vll arr(n),prefix(n+1);
 map<ll,ll>mp,temp;
rep(n){
    cin>>arr[i01];
    prefix[i01+1]=prefix[i01]+arr[i01];
    mp[arr[i01]]++;
}
s=prefix[n];
while(mp[mex])mex++;
set<pair<int,int>>ans;
if(mex>0)
for(int r=0,l=0;r<=n;r++){
        if(r<n && arr[r]<mex){
            temp[arr[r]]++;
        }else{
            if(temp.size()==mex){
                ans.insert({l+1,r<n?r+1:r});
                s=s-(prefix[r]-prefix[l]);
                if(temp[mex-1]>1){
                    s+=(r-l+1)*mex;
                }else{
                    s+=(r-l+1)*(mex-1);
                }
            }
            temp.clear();
            l=r;
        }
    }
else{

}
}
int main(){
    #ifndef ONLINE_JUDGE
        if(outputfile){
            freopen("output.txt", "w", stdout);
            freopen("input.txt", "r", stdin);
            freopen("error.txt", "w", stderr);
        }
    #endif

    int t=1;
    //cin>>t;
    while(t--){
        nikhil(t);
    }
    return 0;
}

/*
*IO MANIP


*/


