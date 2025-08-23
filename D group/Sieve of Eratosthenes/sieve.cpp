#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, divisors, i, j;

void read()
{
    cin >> n;
}   

void solve()
{   
    for(i = 2;i <= n;i++){
        divisors = 0;
        for(j = 2;j < i;j++){
            if(i % j == 0){
                divisors++;
            }
        }
        if(divisors == 0) cout << i << " ";
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