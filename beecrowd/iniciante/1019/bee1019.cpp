#include <iostream>
 
 using namespace std;

int main() {

    int n, aux, h, min;

    cin >> n;

    h = n / 3600;
    aux = n - (h * 3600);
    min = aux / 60;
    aux -= (min * 60);

    cout << h << ":" << min << ":" << aux << endl;

    return 0;
}