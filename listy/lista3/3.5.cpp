#include <iostream>
#include <wchar.h>
#include <windows.h>

using namespace std;

int main()
{
    // Set output mode to handle virtual terminal sequences
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE)
        return GetLastError();
    DWORD dwMode = 0;
    if (!GetConsoleMode(hOut, &dwMode))
        return GetLastError();
    #define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    if (!SetConsoleMode(hOut, dwMode))
        return GetLastError();

    // od tego momentu 24 bity dzia³aj¹

    int r,g,b;
    const int W=80;
    const int H=50;
    for(int j=0; j<H; j++)
    {
        for(int i=0; i<W; i++)
        {
            r = (i/float(W))*55.0;
            g = (j/float(H))*255.0;
            b = (i/float(W))*155.0;
            cout << "\x1b[48;2;" << r << ";" << g << ";" << b << "m" << " \x1b[0m";
        }
        cout << endl;
    }

    return 0;
}
