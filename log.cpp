#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

float ln_Newton(float x, float eps=1e-12, int max_iter=1000) {
    if (x <= 0) {
        cout << "ln definite only for x > 0" << endl;
    }
    float y = x - 1;
    for (int i = 0; i <= max_iter; i++) {
        float y_next = y - (exp(y) - x) / exp(y);
        if (abs(y_next - y) < eps) {
            return y_next;
        }
        y = y_next;
    }
    return y;
}

float log(float x, float base=2.71828182845904523) {
    return ln_Newton(x) / ln_Newton(base);
}

int main() {
    float base, n;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a base: ";
    cin >> base;

    float res = log(n, base);
    cout << "Result: " << res << endl;

    return 0;
}
