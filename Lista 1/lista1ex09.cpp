#include <iostream>

using namespace std;

int main(){
    float cel;
    float fah;
    int n;
    cout<<"Digite 1 para a conversao Celsius-> Fahrenheit\nDigite 2 para a conversao Fahrenheit-> Celsius\n";
    cin>>n;
    if (n==1){
        cout<<"Digite a temperatura em Celsius:\n";
        cin>>cel;
        fah=9.0/5.0*cel+32;
        cout<<"A temperatura em Fahrenheit e: "<<fah;
    } else if (n==2){
        cout<<"Digite a temperatura em Fahrenheit:\n";
        cin>>fah;
        fah=9.0/5.0*cel+32;
        cel=(fah-32)*5.0/9.0;
        cout<<"A temperatura em Celsius e: "<<cel;
    } else{
        cout<<"Reinicie o programa e insira um valor valido";
    }
    return 0;
}