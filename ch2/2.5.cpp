#include <iostream>

double lightYearsToAstronomicalUnits(double ly);

int main()
{
  double ly;
  std::cout << "Enter the number of light years: ";
  std::cin >> ly;
  std::cout << ly << " light years = "
            << lightYearsToAstronomicalUnits(ly)
            << " astronomical units.\n";
  return 0;
}

double lightYearsToAstronomicalUnits(double ly)
{
  return 63240 * ly;
}
