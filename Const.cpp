#include "iostream"

int main(){
    //The const keyword specifies that a variable's value is constant
    //It tells the compiler to prevent anything from modifying it
    //(read only)

    const double PI = 3.1415926535897932384626433;
    //PI = 666.999; //not possible
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    return 0;
}