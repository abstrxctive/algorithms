#include <iostream>
using namespace std;

void factorial(int n, int k = 1) {
    for (int i = 1; i <= n; i++) {
        k = k * i;
    }

    cout << "Result: " << k << endl;
}

int main() {
    int n;
    cout << "Enter a number for factorialization: ";
    cin >> n;

    factorial(n);

    return 0;
}
