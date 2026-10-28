#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r, c;
    cin >> r >> c;

    double ratio = (r - c) / r;
    double ans = ratio * ratio * 100.0;

    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}