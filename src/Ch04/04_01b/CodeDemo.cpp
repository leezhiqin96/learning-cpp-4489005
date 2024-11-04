// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>
#include <string>

bool linearSearch(char arr[], size_t size, char target) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == target)
            return true;
    }
    return false;
    
}

int main(){
    int a = 1023;
    bool flag = false;
    char ltr = 'd';
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    if (a > 1000)
        std::cout << "Warning: a is over 1000" << std::endl;

    if (a % 2) // 0 is false, so everything else is true
        std::cout << "a is odd" << std::endl;
    else 
        std::cout << "a is even" << std::endl;

    std::cout << "The letter " << ltr << " is ";
    bool is_vowel = linearSearch(vowels, sizeof(vowels), ltr);
    if (is_vowel)
        std::cout << "a vowel" << std::endl;
    else
        std::cout << "not a vowel" << std::endl;

    if (flag)
        std::cout << "The flag is true" << std::endl;
    else
        std::cout << "The flag is false" << std::endl;

    

    std::cout << std::endl << std::endl;
    return (0);
}
