//#include <iostream.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    cout<< "Qual o seu nome?\n";
    cin >> nome;
    cout << "Olá, " << nome<< endl;
    cout << 10 + 8 <<endl;
    cout << hex <<10 + 8 <<endl;
    cout << oct <<10 + 8 <<endl;

    return 0;
}
