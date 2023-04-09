#include <iostream>

int main () 
{
  int fav_number;

  std::cout << "What is your favorite number?\n";

  std::cin >> fav_number;

  std::cout << "Cool! " << fav_number << " is my favorite number too!\n";

  return 0;
}