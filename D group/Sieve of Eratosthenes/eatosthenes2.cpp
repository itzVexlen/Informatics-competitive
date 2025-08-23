#include<bits/stdc++.h>
using namespace std;

int i, j, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector <int> a(n+1);
    int imax = sqrt(n);
    for(i = 2;i <= imax;i++){
        for(j = i * i;j <= n;j += i){
            a[j] = 1;
        }
    }
    vector <int> prime;
    for(i = 2;i <= n;i++){
        if(a[i] == 0) prime.push_back(i);
    }
    cout << prime.size() << endl;

return 0;
}