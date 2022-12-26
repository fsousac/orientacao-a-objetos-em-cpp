#include <iostream>

using namespace std;

class modelo{
public:
    int a;
    float b;
    void le_dados(){
        cout<<"O valor de a e: "<<a<<endl;
        cout<<"O valor de b e: "<<b<<endl;
    }

};

void escreve_dados(modelo &v){
    cout<<"Digite o valor de a: ";
    cin>>v.a;
    cout<<"Digite o valor de b: ";
    cin>>v.b;
}

int main(){
    modelo x,y;
    escreve_dados(x);
    y=x;
    y.a= y.a*3;
    y.b= y.b*3;
    y.le_dados();

    return 0;
}

