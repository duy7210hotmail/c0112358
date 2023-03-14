#include <iostream>

int main() {
  int x {5};
  int &ref{x};

  std::cout << x << std::endl;
  std::cout << &x << std::endl;
  std::cout << ref << std::endl;
  std::cout << *(&ref) << std::endl;
  return 0;
}

