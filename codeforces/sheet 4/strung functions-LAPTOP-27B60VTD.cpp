#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n, m;
cin >> n >> m;
    string s;
    cin >> s;
    while (m--) {
        string op; cin >> op;
        if (op == "substr") {
            ll l, r;
            cin >> l >> r;
            l--, r--;
            if(r<l)
            swap(l,r);
            if(l<0)
                l=0;
            if(r>=s.length())
                r=s.length()-1;
            cout << s.substr(l, r-l+1) << '\n';

        } else if (op == "sort") {
            ll l, r; cin >> l >> r;
            l--, r--;
            if(r<l)
            swap(l,r);
            if(l<0)
                l=0;
            if(r>=s.length())
                r=s.length()-1;

            sort(s.begin() + l, s.begin() + r+1);

        } else if (op == "pop_back") {
            s.pop_back();
        } else if (op == "back") {
            cout << s.back() << '\n';
        } else if (op == "reverse") {
            ll l, r; cin >> l >> r;
            l--, r--;
            if(r<l)
            swap(l,r);
            if(l<0)
                l=0;
            if(r>=s.length())
                r=s.length()-1;

            reverse(s.begin() + l, s.begin() + r+1);

        } else if (op == "front") {
            cout << s.front() << '\n';
        } else if (op == "push_back") {
            char i;
            cin >> i;
            s.push_back(i);
        } else {
            ll pos;
            cin >> pos;
            pos--;
            if(pos>=0 && pos<s.length())
            cout << s[pos] << '\n';
        }
    }
return 0;
}
