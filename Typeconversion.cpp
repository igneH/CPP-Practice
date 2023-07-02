#include "iostream"

int main(){
    /*type conversion = converting a value of one data type to another
                        implicit = automatic
                        explicit = precede value with new data type (int) */

    //implicit
    int x = 3.14;

    //explicit
    double y = (int) 3.14;

    std::cout << "x: " << x << "y: " << y << std::endl;
    return 0;
}