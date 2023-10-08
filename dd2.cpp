#include<stdio.h>

#include<easyx.h>

#include <graphics.h>



ExMessage msg = { 0 };



bool button(int butx, int buty, int butw, int buth, const char* test) {//butx yΪ��ťλ��



	//���ư�ť

	setfillcolor(BLACK);//��Ӱ+

	solidroundrect(butx, buty, butx + butw + 3, buty + buth + 5, 20, 40);//+

	setlinecolor(BLACK);

	setlinestyle(PS_SOLID, 3);

	setfillcolor(RGB(200, 111, 103));

	fillroundrect(butx, buty, butx + butw, buty + buth, 20, 40);



	//�����ı�

	settextcolor(BLACK);

	int hspace = (butw - textwidth(test)) / 2;

	int wspace = (buth - textheight(test)) / 2;

	outtextxy(butx + hspace, buty + wspace, test);



	//������������?

	if (msg.x > butx && msg.x < butx + butw && msg.y > buty && msg.y < buty + buth) {

		setfillcolor(RED);

		fillroundrect(butx, buty, butx + butw, buty + buth, 20, 40);

	}



	//�������������ҵ��������?

	if (msg.message == WM_LBUTTONDOWN && msg.x > butx && msg.x < butx + butw && msg.y > buty && msg.y < buty + buth) {

		return true;

	}

	return false;

}

int main() {



	//��������

	initgraph(640, 480, EX_SHOWCONSOLE);

	setbkcolor(RGB(242, 222, 189));

	cleardevice();

	setbkmode(TRANSPARENT);//�������ֱ���͸��



	//

	while (true) {

		if (peekmessage(&msg, EX_MOUSE)) {//��ȡ�����Ϣ+

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



	//������ʾ

	getchar();

	closegraph();
