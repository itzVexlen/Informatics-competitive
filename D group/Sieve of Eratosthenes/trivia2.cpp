#include <bits/stdc++.h>
using namespace std;

int i, n, sum;

int main()
{
    cin >> n;
    for(i = 1;i <= n;i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout << sum / n << endl;
}