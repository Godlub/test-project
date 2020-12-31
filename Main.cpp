//
// Created by Godlub on 28.12.2020.
//


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const short NUM = 69;

double fun1(double x) {
    const auto fun1 = log(log((1 - NUM) / (cos(cos(x - NUM)))));
    const auto fun2 = abs(tan(x) / NUM);
    return min(fun1, fun2);
}

int main() {
    int n = 1;
    double x0, x1, deltaX;
    cout << "Input start value: " << endl;
    cin >> x0;
    cout << "Input final value: " << endl;
    cin >> x1;
    cout << "Input step size: " << endl;
    cin >> deltaX;
    if (x0 > x1) {
        if (deltaX >= 0) {
            cout << "Error";
            return 0;
        } else
            cout << "|" << setw(13) << "line number" << " | " << setw(14) << "x= | " << setw(14) << "value |" << endl;
        while (x0 >= x1) {
            cout << "|" << setw(13) << n << " | ";
            n++;
            cout << setw(11) << x0 << " | ";
            if (isnan(fun1(x0))) {
                cout << setw(14) << "Error |";
            } else
                cout << setw(12) << fun1(x0) << " |";
            cout << endl;
            x0 += deltaX;
        }
    } else if (x0 < x1) {
        if (deltaX <= 0) {
            cout << "Error";
            return 0;
        } else
            cout << "|" << setw(13) << "line number" << " | " << setw(14) << "x= | " << setw(14) << "value |" << endl;
        while (x0 <= x1) {
            cout << "|" << setw(13) << n << " | ";
            n++;
            cout << setw(11) << x0 << " | ";
            if (isnan(fun1(x0))) {
                cout << setw(14) << "Error |";
            } else
                cout << setw(12) << fun1(x0) << " |";
            cout << endl;
            x0 += deltaX;
        }
        return 0;
    }
}
