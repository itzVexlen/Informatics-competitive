#include<bits/stdc++.h>
#define ll long long
using namespace std;

void read(string &s)
{
    cin >> s;
}

void solve(string &s)
{
    stack<char> stk;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        } else {
            if (stk.empty()) {
                cout << "NO" << endl;
                return;
            }
            char top = stk.top();
            if (c == ')' && top == '(') {
                stk.pop();
            } else if (c == ']' && top == '[') {
                stk.pop();
            } else if (c == '}' && top == '{') {
                stk.pop();
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (stk.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
    read(s);
    solve(s);
}
