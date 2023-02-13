#include <iostream>

using namespace std;


struct Item
{
    int codigo, quantidade;
    float custo;
};


int main(){
    Item *ptr,i1;
    ptr = &i1;
    do
    {
        cout<<"Digite o codigo do item: ";
        cin>>i1.codigo;
    } while (i1.codigo<=0);
    do
    {
        cout<<"Digite a quantidade do item: ";
        cin>>i1.quantidade;
    } while (i1.quantidade<=0);
    do
    {
        cout<<"Digite o custo do item: ";
        cin>>i1.custo;
    } while (i1.custo<=0);
    cout<<"Codigo: "<<ptr->codigo<<endl
        <<"Quantidade: "<<ptr->quantidade<<endl
        <<"Custo: "<<ptr->custo<<endl;
    

    return 0;
}