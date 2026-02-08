#include <filesystem>
#include <iostream>
namespace fs=std::filesystem;
int main(){
    auto p=fs::status("a.txt").permissions();
    cout<<(p!=fs::perms::none);
}
