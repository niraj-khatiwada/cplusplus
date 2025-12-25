#include <iostream>

int main()
{
    auto name = __cplusplus;

    std::cout << typeid(name).name() << "\n";

    return 0;
}