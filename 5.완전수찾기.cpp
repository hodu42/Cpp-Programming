#include <iostream>

using namespace std;

int main() {
    int input, sum;
    cout << "ют╥б : ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        sum = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << "(";
            for (int k = 1; k <= i / 2; k++) {
                if (i % k == 0) {
                    if (k == 1) {
                        cout << k;
                    }
                    else {
                        cout << "+" << k;
                    }

                }
            }
            cout << ")\n";
        }
    }
    return 0;
}