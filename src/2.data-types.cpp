#include <iostream>

int main()
{
    // Primitive Data Types

    // integer: size = 4 (bytes in most modern system). guaranteed 2 bytes(16 bits) minimum
    const int x = 100;
    std::cout << x << "\n";

    std::cout << "size of int = " << sizeof(int) << "\n";
    std::cout << "size of uint = " << sizeof(unsigned int) << "\n";

    std::cout << "min of int = " << std::numeric_limits<int>::min() << "\n";
    std::cout << "max of int = " << std::numeric_limits<int>::max() << "\n";
    std::cout << "max of uint = " << std::numeric_limits<unsigned int>::max() << "\n";

    // long: size = 8 bytes on Linux/Macos, 4 bytes on Windows
    const long xx = 100;
    std::cout << xx << "\n";

    std::cout << "size of long = " << sizeof(long) << "\n"; // this value will be different based on platform.

    std::cout << "min of long = " << std::numeric_limits<long>::min() << "\n";
    std::cout << "max of long = " << std::numeric_limits<long>::max() << "\n";
    std::cout << "max of ulong = " << std::numeric_limits<unsigned long>::max() << "\n";

    // There's also (long long) which is guaranteed 64bits minimum

    // float: size = 4 bytes
    const float y = 7.5;
    std::cout << y << "\n";

    std::cout << sizeof(float) << "\n";

    std::cout << "min of float = " << std::numeric_limits<float>::max() << "\n";
    std::cout << "max of float = " << std::numeric_limits<float>::max() << "\n";

    // double: size = 8 bytes
    const double z = 13.33;
    std::cout << z << "\n";

    std::cout << "size of double = " << sizeof(double) << "\n";

    std::cout << "min of double = " << std::numeric_limits<double>::min() << "\n";
    std::cout << "max of double = " << std::numeric_limits<double>::max() << "\n";

    // character: size = 1 byte
    const char a = 'a';
    std::cout << a << '\n';

    // boolean: size = 1 byte
    const bool is_true = true;
    std::cout << is_true << "\n"; // this will print 0 or 1 instead of true or false

    // string: size = not fixed
    // strings are value type in C++ unlike Rust's &str
    std::string name = "Niraj";
    std::cout << name << "\n";

    std::cout << sizeof(std::string) << "\n"; // will print 24 bytes in 64 bit system Linux/Mac and 32 bytes in 64 bit Windows.

    std::string name2 = name; // value is copied
    name = "NK";
    std::cout << name << " | " << name2 << "\n";

    return 0;
}