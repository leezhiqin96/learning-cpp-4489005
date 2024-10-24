// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Hello there, what's your name? " << std::flush;
    // flush ensures output is completely sent to terminal before waiting for user input
    std::cin >> str; // cin is only for single words
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
