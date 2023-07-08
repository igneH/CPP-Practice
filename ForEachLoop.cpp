#include <iostream>

int main(){
    // foreach loop = loop that eases the traversal over 
    //                an iterable data set

    std::string foods[] = {"Schnitzel", "Kaisersmarrn", "Käsespätzle"};

    for(std::string food : foods){
        std::cout << food << "\n";
    }

    return 0;
}