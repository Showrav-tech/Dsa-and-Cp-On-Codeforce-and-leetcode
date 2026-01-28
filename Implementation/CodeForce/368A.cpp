#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    
    int m;
    cin >> m;
    
  
    sort(h.begin(), h.end());
    
    int p = 0;
    
   
    for(int i = 0; i < m; i++) {
        if(i < n) {
          
            p += h[i];
        } else {
           
            p -= d;
        }
    }
    
    cout << p << endl;
    return 0;
}