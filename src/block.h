#ifndef _BLOCK_H
#define _BLOCK_H

class Block {
    private:
        int x;
        int y;
        int w;
        int h;

    public:
        Block();
        Block(int, int, int, int);
        ~Block();

        int getX() const;
        int getY() const;
        int getW() const;
        int getH() const;

        void setX(int);
        void setY(int);
        void setW(int);
        void setH(int);
};

#endif
