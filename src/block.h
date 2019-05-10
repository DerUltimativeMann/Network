#ifndef _BLOCK_H
#define _BLOCK_H

#define DEFAULT_WIDTH   20
#define DEFAULT_HEIGHT  20

class Block {
    private:
        int x;
        int y;
        int w;
        int h;

    public:
        Block();
        Block(int x, int y, int w, int h);
        ~Block();

        int getX() const;
        int getY() const;
        int getW() const;
        int getH() const;

        void setX(int x);
        void setY(int y);
        void setW(int w);
        void setH(int h);
};

#endif
