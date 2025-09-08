#include <iostream>
using namespace std;

void changer(int &x, int &y, int &tmp) {
    cout << "before: " << x << " ; " << y << endl;

    tmp = x;
    x = y;
    y = tmp;

    cout << "after: " << x << " ; " << y << endl;
}

int main() {
    int x = 1;
    int y = 2;
    int tmp;

    changer(x, y, tmp);

    return 0;
}
