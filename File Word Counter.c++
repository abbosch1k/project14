#include <fstream>
#include <iostream>
#include <string>
int main(){
    ifstream f("a.txt"); string w; int c=0;
    while(f>>w) c++;
    cout<<c;
}
