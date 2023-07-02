#include "iostream"

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

void noUsing();
void withUsing();
void usingStd();

int main(){
    /*namespace = provides a solution for preventing name conflicts
                    in large projects. Each entity needs a unique name.
                    A namespace allows for identically named entities
                    as long as the namespaces are different. */
    noUsing();
    withUsing();
    return 0;
}

void noUsing(){
    int x = 0;
    //int x = 1; //redeclaration is not allowed           

    std::cout << "\nFirst: " << first::x << "\nSeconed: " << second::x << "\nmain: " << x;
}

void withUsing(){
    using namespace second;

    std::cout << x; //no prefix needed
    std::cout << first::x;
}

void usingStd(){
    //using namespace std; //high likelihood of naming conflicts
    //string name = "ENiGMA"
    //cout << "Hello " << name;

    using std::cout;
    using std::string;
    string name = "ENiGMA";
    cout << "Hello " << name;
}