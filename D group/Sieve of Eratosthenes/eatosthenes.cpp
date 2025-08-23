#include<bits/stdc++.h>
using namespace std;



void read()
{
}

vector <int> a;

void solve()
{
    int n, dmax, i;
    cin >> n;
    dmax = sqrt(n);
    for(i = 1;i < dmax; i++){
        if(n % i == 0){
            a.push_back(i);
            a.push_back(n / i);
        }
    }
    if(n % dmax == 0) a.push_back(dmax);
    sort(a.begin(), a.end());
    for(int d : a) cout << d << " ";
    cout<<endl;

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
    solve();
}
