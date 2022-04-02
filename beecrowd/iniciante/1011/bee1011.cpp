#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double raio, volume, pi = 3.14159;

    cin >> raio;

    volume = ((4.0/3.0) * pi * (pow(raio, 3)));

    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;

    return 0;
}