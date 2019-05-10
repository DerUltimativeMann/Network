#ifndef _GATTER_H
#define _GATTER_H

#include "block.h"

class Gatter : public Block {
    private:
        bool input_0;
        bool input_1;
        bool output;
        bool (*func)(bool, bool);
    public:
        Gatter();
        Gatter(int x, int y, int w, int h, bool input_0, bool input_1, bool (*func)(bool, bool));
        ~Gatter();

        void update();

        bool getOutput() const;

        void setInput0(bool input_0);
        void setInput1(bool input_1);
};

#endif
