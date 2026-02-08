#include <atomic>
#include <iostream>
using namespace std;

atomic<int> sem(1);

int main(){
    while(sem.exchange(0)==0);
    cout<<"Critical section\n";
    sem=1;
}
