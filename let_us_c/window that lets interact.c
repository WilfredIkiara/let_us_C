#include <windows.h>
#include "helper.h"
//keepin mind that this code is m=not functionable without the code thats supposed to be in the function initInstance(), this code should be written and stored in the file headet "helper.h"
void OnDestroy(HMND);
/*the code below is the code of a program that  lets the user interact with the windows program*/

//Make sure to define InitInstance and OnDestroy functions appropriately in your helper.h and helper.cpp files.

int __stdcall WinMain (HINSTANCE hInstance,HINSTANCE hprevinstance,LPSTR IpszCmdLine, int nCmdShow ){
  MSG m;
  /*perform aplication installation*/
  InitInstance (hInstance, nCmdShow, "Wilfred koome aplication window");

  /*messaege loop*/
  while(GetMessage (&m,0,0,0))
    DispatchMessage(&m);
  
  /*
  the getmessage function getsthemessage detail of how the user interacts with the window you have ceated

  after getting the message we have to process it thus we call dispatchMsage() this does:
  1 from the msg structure that we pss to display mssage() extracts the handle of the window for which the message is meant for
  2- from the handle it figures out the window clas based on hich window has been created
  3- from the windows class structure it obtains the adress of a function called WndProc() (windowsprocedure)
  4- using thi adress it calls the function WndProc()
  */

  return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message,WPARAM wParam ,LPARAM lParam){
  switch(message){
    case WM_DESTROY:
      OnDestroy(hWnd);
      break;
    default:
      return DefWindowProc(hWnd, message , wParam, lParam);
  }
  return 0;
}

void OnDestroy(HWND hWnd){
  PostQuitMessage(0);
}
/*
The creation and dislay of a window happens in 4 steps
1 - creation of a window class
2 - regetering the window clas with the os
3 - creation of a window based on the registered class 
4 - displaying the window on the screen

registration of a window class, ceation of a window and displaying it involves calling
RegiterClassEx(), CreateWindow(), ShowWindow(), respectively

since the four steps mentione above would be required in almost every prgram in this chapter (page 570) the code is written in a userdefined funtion InitInstance() in the header file "helper.h". this achieves simplicity

*/