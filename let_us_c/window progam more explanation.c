#include <windows.h>
/*
for every message picked up from the message queue the contrill is transfered to the WinMain()function.
*/
LRESULT CALLBACK WndProc(HWND hWnd, UINT message,WPARAM wParam ,LPARAM lParam){

}
/*
the first parameter is the handle to the window for which the message has been recieved. the second parameter is the message id, whereas , the thisd and forth parameter contain additional info about the message
*/

/*
LRESULT is a typedef of a long int it represents the return value of the function.....ni kama int

CALLBACK is a typedef of __stdcall. what it does is it indicates that WndProc function has been registered in windows(through WNDCLASSEX structure i InitInstance()) with the intention of windows calling the funtion back in dispatchMessage() function.
*/
/*
in the WndProc() function we have 
checked the message id using thw switch 
statement. if the id is WM_DESTROY then 
we call the OnDestroy function that 
calls another function PostQuitMessage
(), this function posts a WM_QUIT 
message into the message queue. This 
message is posted on the message id when 
the user clicks on the close window
*/

/*
when the user has not pressed the cslose window button the switch statement default section that calls the funtion DefWindowProc() API function. This function processes the messages that we decide not to tackle. eg on double clicking the DefWindowsProc() maximises the window

so when there is no default processing of a message the function DefWindowsProv() is called.

for better clarification refer to page (574)
*/
