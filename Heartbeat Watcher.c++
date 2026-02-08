#include <iostream>
#include <chrono>
using namespace std;
int main(){
    auto last=chrono::steady_clock::now();
    if(chrono::steady_clock::now()-last<chrono::seconds(1))
        cout<<"Alive";
}
