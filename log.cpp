#include <iostream>
using namespace std;

void log(float n, float base) {
    float k = 1;
    float c = 0;

    if (n > base) {
        while (base != n) {
            k = k * base;
            c = c + 1;
            if (k == n) {
                break;
            }
        }
    cout << c << endl;
    }

    else if (base > n) {
        while (n != base) {
            k = k * n;
            c = c + 1;
            if (k == base) {
                break;
            }
        }
    cout << 1/c << endl;
    }

    else if (n == 1) {
        cout << 0 << endl;
    }

    else {
        cout << 1 << endl;
    }

}

int main() {
    int n, base;

    cout << "Enter a value of number: ";
    cin >> n;

    cout << "Enter a value of base: ";
    cin >> base;

    log(n, base);

    return 0;
}
