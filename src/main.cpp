#include <iostream>
#include "ticker_plant/version.h"

int main() {
  std::cout << "ticker-plant version: " << ticker_plant::version() << '\n';
  return 0;
}