#include <iostream>

int main()
{
  int in;
  std::cout << "Enter distance in furlongs: ";
  std::cin >> in;
  std::cout << "Distance in yards: " << in * 220 << std::endl;
  return 0;
}
