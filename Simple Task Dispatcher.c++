#include <iostream>
using namespace std;

void taskA(){ cout<<"A\n"; }
void taskB(){ cout<<"B\n"; }

int main(){
    void(*tasks[])()={taskA,taskB};
    tasks[0](); tasks[1]();
}
