#include <iostream>
#include <cmath>

int main()
{
    std::string grade;
    std::cout << "Enter your grade: ";
    std::getline(std::cin, grade);
    std::cout << (std::stod(grade) < 60.0 ? "You failed!" : "You passed!") << "\n";
    return 0;
}