#include <iostream>

using namespace std;

class TV
{
private:
    string NomeMarca, Modelo;
    float Rpreco;
public:
    TV(string nm_mrk, string mdl, float prc){
        NomeMarca = nm_mrk;
        Modelo = mdl;
        Rpreco = prc;
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
        cin>>Modelo;
        do{
            cout<<"Digite o preco: ";
            cin>>Rpreco;
        }while(Rpreco<=0);
    }
};

int main(void){
    TV tv1("dell", "monitor", 1500);
    tv1.escrever();
    tv1.mostrar();
}

