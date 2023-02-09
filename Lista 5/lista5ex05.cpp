#include <iostream>

using namespace std;

class Livro
{
private:
    string nome, id;
    int numpg;
public:
    Livro(){
        nome = "Não informado";
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
        cout<<"##Caderno##"<<endl;
        setLivro();
        do{
            cout << "Digite a quantidade de linhas por pagina do caderno: ";
            cin>>qntlinhas;
        }while(qntlinhas < 0);
        cout << "Digite o tipo do caderno: ";
        cin.ignore();
        getline(cin, tipocad);
    }
    void getCaderno(){
        getLivro();
        cout << "Quantidade de linhas por pagina: " << qntlinhas << endl;
        cout << "Tipo do caderno: " << tipocad << endl;
    }
};

class Livro_texto : public Livro
{
private:
    string tema, autor;
public:
    void setTexto(){
        cout<<"##Livro Texto##"<<endl;
        setLivro();
        cin.ignore();
        cout << "Digite o tema do livro texto: ";
        getline(cin, tema);
        cout << "Digite o autor do livro texto: ";
        getline(cin, autor);
    }
    void getTexto(){
        getLivro();
        cout << "Tema: " << tema << endl;
        cout << "Autor: " << autor << endl;
    }
};

int main(){
    Caderno cad;
    Livro_texto txt;

    cad.setCaderno();
    cout<<endl;
    txt.setTexto();
    cout<<endl;
    cad.getCaderno();
    cout<<endl;
    txt.getTexto();

    return 0;
}



