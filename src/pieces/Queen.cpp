#include "../../include/pieces/Queen.h"
#include "../../include/board/ChessBoard.h"

Queen::Queen(
    const Color color,
    const int x,
    const int y)
    : Piece(PieceType::Queen, color, x, y) {}

std::vector<std::pair<int, int>> Queen::getLegalMoves(const ChessBoard& board) const {
    // TODO: Implement queen move logic
    return {};
}

char Queen::fenSymbol() const {
    return color == Color::White ? 'Q' : 'q';
}

