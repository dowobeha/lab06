#include <iostream>


/**
 * Represents a game board
 */
struct GameBoard {

  
};


/**
 *  Prints the game board to the provided output stream
 *
 * @param out   Output stream
 * @param data Game board data
 */
std::ostream& operator<<(std::ostream& out, const GameBoard & data);


/**
 *  Reads the game board from the input stream,
 *  storing the result in the provided GameBoard.
 *
 * @param in      Input stream from which to read game board data
 * @param data Object where game board data will be stored
 */
std::istream& operator>>(std::istream& in, GameBoard & data);
