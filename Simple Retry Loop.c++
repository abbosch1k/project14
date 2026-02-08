#include <iostream>
using namespace std;

bool ok(){ static int i=0; return ++i==4; }

int main(){
    for(int i=0;i<5;i++){
        if(ok()){ cout<<"Success"; break; }
        cout<<"Retry\n";
    }
}
