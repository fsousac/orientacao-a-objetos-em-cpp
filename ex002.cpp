#include <iostream>

using namespace std;


int main() {
    int varInt = 100;
    char c = 'r';
    double pFloat = 5.99;

    cout << "O valor da variavel varInt e: "<< varInt << endl;
    cout << "O valor da variavel c e: "<< c<< endl;
    cout << "O valor da variavel pFloat e: "<< pFloat << endl;

    cout << "\nMemoria da variavel varInt: "<< sizeof(varInt)<< " bytes" <<endl;
    cout << "Memoria da variavel c: "<< sizeof(c)<< " bytes" <<endl;
    cout << "Memoria da variavel pFloat: "<< sizeof(pFloat)<< " bytes" <<endl;
    return 0;
}
