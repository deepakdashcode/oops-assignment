#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cout << "Enter a multiline string: ";
  std::getline(std::cin, input);
  std::cout << "You entered: " << input << std::endl;
  return 0;
}