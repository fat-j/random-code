#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <tchar.h>



int main(){
/* // https://docs.microsoft.com/en-us/cpp/windows/walkthrough-creating-windows-desktop-applications-cpp?view=msvc-170

    int WINAPI WinMain(
        _In_ HINSTANCE hInstance,
        _In_opt_ HINSTANCE hPrevInstance,
        _In_ LPSTR     lpCmdLine,
        _In_ int       nCmdShow
    );

    LRESULT CALLBACK WndProc(
        _In_ HWND   hWnd,
        _In_ UINT   message,
        _In_ WPARAM wParam,
        _In_ LPARAM lParam
    );
*/
    std::string title;
    std::cout << "Title: ";
    std::cin >> title;

    std::string snap;
    std::cout << "Snap: ";
    std::cin >> snap;

    std::cout << snap << title;

    std::cin.get();
}