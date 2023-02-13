#include <iostream>

using namespace std;

class A{
    int a = 3;
    public:
        int getA(){
            return a;
        }
};
class B : virtual public A{

};
class C : public virtual A{

};
class D : public B, public C{

};

int main(){
    D d;
    cout<<d.getA()<<endl;
    return 0;
}