#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double A, B, C, areaTri, areaCir, areaTra, areaQua, areaRet;

    cin >> A >> B >> C;

    areaTri = (A * C) / 2;
    areaCir = 3.14159 * (pow(C, 2));
    areaTra = ((A + B) * C) / 2;
    areaQua = pow(B, 2);
    areaRet = A * B;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << areaTri << endl;
    cout << "CIRCULO: " << areaCir << endl;
    cout << "TRAPEZIO: " << areaTra << endl;
    cout << "QUADRADO: " << areaQua << endl;
    cout << "RETANGULO: " << areaRet << endl;

    return 0;
}