#include <iostream>

void bakePizza();
void bakePizza(std::string);
void bakePizza(std::string, std::string);

int main(){

    bakePizza("salami", "bacon");
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza\n";
}

void bakePizza(std::string topping){
    std::cout << "Here is your " << topping << " pizza!" << std::endl;
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" << std::endl;
}