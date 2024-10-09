



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
//1 is for hel 2 is for rov
char north(int &x1,int &x2,int &y1,int &y2, bool h_move){
        if(y1==y2)
        {
            if(h_move){
                y2++;
                return 'R';
            }
            else{
                y1++;
                return 'H';
            }
        }else if(y1>y2){
            y2++;
            return 'R';
        }else{
            y1++;
            return 'H';
        }
}
char south(int &x1,int &x2,int &y1,int &y2,bool h_move){
        if(y1==y2)
        {
            if(h_move){
                y2--;
                return 'R';
            }else{
                y1--;
                return 'H';
            }
        }else if(y1>y2){
            y1--;
            return 'H';
        }else{
            y2--;
            return 'R';
        }
}
char west(int &x1,int &x2,int &y1,int &y2,bool h_move){
        if(x1==x2)
        {
            if(h_move){
                x2++;
                return 'R';
            }
            else{
                x1++;
                return 'H';
            }
        }else if(x1>x2){
            x2++;
            return 'R';
        }else{
            x1++;
            return 'H';
        }
}
char east(int &x1,int &x2,int &y1,int &y2,bool h_move){
        if(x1==x2)
        {
            if(h_move){
                x2--;
                return 'R';
            }else{
                x1--;
                return 'H';
            }
        }else if(x1>x2){
            x1--;
            return 'H';
        }else{
            x2--;
            return 'R';
        }
}

void nikhil(int testcase){
int n,x1,x2,y1,y2;
cin>>n;
string S,ans="";
cin>>S;
x1=x2=y1=y2=0;
bool h_move=0,r_move=0;
for(auto c:S){
    //cout<<"Hel"<<x1<<" "<<y1<<endl;
    //cout<<"Rov"<<x2<<" "<<y2<<endl;
    char tmp;
    if(c=='N'){
        tmp=north(x1,x2,y1,y2,h_move);
    }else if(c=='S'){
        tmp=south(x1,x2,y1,y2,h_move);
    }else if(c=='E'){
        tmp=east(x1,x2,y1,y2,h_move);
    }else{
        tmp=west(x1,x2,y1,y2,h_move);
    }
    if(tmp=='H')h_move=1;
    else r_move=1;
    ans+=tmp;
}
if(x1!=x2||y1!=y2 || h_move==0 ||r_move==0){
    cout<<"NO\n";
}else
cout<<ans<<endl;
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




