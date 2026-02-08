#include <iostream>
using namespace std;
struct Data{ int a; double b; };
int main(){
    Data d{1,2.5};
    cout<<d.a<<" "<<d.b;
}
