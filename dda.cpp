#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, steps;
    float x, y, dx, dy;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    steps = max(abs(dx), abs(dy));

    dx = dx / steps;
    dy = dy / steps;

    x = x1;
    y = y1;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x += dx;
        y += dy;
    }

    getch();
    closegraph();

    return 0;
}
