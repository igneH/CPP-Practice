#include "iostream"

void addition(int);
void subtraction(int);
void multiplication(int);
void division(int);
void modulus(int);

int main(){
    /*arithmetic operators = return the result of a specific 
                                arithmetic operation(+ - * / %)*/

    int students = 26;
    addition(students);
    subtraction(students);
    multiplication(students);
    division(students);
    modulus(students);
    return 0;
}

void addition(int students){
    //students = students + 1;
    //students+=1;
    students++;

    std::cout << students << std::endl;
}

void subtraction(int students){
    //students = students - 2;
    //students-=2;
    students--;

    std::cout << students << std::endl;
}

void multiplication(int students){
    //students = students *2;
    students*=2;

    std::cout << students << std::endl;
}

void division(int students){
    //students = students / 2;
    students/=2;

    std::cout << students << std::endl;
}

void modulus(int students){
    int remainder = students % 5;
    
    std::cout << remainder << std::endl;
}