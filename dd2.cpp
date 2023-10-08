#include<stdio.h>

#include<easyx.h>

#include <graphics.h>



ExMessage msg = { 0 };



bool button(int butx, int buty, int butw, int buth, const char* test) {//butx y为按钮位置



	//绘制按钮

	setfillcolor(BLACK);//阴影+

	solidroundrect(butx, buty, butx + butw + 3, buty + buth + 5, 20, 40);//+

	setlinecolor(BLACK);

	setlinestyle(PS_SOLID, 3);

	setfillcolor(RGB(200, 111, 103));

	fillroundrect(butx, buty, butx + butw, buty + buth, 20, 40);



	//绘制文本

	settextcolor(BLACK);

	int hspace = (butw - textwidth(test)) / 2;

	int wspace = (buth - textheight(test)) / 2;

	outtextxy(butx + hspace, buty + wspace, test);



	//鼠标在这个区域?

	if (msg.x > butx && msg.x < butx + butw && msg.y > buty && msg.y < buty + buth) {

		setfillcolor(RED);

		fillroundrect(butx, buty, butx + butw, buty + buth, 20, 40);

	}



	//鼠标在这个区域并且单机了左键?

	if (msg.message == WM_LBUTTONDOWN && msg.x > butx && msg.x < butx + butw && msg.y > buty && msg.y < buty + buth) {

		return true;

	}

	return false;

}

int main() {



	//建立窗口

	initgraph(640, 480, EX_SHOWCONSOLE);

	setbkcolor(RGB(242, 222, 189));

	cleardevice();

	setbkmode(TRANSPARENT);//设置文字背景透明



	//

	while (true) {

		if (peekmessage(&msg, EX_MOUSE)) {//获取鼠标信息+

		}

		BeginBatchDraw();//

		if (button(180, 300, 100, 50, "Play")) {//x, y, wide, heigh, text

			printf("Game Start\n");

		}

		if (button(380, 300, 100, 50, "Quit")) {//x, y, wide, heigh, text

			printf("Closing...\n");

		}

		EndBatchDraw();

		msg.message = 0;

	}



	//保持显示

	getchar();

	closegraph();
