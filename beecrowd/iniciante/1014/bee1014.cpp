#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int distancia;
    float combustivel, consumo;

    cin >> distancia >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3) << consumo << " km/l" << endl;

    return 0;
}