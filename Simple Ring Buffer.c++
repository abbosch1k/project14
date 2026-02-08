#include <iostream>
using namespace std;
int main(){
    int buf[4]={0}, h=0;
    for(int i=1;i<=6;i++){ buf[h]=i; h=(h+1)%4; }
    for(int x:buf) cout<<x<<" ";
}
