#include <iostream>

using namespace std;

int main() {

    int x, aux, ano, mes;

    cin >> x;

    ano = x / 365;
    aux = x - (ano * 365);
    mes = aux / 30;
    aux -= (mes * 30);

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << aux << " dia(s)" << endl;

    return 0;
}