#include <iostream>
#include <string>

using namespace std;


int main(){
    string lista="";
    int num=1;
    int x = 5;
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += num;
        if (i!=0){
            lista+='+';
        }
        lista+= to_string(num);
        cout<<lista<<"="<<sum<<endl;
        num++;
    }

    return 0;
}