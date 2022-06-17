/**
Write a program to draw a polygon and using built in function fill the polygon.
*/

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int gd = DETECT, gm, n;

    cout<<"Enter number of co-ordinates of polygon: ";
    cin>>n;

    int coordinates[2*n+2];

    for(int i=0, c=1; i<2*n; i+=2, c++) {
        cout<<"Enter co-ordinate "<<c<<" of polygon: ";
        cin>>coordinates[i];
        cin>>coordinates[i+1];
    }

    coordinates[2*n] = coordinates[0];
    coordinates[2*n+1] = coordinates[1];

    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    fillpoly(n+1, coordinates);

    getch();

    return 0;
}
