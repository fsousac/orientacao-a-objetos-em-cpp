#include <iostream>

using namespace std;

int main(){
    char vogal;
    char saida = 'n';

    while (saida != 's') {
        cout<<"Digite uma letra para testar se ela e uma vogal\n";
        cin>>vogal;
        vogal = tolower(vogal);
        if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u')
            cout << "A letra e uma vogal\n";
        else
            cout << "A letra e uma consoante\n";
        cout<<endl;
        cout<< "Deseja parar? (S/N)\n";
        cin>>saida;
        saida=tolower(saida);
    }
    return 0;
}
