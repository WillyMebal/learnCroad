#include <graphics.h>
#include <conio.h>

int main()
{
	// ��ʼ����ͼ����
	initgraph(640, 480);

	// �����ַ������������������û�����
	wchar_t s[10];
	InputBox(s, 10, L"������뾶");

	// ���û�����ת��Ϊ����
	int r = _wtoi(s);

	// ��Բ
	circle(320, 240, r);

	// ��������˳�
	_getch();
	closegraph();

	return 0;
}