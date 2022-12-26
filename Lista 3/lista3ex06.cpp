#include <iostream>

using namespace std;

class Cartesiano{
public:
    float x=0,y=0;

};
void entrada_dados(Cartesiano &dc);
void mostra_dados(Cartesiano &dc);

int main(){
    Cartesiano dc;
    entrada_dados(dc);
    mostra_dados(dc);
    return 0;
}

void entrada_dados(Cartesiano &dc){
    cout<<"Digite o valor de x: ";
    cin>>dc.x;
    cout<<"Digite o valor de y: ";
    cin>>dc.y;
}
void mostra_dados(Cartesiano &dc){
    cout<<"O valor de x e: "<<dc.x<<endl;
    cout<<"O valor de y e: "<<dc.y<<endl;
}
