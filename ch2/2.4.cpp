#include <iostream>

int main()
{
  double temperature;
  std::cout << "Please enter a Celsius value: ";
  std::cin >> temperature;
  std::cout << temperature << " degrees Celsius is "
            << 1.8 * temperature + 32
            << " degrees Fahrenheit.\n";
  return 0;
}
