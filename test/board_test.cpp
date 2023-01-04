#include <board.h>
#include <gtest/gtest.h>

TEST(BoardTest, GetSetAssertions) {
  t3::Board* b = new t3::Board();

  b->set(0, 0, t3::SquareMark::X);
  EXPECT_EQ(b->get(0, 0), t3::SquareMark::X);

  b->set(2, 2, t3::SquareMark::O);
  EXPECT_EQ(b->get(2, 2), t3::SquareMark::O);

  b->set(1, 1, t3::SquareMark::O);
  EXPECT_EQ(b->get(1, 1), t3::SquareMark::O);

  delete b;
}

TEST(BoardTest, ResetAssertions) {
  t3::Board* b = new t3::Board();

  b->set(0, 0, t3::SquareMark::X);
  b->set(1, 1, t3::SquareMark::X);
  b->set(2, 2, t3::SquareMark::X);
  b->set(0, 1, t3::SquareMark::X);
  b->set(0, 2, t3::SquareMark::X);

  b->resetBoard();
  EXPECT_EQ(b->get(0, 0), t3::SquareMark::Empty);
  EXPECT_EQ(b->get(1, 1), t3::SquareMark::Empty);
  EXPECT_EQ(b->get(2, 2), t3::SquareMark::Empty);
  EXPECT_EQ(b->get(0, 1), t3::SquareMark::Empty);
  EXPECT_EQ(b->get(0, 2), t3::SquareMark::Empty);

  delete b;
}

TEST(BoardTest, PlayerTurnAssertions) {
  t3::Board* b = new t3::Board();

  EXPECT_EQ(b->getPlayerTurn(), t3::PlayerTurn::One);

  b->changeTurn();
  EXPECT_EQ(b->getPlayerTurn(), t3::PlayerTurn::Two);

  b->changeTurn();
  EXPECT_EQ(b->getPlayerTurn(), t3::PlayerTurn::One);

  delete b;
}

TEST(BoardTest, GetWinnerAssertions) {
  t3::Board* b = new t3::Board();

  //   b->setPlayerOneMark(t3::SquareMark::X);

  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::None)
      << "isWinner() board doesn't start empty.";

  // horizontals
  b->resetBoard();
  b->set(0, 0, t3::SquareMark::X);
  b->set(0, 1, t3::SquareMark::X);
  b->set(0, 2, t3::SquareMark::X);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::One);

  b->resetBoard();
  b->set(1, 0, t3::SquareMark::O);
  b->set(1, 1, t3::SquareMark::O);
  b->set(1, 2, t3::SquareMark::O);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::Two);

  b->resetBoard();
  b->set(1, 0, t3::SquareMark::X);
  b->set(1, 1, t3::SquareMark::X);
  b->set(1, 2, t3::SquareMark::X);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::One);

  // verticals
  b->resetBoard();
  b->set(0, 0, t3::SquareMark::O);
  b->set(1, 0, t3::SquareMark::O);
  b->set(2, 0, t3::SquareMark::O);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::Two);

  b->resetBoard();
  b->set(0, 1, t3::SquareMark::X);
  b->set(1, 1, t3::SquareMark::X);
  b->set(2, 1, t3::SquareMark::X);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::One);

  b->resetBoard();
  b->set(0, 2, t3::SquareMark::O);
  b->set(1, 2, t3::SquareMark::O);
  b->set(2, 2, t3::SquareMark::O);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::Two);

  // diagonals
  b->resetBoard();
  b->set(0, 1, t3::SquareMark::X);
  b->set(1, 1, t3::SquareMark::X);
  b->set(2, 1, t3::SquareMark::X);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::One);

  b->resetBoard();
  b->set(0, 1, t3::SquareMark::O);
  b->set(1, 1, t3::SquareMark::O);
  b->set(2, 1, t3::SquareMark::O);
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::Two);

  // empty
  b->resetBoard();
  EXPECT_EQ(b->getWinner(), t3::PlayerTurn::None) << " empty board.";

  delete b;
}

TEST(BoardTest, SetPlayerOneMarkAssertions) {
  t3::Board* b = new t3::Board();

  delete b;
}

TEST(BoardTest, IsTieAssertions) {
  t3::Board* b = new t3::Board();

  delete b;
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}