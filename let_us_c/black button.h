#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

HINSTANCE hInst; 

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow, char* pTitle) {
    char classname[] = "MyWindowClass";
    HWND hWnd;
    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = (WNDPROC)WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = NULL;
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOWTEXT + 1);  // Black background
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = classname;
    wcex.hIconSm = NULL;

    if (!RegisterClassEx(&wcex))
        return FALSE;

    hInst = hInstance; // Store instance handle in our global variable

    hWnd = CreateWindow(classname, pTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

    if (!hWnd)
        return FALSE;

    // Create a black button with white margins in the middle
    HWND hButton = CreateWindow("BUTTON", "Click Me", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
        100, 100, 200, 50, hWnd, NULL, hInstance, NULL);
    if (!hButton)
        return FALSE;

    // Set font for the button to New Times Roman
    HFONT hFont = CreateFont(20, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Times New Roman");
    if (hFont)
        SendMessage(hButton, WM_SETFONT, (WPARAM)hFont, TRUE);

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    if (!InitInstance(hInstance, nCmdShow, "My Window")) {
        return FALSE;
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}
