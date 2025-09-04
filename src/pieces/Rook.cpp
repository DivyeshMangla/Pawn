#include "../../include/pieces/Rook.h"
#include "../../include/board/ChessBoard.h"

Rook::Rook(
    const Color color,
    const int x,
    const int y)
    : Piece(PieceType::Rock, color, x, y) {}

std::vector<std::pair<int, int>> Rook::getLegalMoves(const ChessBoard& board) const {
    // TODO: Implement rook move logic
    return {};
}

char Rook::fenSymbol() const {
    return color == Color::White ? 'R' : 'r';
}

