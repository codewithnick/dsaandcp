#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int> vi
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
#define arp_prog(a,d,n) a+d(n-1)
#define geo_prog_inf(a,r) (double)a/(1-r)
void fastscan(int &number)
{
	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c=='-')
	{
		negative = true;
		c = getchar();
	}
	for (; (c>47 && c<58); c=getchar())
		number = number *10 + c - 48;
    if (negative)
		number *= -1;
}

bool luckynumber(ll num)
{
    int count=0;
    while(num>0){
        int x=num%10;
        if(x==4 || x==7){
            count++;
        }
        num/=10;
    }
    if (count==4 || count ==7)
        return true;
    else
        return false;
}

void nikhil(int testcase){
    ll n;
    cin>>n;
    if(luckynumber(n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    for(int i=0;i<t;i++){
        nikhil(t);
    }
    return 0;
}

