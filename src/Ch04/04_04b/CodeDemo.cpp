// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    for (int i = 0; i < numbers.size(); i++) {
        average += numbers[i];
    };
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;

    average = 0.0f;
    for (auto x : numbers) {
        average += x;
    };
    average /= numbers.size();
    // using auto in a range-based for loop will copy each element of the container into the variable for each iteration. This is fine for small data types like integers but can be inefficient for larger objects.
    std::cout << "Average: " << average << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
