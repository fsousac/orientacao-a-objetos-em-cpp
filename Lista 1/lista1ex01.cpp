#include <iostream>
#include <conio.h>
#include <iterator>
#include <vector>

using namespace std;

int main(){
    char c = ' ';
    cout<< "Digite um caracter para ver seu código ASCII\n";
    cin >> c;
    cout << "O codigo ASCII de '"<< c << "' e "<< int(c)<< endl;
    return 0;
}
