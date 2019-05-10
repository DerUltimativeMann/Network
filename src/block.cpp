#include "block.h"

Block::Block() {
    Block::x = 0;
    Block::y = 0;
    Block::w = 0;
    Block::h = 0;
}

Block::Block(int x, int y, int w, int h) {
    Block::x = x;
    Block::y = y;
    Block::w = w;
    Block::h = h;
}

Block::~Block() {
}

int getX() const {
    return Block::x;
}

int getY() const {
    return Block::y;
}

int getW() const {
    return Block::w;
}

int getH() const {
    return Block::h;
}

void setX(int x) {
    Block::x = x;
}

void setY(int y) {
    Block::y = y;
}

void setW(int w) {
    Block::w = w;
}

void setH(int h) {
    Block::h = h;
}
