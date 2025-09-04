#include "../../include/pieces/Bishop.h"
#include "../../include/board/ChessBoard.h"

Bishop::Bishop(
    const Color color,
    const int x,
    const int y)
    : Piece(PieceType::Bishop, color, x, y) {}

std::vector<std::pair<int, int>> Bishop::getLegalMoves(const ChessBoard& board) const {
    // TODO: Implement bishop move logic
    return {};
}

char Bishop::fenSymbol() const {
    return color == Color::White ? 'B' : 'b';
}

