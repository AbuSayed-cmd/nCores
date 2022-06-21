#include<iostream>
#include<thread>

int main(){
    unsigned int nCores = std::thread::hardware_concurrency();
    std::cout<<"This machine support concurrency with "<< nCores<<"Cores availabe" <<std::endl;
    return 0;
}