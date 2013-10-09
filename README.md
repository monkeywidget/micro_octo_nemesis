Micro Octo Nemesis
==================

Arduino-compatible Interface and Rules Engine for a Turing-complete "Lights Out"

C++ port of massive-octo-nemesis, which is a REST interface written in Django.

General design
--------------

- Library/Data structure in standard C++
    - unit tested with googletest  http://code.google.com/p/googletest/
- button interface in Arduino
    - unit tested with arduinounit  http://code.google.com/p/arduinounit/

Set up dev env/compile
======================

Run unit tests
--------------

Run arduino unit tests
----------------------


Library API
===========

Color
-----

RGB color.  
Actually stores three fields as an int and uses bitwise masks to get the three color components.

Color::Color()
int Color::red()
int Color::green()
int Color::blue()

int rgb_color

State
-----

Just a wrapper/alias for int.  
Normally we might use an enum, but this is more general.

StateSet
--------

Mapping of states to colors

Color StateSet::colorForState(State state_index)

Color[] state_colors
bool states_wrapP

Board
-----

States of cells.  
Used both for the current state of a Board and the goal state.

State Board::getStateOfCell(int x, int y)

State[][] cell_states


GameManager
-----------

Keeps current Board and winning Board in memory.

void GameManager::GameManager()
// hardcoded State/Color creation
// hardcoded Rule creation

void GameManager::atWinningBoardP()

void GameManager::setNewBoardStateForClickAt(int x, int y)
// evaluate all rules

Board winningBoard
Board currentBoard
Rule[]  rules

Rule
----





