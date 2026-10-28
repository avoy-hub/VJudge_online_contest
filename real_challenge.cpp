#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a;
    cin >> a;

   double side = sqrt(a);
    double fence_length = 4 * side;

    cout << fixed << setprecision(15) << fence_length << endl;

    return 0;
}