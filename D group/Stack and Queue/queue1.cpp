#include<bits/stdc++.h>
#define ll long long
using namespace std;

int i, n;
string temp;
queue <string> q;

void read()
{
    cin >> n;
    for(i = 0;i <= n;i++){
        cin >> temp;
        q.push(temp);
    }
}

void solve()
{
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
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