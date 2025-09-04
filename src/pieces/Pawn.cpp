#include "../../include/pieces/Pawn.h"
#include "../../include/board/ChessBoard.h"

Pawn::Pawn(
    const Color color,
    const int x,
    const int y)
    : Piece(PieceType::Pawn, color, x, y) {}

std::vector<std::pair<int, int>> Pawn::getLegalMoves(const ChessBoard& board) const {
    // TODO: Implement pawn move logic
    return {};
}

char Pawn::fenSymbol() const {
    return color == Color::White ? 'P' : 'p';
}

