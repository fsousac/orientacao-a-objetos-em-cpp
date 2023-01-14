#include <iostream>
#include <string>

using namespace std;

class resultado
{
private:
    int matricula;
    string nome;
    float notas[3];

public:
  void entrada(){
    do
    {
        cout<<"Digite a matricula: ";
        cin>>matricula;
    } while (matricula<=0);

        cout<<"Digite o nome do aluno: ";
        cin.ignore();
        getline(cin,nome);

    do
    {   
        for (int i = 0; i < 3; i++)
        {
            cout<<"Digite a "<<i+1<<"a nota: ";
            cin>>notas[i];
        }
        
    } while (notas[0]<0 || notas[1]<0 || notas[2]<0);
    
  }
  void mostra(){
    cout<<"Matricula: "<<matricula<<endl
        <<"Nome: "<<nome<<endl
        <<"Nota 1: "<<notas[0]<<endl
        <<"Nota 2: "<<notas[1]<<endl
        <<"Nota 3: "<<notas[2]<<endl;
        
  }
  void total(){
    float res=0;
    for (int i = 0; i < 3; i++)
    {
        res+=notas[i];
    }
    cout<<"Total das notas: "<<res<<endl;
  }
  float media(){
    float m;
    for (int i = 0; i < 3; i++)
    {
        m+=notas[i];
    }
    m= m/3;
    return m;
  }
};



int main(){
    resultado r[40];
    for (int k = 0; k < 40; k++){
        r[k].entrada();
        r[k].mostra();
        r[k].total();
        cout<<"A media do aluno foi: "<<r[k].media()<<endl<<
        "/////////////////////////////////////////////////////\n";}
 return 0;
}