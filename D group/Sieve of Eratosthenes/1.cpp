#include<bits/stdc++.h>
using namespace std;

int i, j, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector <int> a(n+1);
    a[0] = a[1] = 1; //0 и 1 не са прости числа
    for(i = 2;i <= n; i++){
        if(a[i] == 0){ //i е просто
            for(j = 2 * i;j <= n;j+=i){
                a[j] = 1; //j  не е просто
            }
        }
    }
    vector <int> prime;
    for(i = 2;i <= n;i++){
        if(a[i] == 0) prime.push_back(i);
    }
    cout<<prime.size()<<endl;

}