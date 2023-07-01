#include "iostream" //headerfile for basic input/output operations

int main(){

    //This is a comment
    /*
        This
        is
        a
        multi-line
        comment
    */

    std::cout << "Pizza is Pog";    //standard-character-output
                                    //std = standard library
                                    //:: = scope resolution operator (access cout from std)
                                    //cout = an object of the std library, used for outputting data on the console
                                    //<< = left shift operator to insert the string into cout
                                    //string = sequence of characters
    
    std::cout << std::endl;         // endl = ending the line (flushes the Outputbuffer)
    std::cout << "Lillias cock too :3\nSame with Sorakas :P" << std::endl; // \n is better performance wise (does not flush the Outputbuffer)

    return 0;
}