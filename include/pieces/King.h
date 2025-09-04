#pragma once
#include "Piece.h"

class King final : public Piece {
public:
    King(Color color, int x, int y);
    std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const override;
    char fenSymbol() const override;
};

