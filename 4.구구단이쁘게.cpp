#include <iostream>

using namespace std;

int main() {
    int dan, max, format;
    cout << "몇단까지 출력할까요? : ";
    cin >> dan;
    cout << "몇까지 곱할까요? : ";
    cin >> max;
    cout << "한줄에 몇단씩 출력할까요? : ";
    cin >> format;

    for (int i = 1; i <= dan; i += format) {
        for (int j = 1; j <= max; j++) {
            for (int k = i; k <= dan; k++) {
                printf("%2d x %2d = %4d\t\t", k, j, k * j);
                if (k % format == 0) {
                    cout << endl;
                    break;
                }
                if (k == dan) {
                    cout << endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}