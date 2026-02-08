#include <fstream>
#include <iostream>
int main(){
    ifstream in("a.txt");
    ofstream out("b.txt");
    char c; int n=0;
    while(in.get(c)){ out<<c; n++; }
    cout<<"Copied "<<n<<" bytes";
}
