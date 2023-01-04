#include <square.h>

#include <unordered_map>
#include <vector>

namespace t3 {

enum PlayerTurn { One, Two, None };

typedef std::vector<std::vector<t3::SquareMark> > GridMatrix;

class Board {
 protected:
  GridMatrix grid;
  PlayerTurn turn;
  std::unordered_map<PlayerTurn, SquareMark> playerMarkMap;

 public:
  Board(int rows = 3, int cols = 3);
  bool set(int row, int col, t3::SquareMark mark);
  t3::SquareMark get(int row, int col) const;
  void resetBoard();
  PlayerTurn getPlayerTurn() const;
  void setPlayerOneMark(t3::SquareMark mark);
  void changeTurn();
  bool isTie();
  PlayerTurn getWinner() const;
};

}  // namespace t3
