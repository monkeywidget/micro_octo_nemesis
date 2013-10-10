/*
ACTOR button A
  any
  in State X
FOR_ACTEE buttons (selector has AND/OR)
  all
  only those in State Y
  in a position relative to Actor A position
    actor_self
    next to (8 neighbors)
    orthagonal to (4 neighbors)
    kitty-corner to (4 neighbors)
    same row
    same column
    at relative coordiates (x1,y1)
DO (can do multiple of:)
    set to State S
    advance State M steps
    evaluate another Rule R1, R2, R3...Rn
*/

class Rule {

	public:
		CellCoords* Rule::GetActeeList();


};

// RuleEngine
// listen map: by cell
// listen map: by state

// build actee list

// for each operation
//   for each actee in actee list
//      do operation on actee

/*
ACTOR button A   // register rule in listen map
  any
  in State X
FOR_ACTEE buttons (selector has AND/OR)
  all
  only those in State Y
  in a position relative to Actor A position
    actor_self
    next to (8 neighbors)
    orthagonal to (4 neighbors)
    kitty-corner to (4 neighbors)
    same row
    same column
    at relative coordiates (x1,y1)
DO (can do multiple of:)
    set to State S
    advance State M steps
    evaluate another Rule R1, R2, R3...Rn
*/
