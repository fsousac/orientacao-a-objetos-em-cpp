#include <iostream>

using namespace std;
int main(){
    int inicio;
    int fim;
    string saida = "";
    cout<< "Insira o numero do inicio:\n";
    cin>>inicio;
    cout<< "Insira o numero do final:\n";
    cin>>fim;
    cout<<endl;
    if(inicio%2==0)
        saida+= to_string(inicio) +", ";
    inicio++;
    while (inicio<=fim){
        if (inicio%2==0){
            if (saida.length()>0)
                saida += ", ";

            saida+= to_string(inicio);
        }
        inicio++;
    }
    cout<<saida;
    return 0;
}
