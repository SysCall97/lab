/**
Write a program for creating different types of texts and fonts
*/

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    for(int i=1; i<=10; i++) {
        setcolor(i);
        settextstyle(i, 0, i);
        outtextxy(100, 40*i, "Rakib");
    }

    getch();

    return 0;

}
