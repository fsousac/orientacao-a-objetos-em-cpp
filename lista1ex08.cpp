#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num;
    cout<<"Digite um Numero: ";
    cin>>num;
    cout<<setw(4);
    for (int i = 1; i < 31; ++i) {
        cout<<num*i<<setw(5);
        if(i%10==0)
            cout<<endl;
    }
    return 0;
}