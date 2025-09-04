#pragma once
#include "Piece.h"

class Knight final : public Piece {
public:
    Knight(Color color, int x, int y);
    std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const override;
    char fenSymbol() const override;
};

