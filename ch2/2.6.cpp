#include <iostream>

void displayTime(int h, int min);

int main()
{
  int h, min;
  std::cout << "Enter the number of hours: ";
  std::cin >> h;
  std::cout << "Enter the number of minutes: ";
  std::cin >> min;
  displayTime(h,min);
  return 0;
}

void displayTime(int h, int min)
{
  std::cout << "Time: " << h << ":" << min << std::endl;
}
