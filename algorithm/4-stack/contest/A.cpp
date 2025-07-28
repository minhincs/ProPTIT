#include <bits/stdc++.h> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    stack<char> ch;
    string num = "";

    cin >> s;

    for(char c : s) {
        if(c >= '0' && c <= '9') {
            num.push_back(c);
        }
        else {
            ch.push(c);
        }
    }

    while(!ch.empty()) {
        cout << ch.top();
        ch.pop();
    }
    cout << '\n' << num << '\n';

    return 0;
}
