#include <iostream>
#include <string>

using namespace std;

class Estudante{
private:
    float nota;
    string grau;
public:
    Estudante(float n, string g){
        nota = n;
        grau = g;
    }

    void mostrar(){
        cout << "A nota do estudante e: " << nota << endl;
        cout << "O grau do estudante e: " << grau << endl;
    }

};

int main(){
    Estudante A(7, "Primeiro"),B(6.4, "Terceiro");
    A.mostrar();
    B.mostrar();
    return 0;
}