#include <iostream>

using namespace std;

void caule(char,int);

int main(){
    int num;
    char alpha;
    cout<<" Digite um caracter que desejar fazer a linha:\n";
    cin>>alpha;
    cout<<"Digite o numero de linhas que deseja:\n";
    cin>>num;
    caule(alpha,num);
    return 0;
}

void caule(char c, int n){
    for (int j = 0; j < n; ++j) {
        string res="";
        for (int i = 0; i < n; ++i) {
            res += c;
        }
        cout << res << endl;
    }

}