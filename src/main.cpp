#include <board.h>
#include <square.h>

#include <iostream>

int main() {
  t3::Board* b = new t3::Board();

  //   std::cout << b->grid[0].size() << std::endl;

  delete b;

  return 0;
}