#include <iostream>
#include <conio.h>

using namespace std;

class Pedagio{
private:
    int carnum;
    double valor;
public:
    Pedagio(){
        carnum = 0;
        valor = 0;
    }
    void Paga_carro(){
        carnum++;
        valor += 0.5;
    }
    void Nao_Paga_carro(){
        carnum++;
    }
    void mostra(){
        cout << "NNumero de carros: " << carnum << endl;
        cout << "Valor arrecadado: " << valor << endl;
    }
};


int main(){
        Pedagio p1;
        int i=1;
        char s;
        do{cout<<"Digite P para Carro pagante, N para nao pagante e Esc para parar: "<<endl;
        s = getch();
        s = toupper(s);
        cout<<s<<endl;
        switch (s){
        case 'P':
            p1.Paga_carro();
            break;
        case 'N':
            p1.Nao_Paga_carro();
            break;
        case 27:
            p1.mostra();
            i = 0;
            break;
        default:
            break;
        }}while(i == 1);
        
    return 0;
}