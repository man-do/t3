#pragma once
namespace t3 {

enum SquareMark { Empty, X, O };

class Square {
 public:
  Square();
  SquareMark mark;
  int x_pos;
  int y_pos;
};

}  // namespace t3
