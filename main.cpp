#include <iostream>

int main([[maybe_unused]] int argc, [[maybe_unused]] char const *argv[])
{
  int numb1 = 0;
  int numb2 = 0;

  std::cout << "Enter numb1: ";
  std::cin >> numb1;

  std::cout << "Enter numb2: ";
  std::cin >> numb2;

  int res = numb1 + numb2;

  std::cout << "result = " << res << std::endl;

  return 0;
}
