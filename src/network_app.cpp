#include "network_app.h"

LRESULT CALLBACK network_proc_main(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch(msg) {
        case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hwnd, &ps);

                Block block(20, 20, 200, 150);

                Rectangle(hdc, block.getX(), block.getY(), block.getW(), block.getH());

                EndPaint(hwnd, &ps);
            }
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(hwnd, msg, wp, lp);
}
