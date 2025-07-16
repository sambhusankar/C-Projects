#include <iostream>

class animal{
  char name[9] = "Dinosaur";
  char color[6] = "black";

  public:
    static void sound() {
      std::cout << "bark";
    }

};

int main() {
  animal A;
  animal::sound();
  return 0;
}