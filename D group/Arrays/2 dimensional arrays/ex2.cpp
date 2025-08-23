#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1e6 + 7;

int a[MAXN][MAXN], n, red, ch, i, j, N, sum;

void read()
{
    cin >> ch >> n >> red;
    N = n;
    for(i = 0;i < n;i++){
        if(a[i][i] == 0){
            for(j = i;j <= n;j++){
                a[i][j] = ch;
                ch++;
            }
            for(j = i + 1;j <= n;j++){
                a[j][n] = ch;
                ch++;
            }
            for(j = n - 1;j >= i;j--){
                a[n][j] = ch;
                ch++;
            }
            for(j = n - 1;j >= i + 1;j++){
                a[j][i] = ch;
                ch++;
            }
            n--;
        }
        else{
            break;
        } 
    }
}

void solve()
{
    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(i = 0; i < N;i++){
        sum += a[red - 1][j];
    }
    cout << sum << endl;
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