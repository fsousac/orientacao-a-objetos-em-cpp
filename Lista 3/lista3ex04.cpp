#include <iostream>
#include <string>

using namespace std;

class livro{
    private:
        string livroID = "Nao informado";
        int paginas = 0;
        float preco = 0;
    public:
        void obter(){
            do{
                cout<<"Digite o ID do livro: ";
                cin>>livroID;
            } while (livroID.length() < 0);
            do{
              cout<<"Digite o numero de paginas do livro: ";
                cin>>paginas;  
            } while (paginas < 0);
            do{
                cout<<"Digite o preco do livro: ";
                cin>>preco;
            } while (preco < 0);
            }
        void mostrar(){
            cout<<"O ID do livro e: "<<livroID<<endl;
            cout<<"O numero de paginas do livro e: "<<paginas<<endl;
            cout<<"O preco do livro e: "<<preco<<endl;
        }
        void definir(string id, int pag, float prc){
            livroID = id;
            paginas = pag;
            preco = prc;
        }
        float mostrapreco(){
            return preco;
        }
};

int main(){
    livro A,B;
    A.obter();
    B.definir("155A", 127, 35);
    if(A.mostrapreco() > B.mostrapreco()){
        A.mostrar();
    } else {
        B.mostrar();
    }
    return 0;
}
