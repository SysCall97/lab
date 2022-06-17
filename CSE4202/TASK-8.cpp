/**
Write a program to implement Bezier Curve.
*/

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int gd = DETECT, gm, x0, y0, x1, y1, x2, y2, x3, y3;

    cout<<"Enter first co-ordinate: ";
    cin>>x0>>y0;

    cout<<"Enter second co-ordinate: ";
    cin>>x1>>y1;

    cout<<"Enter third co-ordinate: ";
    cin>>x2>>y2;

    cout<<"Enter fourth co-ordinate: ";
    cin>>x3>>y3;

    initgraph(&gd, &gm, "");


    for(double t = 0.0; t <= 1.0 ; t += 0.0001) {
        double xt = x0*pow((1-t), 3) + x1*pow((1-t), 2) + x2*3*pow(t, 2)*(1-t) + x3*pow(t, 3);
        double yt = y0*pow((1-t), 3) + y1*pow((1-t), 2) + y2*3*pow(t, 2)*(1-t) + y3*pow(t, 3);

        putpixel(xt, yt, WHITE);
    }

    getch();

    return 0;

}
