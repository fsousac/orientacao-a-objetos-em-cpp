#include <iostream>

using namespace std;

int mdc(int,int);
int main(){
    int val1;
    int val2;
    int result;
    int init;
    int finish;
    cout<<"Digite os valores:\n";
    cin>>val1>>val2;
    if(val1-val2>val2-val1){
        init=val2;
        finish=val1;
    } else{
        init=val1;
        finish=val2;
    }

    result = mdc(init,finish);
    cout<<"O mdc de "<<val1<<" e "<<val2<<" e "<< result<<endl;
}

int mdc(int a, int b){
    int out=1;
    for (int i = 1; i <= a; ++i) {
        if (a%i==0 && b%i==0)
            out=i;
    }
    return out;
}