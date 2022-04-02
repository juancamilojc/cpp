#include <iostream>

using namespace std;

int main() {

    int n, aux, cem, cinquenta, vinte, dez, cinco, dois, um;

    cin >> n;
    cout << n << endl;

    aux = n;
    // notas de 100
    cem = aux/100;
    aux -= (cem * 100);
    cout << cem << " nota(s) de R$100,00" << endl;
    // notas de 50
    cinquenta = aux/50;
    aux -= (cinquenta * 50);
    cout << cinquenta << " nota(s) de R$50,00" << endl;
    // notas de 20
    vinte = aux/20;
    aux -= (vinte * 20);
    cout << vinte << " nota(s) de R$20,00" << endl;
    // notas de 10
    dez = aux/10;
    aux -= (dez * 10);
    cout << dez << " nota(s) de R$10,00" << endl;
    // notas de 5
    cinco = aux/5;
    aux -= (cinco * 5);
    cout << cinco << " nota(s) de R$5,00" << endl;
    // notas de 2
    dois = aux/2;
    aux -= (dois * 2);
    cout << dois << " nota(s) de R$2,00" << endl;
    // notas de 1
    cout << aux << " nota(s) de R$1,00" << endl;

    return 0;
}