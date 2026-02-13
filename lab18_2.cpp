#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* R1, Rect* R2) {
    double left = max(R1->x, R2->x);
    double right = min(R1->x + R1->w, R2->x + R2->w);
    double overlap_w = right - left;
    double top = min(R1->y, R2->y);
    double bottom = max(R1->y - R1->h, R2->y - R2->h);
    double overlap_h = top - bottom;

    if (overlap_w <= 0 || overlap_h <= 0) return 0;

    return overlap_w * overlap_h;
}
