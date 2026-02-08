#include <filesystem>
#include <iostream>
using namespace std;
namespace fs = std::filesystem;

int main(){
    auto t = fs::last_write_time("a.txt");
    cout<<"Timestamp read\n";
}
