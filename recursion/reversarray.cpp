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
typedef long double lld;
typedef unsigned long long ull;
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
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
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
const bool outputfile=true;


void reversearr(vi &arr,int start,int end){
    if(start>=end)
    return;
    swap(arr[start],arr[end]);
    reversearr(arr,start+1,end-1);
}
void printsubsequence(vi arr,vi& fixed,int i,int n){
   if(i==n)return;
   int elem=fixed[i++];
   arr.push_back(elem);
   fout(arr);
   cout<<'\n';
   printsubsequence(arr,fixed,i,n);
   arr.pop_back();
   //fout(arr);
   //cout<<'\n';
   printsubsequence(arr,fixed,i,n);
}
void printsubsequence2(vi arr,vi& fixed,int i,int n){
   if(i==n)return;
   int elem=fixed[i++];
   //fout(arr);
   //cout<<'\n';
   printsubsequence2(arr,fixed,i,n);
   arr.push_back(elem);
   fout(arr);
   cout<<'\n';
   printsubsequence2(arr,fixed,i,n);
}
void nikhil(int testcase){
 //main code here
    int n;int x;
    cin>>n;
    vi arr(n),temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printsubsequence2(temp,arr,0,n);
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
