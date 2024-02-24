#include <windows.h>
/*this is my helper h file this file code follows the four steps of creating a window that the user can interact with*/
/* 
The file and code is included and used in other files
*/
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
HINSTANCE hInst; // current instance
/*
FUNCTION InitInstance (HANDLE , int 
PURPOSE Savs instance handle and create main window 
COMMENTS in this function, we save the instance handle in a global variable and create and display the main program window
)
*/
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow, char *pTitle){
  char classname[]= "MyWindowClass";
  HWND hWnd;
  WNDCLASSEX wcex;
  wcex.cbSize        = sizeof(WNDCLASSEX);
  wcex.style         = CS_HREDRAW|CS_VREDRAW;
  wcex.lpfnWndProc   = (WNDPROC)WndProc;
  wcex.cbClsExtra    = 0;
  wcex.cbWndExtra    = 0;
  wcex.hInstance     = hInstance;
  wcex.hIcon         = NULL;
  wcex.hCursor       = LoadCursor(NULL, IDC_ARROW);
  wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
  wcex.lpszMenuName  = NULL;
  wcex.lpszClassName = classname;
  wcex.hIconSm       = NULL;

  if(!RegisterClassEx(&wcex))
    return FALSE;
  
  hInst = hInstance;//store insance handle in our global variable

  hWnd = CreateWindow(classname, pTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,0,CW_USEDEFAULT , 0,NULL, NULL , hInstance, NULL);

  if(!hWnd)
    return FALSE;
  
  ShowWindow(hWnd, nCmdShow);
  UpdateWindow(hWnd);

  return TRUE;
}
// this is the explanation of the code line by line

/*
1 - #include <windows.h>: This includes the Windows API header file, which contains declarations for Windows functions, data types, and macros.

2 - LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);: This declares a callback function named WndProc with the return type LRESULT (a Windows API type for a long integer) and four parameters of types HWND, UINT, WPARAM, and LPARAM. This function will handle messages sent to the window.

3 - HINSTANCE hInst;: This declares a global variable hInst of type HINSTANCE, which will store the instance handle of the current application.

4 - BOOL InitInstance(HINSTANCE hInstance, int nCmdShow, char *pTitle) {: This defines a function InitInstance with the return type BOOL (a Windows API type for a boolean value) and three parameters: hInstance (instance handle of the application), nCmdShow (an integer indicating how the window is to be shown), and pTitle (a pointer to a string containing the window title).

5 - char classname[]= "MyWindowClass";: This declares a character array classname and initializes it with the string "MyWindowClass". This will be the name of the window class.

6 - HWND hWnd;: This declares a handle hWnd of type HWND, which will store the handle of the main window.

7 - WNDCLASSEX wcex;: This declares a structure wcex of type WNDCLASSEX, which is used to define the characteristics of the window class.

The following lines initialize the members of the wcex structure:

cbSize: Size of the WNDCLASSEX structure.
style: Class styles for the window class (CS_HREDRAW and CS_VREDRAW indicate that the window should be redrawn if its size changes horizontally or vertically).
lpfnWndProc: Pointer to the window procedure (WndProc) for the window class.
cbClsExtra and cbWndExtra: Extra bytes to allocate for class and window instances (not used in this example).
hInstance: Instance handle of the application.
hIcon, hCursor, hbrBackground, lpszMenuName, lpszClassName, hIconSm: Icon, cursor, background brush, menu name, class name, and small icon for the window class (not used in this example).
RegisterClassEx(&wcex): This registers the window class with the Windows operating system.

8 - hInst = hInstance;: This stores the instance handle in the global variable hInst for later use.

9 -CreateWindow(classname, pTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,0,CW_USEDEFAULT , 0,NULL, NULL , hInstance, NULL): This creates the main window using the CreateWindow function. It specifies the class name (classname), window title (pTitle), window style (WS_OVERLAPPEDWINDOW), initial position (CW_USEDEFAULT), and size (CW_USEDEFAULT). The function returns a handle to the created window (hWnd).

10 -ShowWindow(hWnd, nCmdShow): This shows the window (hWnd) using the specified show command (nCmdShow).

11- UpdateWindow(hWnd): This updates the client area of the window (hWnd) to ensure it is displayed correctly.

return TRUE;: This indicates that the initialization was successful and the function returns TRUE. If any step fails, the function would return FALSE.
*/