#include <iostream>
#include <mutex>
using namespace std;

int main(){
    mutex m;
    int c=0;
    {
        lock_guard<mutex> g(m);
        c++;
    }
    cout<<c;
}
