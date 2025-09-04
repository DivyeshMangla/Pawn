#pragma once
#include <vector>
#include <utility>

enum class PieceType {Pawn, Rock, Knight, Bishop, Queen, King};
enum class Color {White, Black};

class ChessBoard; // Forward declaration

class Piece {
protected:
    PieceType type;
    Color color;
    int x;
    int y;
    bool hasMoved;

public:
    Piece(PieceType type, Color color, int x, int y);
    virtual ~Piece() = default;

    PieceType getType() const;
    Color getColor() const;
    std::pair<int, int> getPosition() const;
    bool getHasMoved() const;

    void setPosition(int newX, int newY);
    void setHasMoved(bool moved);

    virtual std::vector<std::pair<int, int>> getLegalMoves(const ChessBoard& board) const = 0;
    virtual char fenSymbol() const = 0;
};