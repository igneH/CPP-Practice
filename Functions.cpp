#include "iostream"

void happyBirthday(std::string, int); //a function needs to be declaired before the main function (function prototype)

int main(){
    //function = a block of reusable code
    std::string name = "ENiGMA";
    int age = 19;
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy birthday to " << name << "!\n" << "You are " << age << " y/o!" << std::endl;
}