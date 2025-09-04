#include "../../include/pieces/King.h"
#include "../../include/board/ChessBoard.h"

King::King(
    const Color color,
    const int x,
    const int y)
    : Piece(PieceType::King, color, x, y) {}

std::vector<std::pair<int, int>> King::getLegalMoves(const ChessBoard& board) const {
    // TODO: Implement king move logic
    return {};
}

char King::fenSymbol() const {
    return color == Color::White ? 'K' : 'k';
}

