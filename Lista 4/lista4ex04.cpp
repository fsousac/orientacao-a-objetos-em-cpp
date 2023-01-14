#include <iostream>

using namespace std;

class TV
{
private:
    string NomeMarca, Modelo;
    float Rpreco;
public:
    TV(){
        NomeMarca = "Nao informado";
        Modelo = "Nao informado";
        Rpreco = 0;
    }
    void mostrar(){
        cout<<"Marca: "<<NomeMarca<<endl
            <<"Modelo: "<<Modelo<<endl
            <<"Preco: "<<Rpreco<<endl;
    }
    void escrever(){
        cout<<"Digite a marca: ";
        getline(cin,NomeMarca);
        cout<<"Digite o modelo: ";
        getline(cin,Modelo);
        do{
            cout<<"Digite o preco: ";
            cin>>Rpreco;
        }while(Rpreco<=0);
    }
};

int main(void){
    TV tv1;
    tv1.escrever();
    tv1.mostrar();
}

