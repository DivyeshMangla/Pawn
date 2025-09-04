#pragma once
#include "Piece.h"

class Pawn final : public Piece {
public:
    Pawn(Color color, int x, int y);
    std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const override;
    char fenSymbol() const override;
};

