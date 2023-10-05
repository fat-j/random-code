#include <tchar.h>
#include <windows.h>
#include <iostream>

int WINAPI _tWinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPTSTR lpszCmdLine, int nCmdShow)
{
    MessageBox(0,_T("Hello"),_T("Title"),0);
    return 0;
}


int main(){
    std::cin.get();
    return 0;
}