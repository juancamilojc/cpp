#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string nome;
    double salarioFix, montante, total;

    cin >> nome;
    cin >> salarioFix >> montante;

    total = salarioFix + (montante * 0.15);

    cout << fixed << setprecision(2) << "TOTAL = " << total << endl;

    return 0;
}