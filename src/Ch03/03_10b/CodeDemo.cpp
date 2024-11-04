// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> my_cows;

    my_cows.push_back(cow("Daisy", 7, cow_purpose::pet));
    my_cows.push_back(cow("Hilary", 2, cow_purpose::meat));
    my_cows.push_back(cow("Sheesh", 3, cow_purpose::dairy));
    my_cows.push_back(cow("Damn", 1, cow_purpose::hide));

    std::cout << "The first cow is " << my_cows.begin()->get_name() << std::endl;
    std::cout << "The second cow is " << my_cows[1].get_name() << std::endl;
    std::cout << "Next to last cow is " << prev(my_cows.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow is " << (my_cows.end() - 1)->get_name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
