//
// Created by Godlub on 28.12.2020.
//


#include <iostream>
#include <cmath>

using namespace std;

const short NUM = 69;

double fun1(const int x) {
    const auto fun1 = log(log(((1 - NUM) / (sin(sin(x + NUM))))));
    const auto fun2 = abs(1 / (tan(x) / NUM));
    return max(fun1, fun2);
}

double fun2(const int x) {
    const auto fun1 = log(log(((1 - NUM) / (cos(cos(x - NUM))))));
    const auto fun2 = abs(tan(x) / NUM);
    return min(fun1, fun2);
}

int main() {
    int x0, x1, deltaX;
    cout << "Input start value: " << endl;
    cin >> x0;
    cout << "Input final value: " << endl;
    cin >> x1;
    cout << "Input step size: " << endl;
    cin >> deltaX;
    while (x0 <= x1) {
        cout << x0;
        x0 += deltaX;
        if (isnan(fun1(x0))) {
            cout << " Error ";
        } else
            cout << fun1(x0) << endl;
        if (isnan(fun2(x0))) {
            cout << " Error ";
        } else
            cout << fun2(x0);
        cout << endl;
    }
    return 0;
}