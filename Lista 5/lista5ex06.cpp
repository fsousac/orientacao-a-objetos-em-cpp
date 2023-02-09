#include <iostream>

using namespace std;

class Livro
{
private:
    string nome, id;
    int numpg;
public:
    Livro(){
        nome = id = "Não informado";
        numpg = 0;
    }
    void setLivro(){
        cout << "Digite o nome: ";
        getline(cin, nome);
        cout << "Digite o ID: ";
        getline(cin, id);
        do{
            cout << "Digite o numero de paginas: ";
            cin >> numpg;
        }while(numpg <= 0);
        cin.ignore();
    }
    void getLivro(){
        cout << "Nome: " << nome << endl;
        cout << "ID: " << id << endl;
        cout << "Numero de paginas: " << numpg << endl;
    }
};

class Caderno : public Livro
{
private:
    string tipocad;
    int qntlinhas;
public:
    void setCaderno(){
        setLivro();
        do{
            cout << "Digite a quantidade de linhas por pagina do caderno: ";
            cin>>qntlinhas;
        }while(qntlinhas < 0);
        cin.ignore();
        cout << "Digite o tipo do caderno: ";
        getline(cin, tipocad);
    }
    void getCaderno(){
        getLivro();
        cout << "Quantidade de linhas por pagina: " << qntlinhas << endl;
        cout << "Tipo do caderno: " << tipocad << endl;
    }
};

class Caderno_de_ciencias : public Caderno
{
private:
    string ano;
public:
    void setCaderno_de_ciencias(){
        setCaderno();
        cout << "Digite o ano do caderno de ciencias: ";
        getline(cin, ano);
    }
    void getCaderno_de_ciencias(){
        cout<< endl;
        getCaderno();
        cout << "Ano do caderno: " << ano << endl;
    }
};

int main(){
    Caderno_de_ciencias cdc;
    cdc.setCaderno_de_ciencias();
    cdc.getCaderno_de_ciencias();
    return 0;
}