#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream f("a.txt");
    string w;
    while(f>>w)
        if(w.size()>3) cout<<w<<"\n";
}
