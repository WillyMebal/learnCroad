#include<stdio.h>
#include<easyx.h>
int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE | EX_DBLCLKS);
	setbkcolor(RGB(231, 114, 227));
	cleardevice();

	ExMessage msg = { 0 };
	while (true)
	if (peekmessage(&msg, EX_MOUSE))
	{
		if (msg.message == WM_LBUTTONDOWN)
		{
			printf("����������\n");
		}
	}
	return 0;
}