#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cin >> name;
    
    // প্রথম অক্ষর প্রিন্ট করা
    cout << name[0];
    
    // হাইফেন (-) খুঁজে তার পরের অক্ষর প্রিন্ট করা
    for (int i = 1; i < name.length(); i++) {
        if (name[i] == '-') {
            cout << name[i + 1];
        }
    }
    
    cout << endl;
    return 0;
}