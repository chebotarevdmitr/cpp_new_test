#include <iostream>
#include <string>

int main([[maybe_unused]] int argc, [[maybe_unused]] char const*argv[])
{
  std::string name = "Dmitriy";
  for (int i=0;i<10;++i)
  {
  std::cout << "number 1 = " << name << std::endl;
  }
  return 0;
}