#include <iostream>

using namespace std;

class Pessoa{
private:
    string nome, id, endereco;
public:
    Pessoa(){
        nome = "Nao informado";
        id = "Nao informado";
        endereco = "Nao informado";
    }
    void set_pessoa(){
        do{cout<<"Digite o nome: ";
        getline(cin,nome);
        } while (nome == "Nao informado");
        do{cout<<"Digite o id: ";
        getline(cin,id);
        } while (id == "Nao informado");
        do {
            cout << "Digite o endereco: ";
            getline(cin, endereco);
        } while (endereco == "Nao informado");
    }
    void show_pessoa(){
        cout<<"Nome: "<<nome<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Endereco: "<<endereco<<endl;
    }
};

class Estudante: public Pessoa{
private:
    int matricula;
    float nota;
public:
    void setDados(){
        set_pessoa();
        do {
            cout << "Digite a matricula: ";
            cin >> matricula;
        } while (matricula<=0);
        do {
            cout << "Digite a nota: ";
            cin >> nota;
        } while (nota<0);
        cin.ignore();
        }
    void showDados(){
        show_pessoa();
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"Nota: "<<nota<<endl;
    }
};

int main(){
    Estudante e1[40];
    for (int i = 0; i < 40; i++) {
        e1[i].setDados();
        cout<<"##########################"<<endl;
        e1[i].showDados();
        cout<<"##########################"<<endl;
    }

    return 0;
}