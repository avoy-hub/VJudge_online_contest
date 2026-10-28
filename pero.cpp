#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    
    int total_spent = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        total_spent += p; 
    }
    
    int ans = (n + 1) * x - total_spent;
    
    cout << ans << endl;
    
    return 0;
}