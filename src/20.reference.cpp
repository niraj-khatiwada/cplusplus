#include <iostream>

int sum(const int& a, const int& b);
int sum_and_increment_by_1(int& a, int& b);

int main() {
  // Reference is different than pointer. Pointer is an address.
  //   Reference are like alias, basically same entity but different name.
  int a = 100;
  int& b = a; // referencing the value in the same address

  std::cout << a << " | " << b << "\n";
  std::cout << &a << " | " << &b << "\n";

  std::cout << sum(a, b) << "\n";

  std::cout << sum_and_increment_by_1(a, b) << "\n";
  std::cout << a << " | " << b << "\n"; // the result will be 102 not 101
}

int sum(const int& a, const int& b) { return a + b; }

// if you pass a reference, it can directly mutate the original value.
int sum_and_increment_by_1(int& a, int& b) {
  int result = a + b;
  a++;
  b++;
  return result;
}