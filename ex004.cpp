#include <iostream>
#include <typeinfo>

using namespace std;

double long fact(double long);

int main(){
    double long num;
    char ans;
    do {
        do {
            cout << "Digite um numero para calcular seu fatorial: " << endl;
            cin >> num;
        } while (num < 0);
        cout << "O fatorial de " << num << " e " << fact(num)<<endl;
        do {
            cout << "Quer fazer outra operacao?" << endl;
            cin >> ans;
            ans = tolower(ans);
        } while (ans != 's' && ans != 'n');
    } while (ans == 's');
    return 0;
}

double long fact(double long i){
    if (i<=1)
        return (1);
    else
        return i*fact(i-1);
}