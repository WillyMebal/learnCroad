#include<stdio.h>
#include<easyx.h>
void drawshape()
{

}
int main()
{
	initgraph(640, 480,EX_SHOWCONSOLE);
	setbkcolor(RED);
	cleardevice();


	drawshape();

	getchar();
	return 0;
}