#include <iostream>

using namespace std;

int main(void){
    int numeros[10] = {0,1,2,3,4,5,6,7,8,9};
    int numero,meio,fim,inicio,localiza;
    localiza = -1;
    inicio = 0;
    fim = 9;
    cout<< "Digite um numero: ";
    cin>> numero;

    while (inicio <= fim)
    {
        meio=(inicio+fim)/2;
        if (numeros[meio] == numero)
        {
            localiza = meio;
            break;
        }
        else if (numero<numeros[meio])
        {
            fim = meio - 1;
        }
        else
        {
            inicio = meio + 1;
        }
        
        
    }

    if (localiza == -1)
    {
        cout<< "Numero nao encontrado no vetor";
    }
    else{
        cout<< "Numero encontrado na posicao: " << localiza;
    }
    
}