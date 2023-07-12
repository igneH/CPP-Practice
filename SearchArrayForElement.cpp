#include <iostream>

int searchArray(std::string[], int, std::string);

int main(){
    std::string foods[] = {"Schnitzel", "Kaiserschmarrn", "Käsespätzle"};
    int size = sizeof(foods)/sizeof(int);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myFood;

    index = searchArray(foods, size, myFood);

    if (index != -1){
        std::cout << myFood << " is at index: " << index << std::endl;
    }else{
        std::cout << myFood << " is not in the array!" << std::endl;
    }

    return 0;
}

int searchArray(std::string foods[], int size, std::string myFood){
    for(int i = 0; i < size; i++){
        if(foods[i] == myFood){
            return i;
        }  
    }
    return -1;
}