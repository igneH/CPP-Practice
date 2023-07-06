#include "iostream"

int main(){
    //sizeof() = determines the size in bytes of a:
    //           variable, data type, class, object etc.

    double gpa = 2.0;
    std::string name = "EniGMA";
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(gpa) << " bytes\n" << sizeof(name) << " bytes\n" << 
    sizeof(grade) << " bytes\n" << sizeof(student) << " bytes\n" << sizeof(grades) << " bytes\n" << 
    sizeof(grades)/sizeof(char) << " elements\n";

    return 0;
}