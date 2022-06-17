/**
Write a program to implement DDA line drawing algorithm.
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

    float dx, dy, m, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    int it = abs(dx) >= abs(dy) ? abs(dx) : abs(dy);

    dx /= (float) it;
    dy /= (float) it;

    x = x1;
    y = y1;

    while(it--) {
        putpixel(round(x), round(y), WHITE);

        x += dx;
        y += dy;
    }


    getch();

    return 0;
}
