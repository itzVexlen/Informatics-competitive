#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
string f(int a){
    string s1 = "XOX";
    int i = 0, j = 0;
    string ans;
    if(a == 1) return s1;
    ans = s1;
    for(i = 0;i <= a;i++){
        while(j <= ans.size()){
            ans += '0';
            j++;
        }
        ans += s1;
    }
    return ans;
}


void read()
{
    cin >> n;
}

void solve()
{
    cout << f(n) << endl;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO();
    read();
    solve();
}