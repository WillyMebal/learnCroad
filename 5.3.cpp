#include<stdio.h>
#include<easyx.h>
void drawtext() {}
void centertext()
{
	int rx = 30;
	int ry = 380;
	int rw = 200;
	int rh = 60;
	setfillcolor(RGB(230, 231, 232));
	fillrectangle(rx, ry, rx + rw, ry + rh);

	settextcolor(RED);
	char str[12] = "center text";
	int hSpace = (rw - textwidth(str))/2;
	int vSpace = (rh - texthight(str)) / 2;
	outtextxy(rx + hSpace, ry + vSpace, str);
}
int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
	setbkcolor(RGB(231, 114, 227));
	cleardevice();
	return 0;
}