#include <iostream>

using namespace std;

void repete(int n);
int main(){
    int num;
    do{       
        cout << "Digite um numero: ";
        cin>>num;
    } while (num<=0);
    repete(num);
    return 0;
}

void repete(int n){
    string spc = "  ";
    string teste = "  ";
    int espacos = n/10;
    int counter = 0;
    int srt = n;

    while (n>0){
        
        for(int i=n;i>0;i--){
            cout<<i<<" ";
        }
        cout<<endl;
        if(n>9){
            for(int i=0;i<=counter;i++){
                cout<<" ";
                }
        }else {
            for(int i=0;i<srt-9;i++){
                cout<<" ";
            }}

        
        for(int i=0;i<=counter;i++){
            cout<<spc;
            }
        counter++;
        n--;
    
}}