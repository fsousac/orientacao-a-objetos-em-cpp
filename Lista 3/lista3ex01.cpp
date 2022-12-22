#include <iostream>

using namespace std;

class marca{
private:
    float nota1, nota2, nota3;

public:
    void entrada(){
        do{
            cout << "Digite a primeira nota: ";
            cin >> nota1;
            }while(nota1 < 0 || nota1 > 10);
        do{
            cout << "Digite a segunda nota: ";
            cin >> nota2;
            }while(nota2 < 0 || nota2 > 10);
        do{
            cout << "Digite a terceira nota: ";
            cin >> nota3;
            }while(nota3 < 0 || nota3 > 10);
    }
    float soma(){
        return nota1 + nota2 + nota3;
    }
    float media(){
        return soma() / 3;
    }
};


int main(){
    marca aluno;
    aluno.entrada();
    cout<<"A soma das notas e: "<<aluno.soma()<<endl;
    cout<<"A media das notas e: "<<aluno.media()<<endl;
    return 0;
}