#include <iostream>

using namespace std;

class Cartesiano{
private:
    float x,y;

public:
    void entrada_dados();
    void mostra_dados();

};
void Cartesiano::entrada_dados(){
    cout<<"Digite o valor de x: ";
    cin>>x;
    cout<<"Digite o valor de y: ";
    cin>>y;
}
void Cartesiano::mostra_dados(){
    cout<<"O valor de x e: "<<x<<endl;
    cout<<"O valor de y e: "<<y<<endl;
}

int main(){
    Cartesiano dc;
    dc.entrada_dados();
    dc.mostra_dados();
    return 0;
}

