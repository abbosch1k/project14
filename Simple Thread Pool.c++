#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void job(int i){ cout<<"Job "<<i<<"\n"; }

int main(){
    vector<thread> ts;
    for(int i=0;i<3;i++) ts.emplace_back(job,i);
    for(auto& t:ts) t.join();
}
