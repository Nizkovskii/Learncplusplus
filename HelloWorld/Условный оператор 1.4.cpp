#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // условие треугольника — сложение двух сторон должно быть больше третьей. База 7 класса.
    if (a + b > c && a + c > b && b + c > a) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}

