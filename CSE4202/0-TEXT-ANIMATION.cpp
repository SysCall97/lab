/**
* ABDUR RAKIB
* ID : CE17038
*/

#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;

void movingObject (int from, int to, int delay_ms, int increment) {
    int gapX = 0;

    for (int i = from; increment ? i <= to : i >= to; increment ? i++ : i--) {
        // R
        gapX = 0;
        setfillstyle(SOLID_FILL, RED);
        line(i + 50, 50, i + 50, 150);
        ellipse(i + 50, 75, -90, 90, 50, 25);
        line(i + 50, 100, i + 100, 150);
        floodfill(i + 51, 51, WHITE);

        // A
        gapX = 10;
        line(gapX + i + 150, 50, gapX + i + 100, 150);
        line(gapX + i + 150, 50, gapX + i + 200, 150);
        line(gapX + i + 125, 100, gapX + i + 175, 100);
        floodfill(gapX + i + 150, 52, WHITE);

        // K
        gapX = 20;
        line(gapX + i + 200, 50, gapX + i + 200, 150);
        line(gapX + i + 250, 50, gapX + i + 200, 100);
        line(gapX + i + 200, 100, gapX + i + 250, 150);

        // I
        gapX = 30;
        line(gapX + i + 250, 50, gapX + i + 270, 50);
        line(gapX + i + 260, 50, gapX + i + 260, 150);
        line(gapX + i + 250, 150, gapX + i + 270, 150);

        // B
        gapX = 40;
        line(gapX + i + 270, 50, gapX + i + 270, 150);
        ellipse(gapX + i + 270, 75, -90, 90, 50, 25);
        ellipse(gapX + i + 270, 125, -90, 90, 50, 25);
        floodfill(gapX + i + 271, 51, WHITE);
        floodfill(gapX + i + 271, 101, WHITE);

        delay(delay_ms);

        cleardevice();
    }
}

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    while(true) {
        movingObject(0, 250, 10, true);
        movingObject(250, 0, 10, false);
    }

    getch();

    return 0;

}
