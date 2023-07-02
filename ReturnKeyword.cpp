#include <iostream>

double square(double);
double cube(double);
std::string concatStrings(std::string, std::string);

int main(){
    //return = return a value back to the spot 
    //         where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << " cm^2\n" << "Volume: " << volume << " cm^3" << std::endl;


    std::string firstName = "ENiGMA";
    std::string lastName = "XZD";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "\nYour name is: " << fullName << std::endl; 

    return 0;
}

double square(double length){
    return length*length;
}

double cube(double length){
    return length*length*length;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}