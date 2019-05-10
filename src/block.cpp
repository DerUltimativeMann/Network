#include "block.h"

Block::Block() {
    Block::x = 0;
    Block::y = 0;
    Block::w = DEFAULT_WIDTH;
    Block::h = DEFAULT_HEIGHT;
}

Block::Block(int x, int y, int w, int h) {
    Block::x = x;
    Block::y = y;
    Block::w = w;
    Block::h = h;
}

Block::~Block() {
}

int Block::getX() const {
    return Block::x;
}

int Block::getY() const {
    return Block::y;
}

int Block::getW() const {
    return Block::w;
}

int Block::getH() const {
    return Block::h;
}

void Block::setX(int x) {
    Block::x = x;
}

void Block::setY(int y) {
    Block::y = y;
}

void Block::setW(int w) {
    Block::w = w;
}

void Block::setH(int h) {
    Block::h = h;
}
