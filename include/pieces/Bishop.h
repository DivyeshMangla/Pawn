#pragma once
#include "Piece.h"

class Bishop final : public Piece {
public:
    Bishop(Color color, int x, int y);
    std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const override;
    char fenSymbol() const override;
};

