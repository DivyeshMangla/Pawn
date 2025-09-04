#include "../../include/pieces/Piece.h"

Piece::Piece(
    const PieceType type,
    const Color color,
    const int x,
    const int y)
    : type(type), color(color), x(x), y(y), hasMoved(false) {}

PieceType Piece::getType() const {
    return type;
}

Color Piece::getColor() const {
    return color;
}

std::pair<int, int> Piece::getPosition() const {
    return {x, y};
}

bool Piece::getHasMoved() const {
    return hasMoved;
}

void Piece::setPosition(const int newX, const int newY) {
    x = newX;
    y = newY;
}

void Piece::setHasMoved(const bool moved) {
    hasMoved = moved;
}
