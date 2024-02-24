#include <windows.h>
/*the code below opens multiple windows*/
int __stdcall WinMain(HINSTANCE hIstance, HINSTANCE hprevinstace, LPSTR IpszCmdLIne, int nCmdShow){

  HWND h[10];
  int x;

  for(x=0;x<=9;x++){
    h[x] = CreateWindow("BUTTON","PRINT ME", WS_OVERLAPPEDWINDOW, x*20 , x*20 ,300, 300, 0,0,0,0);
    
    ShowWindow(h[x], 1);
    MessageBox(0,"Hello Wilfred", "Waiting", 0);
    return 0;
  }
}