#pragma once
#include "Piece.h"

class Queen final : public Piece {
public:
    Queen(Color color, int x, int y);
    std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const override;
    char fenSymbol() const override;
};

