#include "iostream"
#include "vector"

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using number_t = int; 
using text_t = std::string;

int main(){
    /*typedef = reserved keyword used to create an additional name
                (allias) for another data type.
                New identifier for an existing type
                Helps with readability and reduces typos
                Use when there is a clear benefit
                Replace with 'using' (work bettwer w/ templates)*/

    pairlist_t pairlist;

    text_t firstName = "ENiGMA";
    number_t age = 19;

    std::cout << "Name: " << firstName << "\nAge: " << age << std::endl;
    
    return 0;
}