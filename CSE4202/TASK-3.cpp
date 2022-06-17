/**
Write a program to implement Bresenham’s line drawing algorithm.
*/

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int gd = DETECT, gm, x1, y1, x2, y2;

    cout<<"Enter first co-ordinate: ";
    cin>>x1>>y1;

    cout<<"Enter second co-ordinate: ";
    cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    int dx, dy, p, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    p = 2*dy - dx;

    int it = dx > dy ? dx : dy;

    while(it--) {
        if(p >= 0) {
            putpixel(x, y, WHITE);
            y = y + 1;
            p = p + 2*dy - 2*dx;
        } else {
            putpixel(x, y, WHITE);
            p = p + 2*dy;
        }
        x = x + 1;
    }

    getch();

    return 0;
}
