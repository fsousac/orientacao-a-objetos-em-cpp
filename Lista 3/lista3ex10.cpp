#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class pessoa{
private:
    char nome[256];
    int idade;
    double salario;
    struct endereco{
        char rua [256];
        char cidade[256];
        char estado[256];
        int numero;
    };
    
public:
    endereco e1;
    void entrada_dados(){
        cout << "Digite o nome: ";
        cin.getline(nome,256);
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite o salario: ";
        cin >> salario;
        cout << "Digite a rua: ";
        cin.ignore();
        cin.getline(e1.rua,256);
        cout << "Digite o numero: ";
        cin >> e1.numero;
        cout << "Digite a cidade: ";
        cin.ignore();
        cin.getline(e1.cidade,256);
        cout << "Digite o estado: ";
        cin.getline(e1.estado,256);
   }
    void mostra_dados(){
        cout<<endl<<"Detalhes da pessoa: "<<endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Salario: " << salario << endl;
        cout << "Rua: " << e1.rua << endl;
        cout << "Numero: " << e1.numero << endl;
        cout << "Cidade: " << e1.cidade << endl;
        cout << "Estado: " << e1.estado << endl;
   }
};



int main(){
    pessoa p1;
    p1.entrada_dados();
    p1.mostra_dados();
    return 0;
}