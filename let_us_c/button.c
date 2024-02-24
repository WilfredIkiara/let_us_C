#include <windows.h>

int __stdcall WinMain (HINSTANCE hinstance ,HINSTANCE hPrevinstance, LPSTR lpszCmdLine, int nCmdShow){
  HWND h;
  h = CreateWindow("BUTTON","Hit me",WS_OVERLAPPEDWINDOW,1000,1000,1500,1500,0,0,0,0 );
  ShowWindow(h,nCmdShow);
  MessageBox(0,"Hi!", "Waiting",MB_OK);
  return 0;
}
/*
To explain the code above..
in winmain() -- the values that are to be entered begin with the class type of the window,
the text that is to appear in the button,
the window style eg. WS_OVERLAPPEDWINDOW
the next four give the initial position of the x and y followed by the hheight and the width of the window, the nxt three are parameters specify the handles of the parent window


the next step after creating the window is to show the window
the create window does not display the window created, it just creates a window and saves it in memory to show the window we have to show window

the create window returns a handle of the created window . our program uses that handle to refer to the window while calling show window, 
the show window ()....the next parameter determines how the window will be displayed ........SH_SHOWNORMAL, SH_SHOWMINIMIZED , SH_SHOWMAXIMIZED in ur cde we used nCmdShow which contains SH_SHOWNORMAL by default


the next line of code is WS_OVERLAPPEDWINDOW is a collection of WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_THICKFRAME|WSS_MINIMIZEBOX
they control the look annd feel of the window defined in <windows.h> header file
the messagebox() acts the same as getch() in sequential programing

*/