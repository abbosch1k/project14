#include <iostream>
using namespace std;
int main(){
    int s[]={10,20,30}; static int i=0;
    cout<<s[i++%3];
}
