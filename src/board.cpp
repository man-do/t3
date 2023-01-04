#include <board.h>
#include <square.h>

#include <iostream>
#include <unordered_map>
#include <vector>

t3::Board::Board(int rows, int cols) {
  grid.resize(cols);
  for (auto &el : grid) el.resize(rows);
  turn = t3::PlayerTurn::One;
  playerMarkMap.insert(std::pair<t3::PlayerTurn, t3::SquareMark>{
      t3::PlayerTurn::One, t3::SquareMark::X});
  playerMarkMap.insert(std::pair<t3::PlayerTurn, t3::SquareMark>{
      t3::PlayerTurn::Two, t3::SquareMark::O});
}

void t3::Board::setPlayerOneMark(t3::SquareMark mark) {
  t3::SquareMark opposite_mark =
      mark == t3::SquareMark::X ? t3::SquareMark::O : t3::SquareMark::X;
  auto it1 = playerMarkMap.find(t3::PlayerTurn::One);
  if (it1 != playerMarkMap.end()) it1->second = mark;
  auto it2 = playerMarkMap.find(t3::PlayerTurn::Two);
  if (it2 != playerMarkMap.end()) it2->second = opposite_mark;
}

bool t3::Board::set(int row, int col, t3::SquareMark mark) {
  try {
    grid[row][col] = mark;
    return true;
  } catch (int num) {
    return false;
  }
}

t3::SquareMark t3::Board::get(int row, int col) const { return grid[row][col]; }

void t3::Board::resetBoard() {
  for (int i = 0; i < grid.size(); ++i)
    for (int j = 0; j < grid[i].size(); ++j) grid[i][j] = t3::SquareMark::Empty;
}

t3::PlayerTurn t3::Board::getPlayerTurn() const { return turn; }

void t3::Board::changeTurn() {
  turn =
      turn == t3::PlayerTurn::One ? t3::PlayerTurn::Two : t3::PlayerTurn::One;
}

bool t3::Board::isTie() { return true; }

t3::PlayerTurn t3::Board::getWinner() const {
  std::vector<bool> X_positions;
  std::vector<bool> O_positions;

  // squash down grid
  for (auto &row : grid)
    for (auto &col : row) {
      X_positions.push_back((col == t3::SquareMark::X ? true : false));
      O_positions.push_back((col == t3::SquareMark::O ? true : false));
    }

  std::vector<std::vector<bool>> winning_patterns{
      {1, 1, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 1, 1, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 1, 1, 1}, {1, 0, 0, 1, 0, 0, 1, 0, 0},
      {0, 1, 0, 0, 1, 0, 0, 1, 0}, {0, 0, 1, 0, 0, 1, 0, 0, 1},
      {1, 0, 0, 0, 1, 0, 0, 0, 1}, {0, 0, 1, 0, 1, 0, 1, 0, 0}};

  for (auto el : winning_patterns) {
    if (X_positions == el)
      return t3::PlayerTurn::One;
    else if (O_positions == el)
      return t3::PlayerTurn::Two;
  }

  return t3::PlayerTurn::None;
}
