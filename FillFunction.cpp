#include <iostream>

int main(){

    //fill() = Fills a range of elements with a specified value fill(begin, end, value)

    const int SIZE = 100;

    std::string foods[SIZE];

    fill(foods, foods + SIZE, "Schnitzel");
    fill(foods, (foods + SIZE/2), "Pizza");

    int i = 0;
    for(std::string food : foods){
        std::cout << food << ", ";
        i++;
        if(i % 10 == 0) std::cout << "\n";
    }

    return 0;
}