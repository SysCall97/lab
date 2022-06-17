/**
Write a program to implement Bresenham’s Circle algorithm.
*/

#include<bits/stdc++.h>
#include <graphics.h>

using namespace std;

void draw(int xc, int yc, int x, int y) {
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc-x, yc-y, WHITE);
    putpixel(xc+y, yc+x, WHITE);
    putpixel(xc-y, yc+x, WHITE);
    putpixel(xc+y, yc-x, WHITE);
    putpixel(xc-y, yc-x, WHITE);
}

int main() {
    int xc, yc, r;
    int gd = DETECT, gm;

    cout<<"Enter center co-ordinate of circle: ";
    cin>>xc>>yc;
    cout<<"Enter radius of circle:  ";
    cin>>r;

    initgraph(&gd, &gm, "");

    xc = xc < r ? (-1) * xc + r : xc;
    yc = yc < r ? (-1) * yc + r : yc;

    int extLine = 0;

    line(xc - r - extLine, yc, xc + r + extLine, yc);
    line(xc, yc - r - extLine, xc, yc + r + extLine);

    int x = 0, y = r;
    int d = 3 - 2 * r;

    draw(xc, yc, x, y);

    while (y >= x) {
        x++;

        if (d > 0) {
            y--;
            d = d + 4 * (x - y) + 10;
        } else {
            d = d + 4 * x + 6;
        }

        draw(xc, yc, x, y);

        delay(20);
    }

    setfillstyle(SOLID_FILL, WHITE);
    floodfill(xc - 1, yc - 1, WHITE);

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(xc + 1, yc - 1, WHITE);

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(xc - 1, yc + 1, WHITE);

    setfillstyle(SOLID_FILL, WHITE);
    floodfill(xc + 1, yc + 1, WHITE);

    getch();

    return 0;
}
