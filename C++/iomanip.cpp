#include <iostream>

int main() {
  char text[] = "Hello World!";
  std::cout.width(15);
  std::cout.fill('*');
  std::cout << text;
  std::cout.flush();
  float num = 100.120;
  std::cout.precision(5);
  std::cout << num;
  return 0;
}