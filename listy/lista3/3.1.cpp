#include <iostream>
#include <wchar.h>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    system("CLS");
    int r,g,b;
    const int W=80;
    const int H=30;
    for(int j=0; j<H; j++)
    {
        for(int i=0; i<W; i++)
        {
            r = (i/float(W))*155.0;
            g = (j/float(H))*255.0;
            b = (i/float(W))*55.0;
            cout << "\x1b[48;2;" << r << ";" << g << ";" << b << "m" << " \x1b[0m";
        }
        cout << endl;
    }

    return 0;
}
