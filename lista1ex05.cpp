#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string info= "";
    cout<<"Digite o numero que deseja saber o digito mais significativo"<<endl;
    cin>>info;
    int msb=0;
    int lsb=9;
    int valor=0;
    char char_array[info.length()];
    for (int i = 0; i < sizeof(char_array); i++) {
        char_array[i]= info[i];
        valor = int(info[i]);
        valor-=48;
        if (valor > msb){
            msb = valor;
        }
        if (valor< lsb){
            lsb = valor;
        }

    }
    cout<<"O digito mais significativo de "<<info<<" e: "<<msb<<endl;
    cout<<"O digito menos significativo de "<<info<<" e: "<<lsb;
    return 0;
}