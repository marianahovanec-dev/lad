#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a = 2.2, b = 5.2;
    int k;

    cout << "Введіть k: ";
    cin >> k;

    double h = (b - a) / k;

    cout << fixed << setprecision(4);
    cout << "   x\t\t   y\n";

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double arg = 2 * x * x - 2;
        if (arg > 0) {
            double y = pow(3, log2(arg));
            cout << setw(6) << x << "\t" << setw(10) << y << endl;
        }
        else {
            cout << setw(6) << x << "\t" << "не існує (arg<=0)" << endl;
        }
    }

    return 0;
}