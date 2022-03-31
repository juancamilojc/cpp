#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int numFunc, horasTrab;
    float valor, salario;

    cin >> numFunc >> horasTrab >> valor;

    salario = valor * horasTrab;

    cout << "NUMBER = "<< numFunc << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salario << endl;

    return 0;
}