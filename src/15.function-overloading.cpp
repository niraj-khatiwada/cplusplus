#include <iostream>
#include <random>

int add(int a, int b);
int add(int a, int b, int c);

int main()
{
    std::cout << add(1, 2) << "\n";
    std::cout << add(1, 2, 3) << "\n";
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}