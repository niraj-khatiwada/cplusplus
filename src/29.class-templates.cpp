#include <iostream>

// we can use class as well here. since members of struct are public by default, we'll use this for now.
template <typename T>
struct Point {
  T x, y;
  Point(T x, T y) : x(x), y(y) {};

  // in c++ classes and structs, you can define the methods here and write it's logic separate as well.
  void log_point();
};

template <typename T>
void Point<T>::log_point() {
  std::cout << "(" << x << ", " << y << ")\n";
};

int main() {
  Point<int> p(1, 2);
  p.log_point();

  Point<std::string> p2("1", "2");
  p2.log_point();
}