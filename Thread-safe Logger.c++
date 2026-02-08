#include <iostream>
#include <mutex>
using namespace std;
mutex m;
void log(const string& s){
    lock_guard<mutex> g(m);
    cout<<s<<"\n";
}
int main(){ log("Hello"); }
