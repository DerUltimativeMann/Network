#include "gatter.h"

Gatter::Gatter() : Block() {
    Gatter::input_0 = false;
    Gatter::input_1 = false;
    Gatter::output = false;
    Gatter::func = 0;
}

Gatter::Gatter(int x, int y, int w, int h, bool input_0, bool input_1, bool (*func)(bool, bool)) : Block(x, y, w, h) {
    Gatter::input_0 = input_0;
    Gatter::input_1 = input_1;
    Gatter::func = func;

    update();
}

Gatter::~Gatter() {
    Gatter::func = 0;
}

void Gatter::update() {
    if(Gatter::func) {
        Gatter::output = (*func)(Gatter::input_0, Gatter::input_1);
    }
}

bool Gatter::getOutput() const {
    return Gatter::output;
}

void Gatter::setInput0(bool input_0) {
    Gatter::input_0 = input_0;
}

void Gatter::setInput1(bool input_1) {
    Gatter::input_1 = input_1;
}
