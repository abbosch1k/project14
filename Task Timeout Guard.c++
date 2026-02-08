#include <iostream>
#include <thread>
#include <future>
using namespace std;
int main(){
    auto fut=async([]{ this_thread::sleep_for(chrono::seconds(2)); });
    if(fut.wait_for(chrono::seconds(1))==future_status::timeout)
        cout<<"Timeout";
}
