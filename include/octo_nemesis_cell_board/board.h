#include "state_set.h"

class CellCoords {

	int xy;	// use bitmask to get both

	public:
		CellCoords::CellCoords(int x, int y);
		int CellCoords::GetX();
		int CellCoords::GetY();

};

class Board {

	private:
		State** cell_states;

	public:
		State Board::GetStateOfCellAt(int x, int y);


		// neighborhood convenience methods: all return arrays of CellCoords

		CellCoords* Board::Get8CellCoordsNextToCoords( int x, int y);
		CellCoords* Board::Get4CellCoordsOrthogonalToCoords( int x, int y);
		CellCoords* Board::Get4CellCoordsKittyCornerToCoords( int x, int y);
		CellCoords* Board::GetCellCoordsInRow( int y);
		CellCoords* Board::GetCellCoordsInColumn( int y);
};
