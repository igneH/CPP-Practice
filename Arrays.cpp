#include "iostream"

int main(){
    /*array = a data structure that can hold multpile values
                values are accessed by an index number
                "kind of like a variable that holds multiple values"*/

    std::string cars[] = {"Lamborghini", "Mustang", "Camry"};

    cars[1] = "Camaro";

    std::cout << cars[0] << '\n' << cars[1] << '\n' << cars[2] << std::endl;
    
    std::cout << '\n';
    std::string food[2];

    food[0] = "Schnitzel";
    food[1] = "Nigiri";
    food[2] = "Lillias cock";

    for (size_t i = 0; i <= sizeof(food)/sizeof(food[0]); i++) // size_t is better for comparising with sizes
    {
        std::cout << food[i] << '\n';
    }
    return 0;
}