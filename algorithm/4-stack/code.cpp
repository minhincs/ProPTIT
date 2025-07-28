#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 

    int test; 
    cin >> test; 
    while(test--) {
        int n, maxs = INT_MIN;
        stack<int> st;

        cin >> n;

        int h[n];
        for(int &x : h) {
            cin >> x;
        }

        for(int i = 0; i < n; ) {
            if(st.empty() || h[i] >= h[st.top()]) {
                st.push(i);
                i++;
            }
            else {
                int j = st.top();
                st.pop();

                if(st.empty()) {
                    maxs = max(maxs, i*h[j]);
                }
                else {
                    maxs = max(maxs, h[j] * (i - st.top() -1));
                }
            }
        }

        cout << maxs << '\n';
    }
}
