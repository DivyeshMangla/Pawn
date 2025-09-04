#pragma once
#include "Piece.h"

class Rook final : public Piece {
public:
    Rook(Color color, int x, int y);
    std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const override;
    char fenSymbol() const override;
};

