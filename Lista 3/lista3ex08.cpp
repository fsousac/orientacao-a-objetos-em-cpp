#include <iostream>
#include <string>

using namespace std;

class perfeito{
private:
    int num;
public:
    int fatores = 0;
    void entrada(){
        do{cout << "Digite um numero: ";
        cin >> num;
        }while(num <= 0);
    }
    string verifica_perfeito(){
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                fatores += i;
            }
        }
        if(fatores == num || num == 1){
            return "O numero e perfeito";
        }else{
            return "O numero nao e perfeito";
        }
    }
    
};



int main(){
    do{
        perfeito p;
        char ans;
        p.entrada();
        cout << p.verifica_perfeito() << endl;
        do{
        cout<<"Deseja continuar? (s/n)"<<endl;
            cin>>ans;
            ans = tolower(ans);
        }while(ans!='s' && ans!='n');
        if(ans=='n'){
            break;
        }else{
            p.fatores = 0;
        }
    }while(true);
    return 0;
}