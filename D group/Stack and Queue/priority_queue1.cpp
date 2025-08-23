#include<bits/stdc++.h>
#define ll long long
using namespace std;

int i, n;
string temp;
priority_queue <string> pq;

void read()
{
    cin >> n;
    for(i = 1;i <= n;i++){
        cin >> temp;
        pq.push(temp);
    }
}

void solve()
{
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
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