#include "iostream"

int myNum = 3;

void printNum();

int main(){
    //local variables = declared inside a function or block {}
    //global variables = declared outside of all funcitons
    //better to not use global var since they polute the global namespace
    
    int myNum = 2;
    printNum();
    std::cout << myNum << std::endl;

    return 0;
}

void printNum(){
    //int myNum = 1;
    std::cout << ::myNum << std::endl; //with :: you use the global variable
}