#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a - c <= 1 && a - c >= -1) && (b - d <= 1 && b - d >= -1)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    
    return 0;

}
