#include <iostream>
using namespace std;

void changer(int ParX, int ParY, int ParTmp) {
    cout << "before: " << ParX << " ; " << ParY << endl;

    ParTmp = ParX;
    ParX = ParY;
    ParY = ParTmp;

    cout << "after: " << ParX << " ; " << ParY << endl;
}

int main() {
    int x = 1;
    int y = 2;
    int tmp;

    changer(x, y, tmp);

    return 0;
}
