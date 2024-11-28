#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lastDigit = n % 10;
    int division = n % 3;
    if (lastDigit != 5 && division != 0) {
        cout << "Nothing found" << endl;
    }
    else {
        bool isFoundNumber = false;
        for (int a = 1; a <= 9; a++) {
            for (int b = 9; b >= a; b--) {
                for (int c = 0; c <= 9; c++) {
                    for (int d = 9; d >= c; d--) {
                        int sum = a + b + c + d;
                        int product = a * b * c * d;
                        if (sum == product && n % 10 == 5) {
                            cout << a << b << c << d << endl;
                            isFoundNumber = true;
                        }
                        else if (product / sum == 3 && n % 3 == 0) {
                            cout << d << c << b << a << endl;
                            isFoundNumber = true;
                        }
                        if (isFoundNumber) {
                            break;
                        }
                    }
                    if (isFoundNumber) {
                        break;
                    }
                }
                if (isFoundNumber) {
                    break;
                }
            }
            if (isFoundNumber) {
                break;
            }
        }
    }

    return 0;
}