#include <iostream>

using namespace std;

int main(){
    int tam;
    do
    {
        cout<<"Digite o tamanho do vetor: ";
        cin>>tam;
    } while (tam<=0);
    int vec[tam];
    int *ptr = vec;
    int i = 0;
    for (int i = 0; i < tam; i++)
    {
        vec[i] = i;
    }
    
    cout<<"O vetor de "<<tam<<" elementos e: {";
    for (int i = 0; i < tam-1; i++)
    {
        cout << *ptr++ << ", ";
    };
    cout <<*ptr++<<"}"<<endl;
    
    return 0;   
}