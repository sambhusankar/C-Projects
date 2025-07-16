#include <iostream>
#include <iomanip>

int main() {
  char name[] = "im gears";
  std::cout << std::setw(10) << std::setfill('&') << name;
  return 0;
}