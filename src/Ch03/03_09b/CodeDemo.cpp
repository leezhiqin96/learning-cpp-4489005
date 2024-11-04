// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
// C++ vectors are dynamic arrays that can grow or shrink in size automatically, providing an easy way to manage collections of elements with efficient access and manipulation.

int main(){
    std::vector<int> primes;

    primes.push_back(1);
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(5);
    primes.push_back(11);

    std::cout << "The vector has " << primes.size() << " elements" << std::endl;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
