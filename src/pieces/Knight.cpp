#include "../../include/pieces/Knight.h"
#include "../../include/board/ChessBoard.h"

Knight::Knight(
    const Color color,
    const int x,
    const int y)
    : Piece(PieceType::Knight, color, x, y) {}

std::vector<std::pair<int, int>> Knight::getLegalMoves(const ChessBoard& board) const {
    // TODO: Implement knight move logic
    return {};
}

char Knight::fenSymbol() const {
    return color == Color::White ? 'N' : 'n';
}

