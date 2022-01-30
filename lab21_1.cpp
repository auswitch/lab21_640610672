#include<iostream>
using namespace std;

struct Rect
{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2)
{
	double w = 0, h = 0;
	if(R1.w + R1.x > R2.x)
	{
		if(R1.x + R1.w < R2.x + R2.w)
			w = R1.w - abs(R2.x - R1.x);
		else
			w = R2.w;
		if(R1.y + R1.h < R2.y + R2.h)
			h = R2.h - abs(R2.y - R1.y);
		else
			h = R2.h;
	}
	return w*h;
}
