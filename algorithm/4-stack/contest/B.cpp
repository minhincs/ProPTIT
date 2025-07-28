#include <bits/stdc++.h> 
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s, ch = "", p;
    stack<char> st;

    cin >> s;

    for(char c : s) {
        if(c >= 'A' && c <= 'Z') {
            p.push_back(c);
        }
        else if(c != '(' && c != ')') {
            st.push(c);
        }
        }
    }

    cout << p;

    return 0;
}
