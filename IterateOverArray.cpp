#include "iostream"

int main(){
    std::string students[] = {"Hengi", "ENiGMA", "Izukain"};

    for (size_t i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        std::cout << students[i] << "<\n";
    }
    return 0;
}