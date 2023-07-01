#include "iostream"

void initialization();
void integer();
void doubles();
void chars();
void boolean();
void string();

int main(){
    //initialization();
    //integer();
    //doubles();
    //chars();
    //boolean();
    string();
    return 0;
}

void initialization(){
    int x; //declaration
    x = 5; //initialization
    int y = 6; //declaration + initialization

    int sum = x + y;

    std::cout << x << "\n" << y << "\n" << sum << std::endl;
}

void integer(){
    //integer (whole number)
    int age = 19;
    int year = 2023;
    int girlfriends = 0;

    std::cout << age << ", " << year << ", " << girlfriends << std::endl;
}

void doubles(){
    //double (number including decimal)
    double price = 420.69;
    double temperature = 36.5;

    std::cout << price << ", " << temperature << std::endl;
}

void chars(){
    //char stores a single character
    char grade = 'A';
    char initial = 'E'; //if more then 1 char -> overflow -> only last letter will be used
    char currency = '$';

    std::cout << grade << ", " << initial << ", " << currency << std::endl;
}

void boolean(){
    //boolean (true or false)
    bool student = true;
    bool girlfriend = false;
    bool available = false;

    std::cout << student << ", " << girlfriend << ", " << available << std::endl;
}

void string(){
    //string (object that represents a sequence of text)
    std::string firstName = "ENiGMA";
    std::string secondName = "XZD";

    std::cout << firstName + secondName << std::endl; //I guess u can also use + instead of << ¯\_(ツ)_/¯ 
}