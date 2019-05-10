#include "network_app.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR szCmdLine, int iCmdShow) {

    HWND window;
    MSG msg;
    WNDCLASS wndc;

    wndc.cbClsExtra = 0;
    wndc.cbWndExtra = 0;
    wndc.hbrBackground = (HBRUSH)GetStockObject(LTGRAY_BRUSH);
    wndc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndc.hInstance = hInst;
    wndc.lpfnWndProc = network_proc_main;
    wndc.lpszClassName = SZ_APPLICATION_NAME;
    wndc.lpszMenuName = NULL;
    wndc.style = CS_HREDRAW | CS_VREDRAW;

    if(!RegisterClass(&wndc)) {
        return 0;
    }

    window = CreateWindow(SZ_APPLICATION_NAME, "Network v0.0", WS_OVERLAPPEDWINDOW, 50, 50, 640, 480, NULL, NULL, hInst, NULL);
    UpdateWindow(window);
    ShowWindow(window, iCmdShow);

    while(GetMessage(&msg, NULL, 0, 0) != 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
