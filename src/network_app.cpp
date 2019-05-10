#include "network_app.h"
#include <stdio.h>

bool und(bool b0, bool b1) {
    return b0 && b1;
}

LRESULT CALLBACK network_proc_main(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    static Gatter *gatter;
    static bool state;

    switch(msg) {
        case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hwnd, &ps);
                HBRUSH brush;

                if(gatter->getOutput()) {
                    brush = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(0,255,0)));
                }
                else {
                    brush = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(255,0,0)));
                }

                Rectangle(hdc, gatter->getX(), gatter->getY(), gatter->getW(), gatter->getH());

                DeleteObject(brush);
                EndPaint(hwnd, &ps);
            }
            return 0;

        case WM_KEYDOWN:
            if(wp == VK_SPACE) {
                if(gatter) {
                    gatter->setInput0(!state);
                    state = !state;
                    gatter->update();
                }
                InvalidateRect(hwnd, NULL, TRUE);
            }
            return 0;

        case WM_CREATE:
            state = false;
            gatter = new Gatter(50, 50, 100, 100, false, true, und);
            return 0;

        case WM_DESTROY:
            delete gatter;
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(hwnd, msg, wp, lp);
}
