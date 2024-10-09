


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
class cmpr {
    int param;
public:
    cmpr(int p) : param(p) {}

    bool operator()(vi x,vi y) {
        // logic uses param
        return x[param]>y[param];
    }
};
void nikhil(int testcase){
int n,m,j_ind;
cin>>n>>m;
vector<vector<int>> a(n,vector<int>(m)),b(n,vector<int>(m));

bool flag=true;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]==1)
        {
            j_ind=j;
        }
    }
}
sort(a.begin(),a.end(),cmpr(j_ind));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>b[i][j];
        if(b[i][j]==1)
        {
            j_ind=j;
        }
    }
}
sort(b.begin(),b.end(),cmpr(j_ind));

//transpose
vector<vector<int>> c(m,vector<int>(n)),d(m,vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        c[j][i]=a[i][j];
        d[j][i]=b[i][j];
    }
}

sort(c.begin(),c.end());
sort(d.begin(),d.end());

//transpose again
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        a[i][j]=c[j][i];
        b[i][j]=d[j][i];
    }
}

sort(a.begin(),a.end());
sort(b.begin(),b.end());
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]!=b[i][j]){
            flag=false;
            break;
        }
    }
}
if(flag)
    cout<<"Yes";
else
    cout<<"No";
cout<<endl;
/*
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
*/
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
    cin>>t;
    while(t--){
        nikhil(t);
    }
    return 0;
}

/*
*IO MANIP


*/




