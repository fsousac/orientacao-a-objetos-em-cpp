#include <iostream>

using namespace std;

class Vetor
{
private:
    int vec[100];
public:
    void le_vetor(){
        for(int i=0;i<100;i++){
            cout<<"Digite o "<<i+1<<"o. valor: \a";
            cin>>vec[i];
        }
    }
    void mostra_vetor(){
        for(int i=0;i<100;i++){
            cout<<vec[i]<<" ";
        }
    }
    void ordena_vetor(){
        int aux;
        for(int i=0;i<100;i++){
            for(int j=i+1;j<100;j++){
                if(vec[i]>vec[j]){
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }
    }
};

int main(void){
    Vetor v1;
    v1.le_vetor();
    v1.ordena_vetor();
    v1.mostra_vetor();
}

