#include <iostream>
using namespace std;

void factorial(int ParN, int ParK = 1) {
    for (int i = 1; i <= ParN; i++) {
        ParK = ParK * i;
    }

    cout << "Result: " << ParK << endl;
}

int main() {
    int n;
    cout << "Enter a number for factorialization" << endl;
    cin >> n;

    factorial(n);

    return 0;
}
