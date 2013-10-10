#include "board.h"
#include "rule.h"

class GameManager {
	// Keeps current Board and winning Board in memory.

	private:
		Board* winningBoard;
		Board* currentBoard;
		Rule*  rules;

	public:
		bool GameManager::AtWinningBoardP();
		Color GameManager::GetCurrentColorOfCellAt(int x, int y);

		void GameManager::SetBoardStatesFromClickAt(int x, int y);


};
