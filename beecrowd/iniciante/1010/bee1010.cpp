#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int codP1, codP2, qtdP1, qtdP2;
    float valP1, valP2, total;

    cin >> codP1 >> qtdP1;
    cin >> valP1;
    cin >> codP2 >> qtdP2;
    cin >> valP2;

    total = ((qtdP1 * valP1) + (qtdP2 * valP2));

    cout << fixed << setprecision(2) << "VALOR A PAGAR = R$ " << total << endl;

    return 0;
}