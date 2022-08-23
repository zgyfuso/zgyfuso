#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void HideCursor(bool n);
void DrawRectangle(int x1, int y1, int x2, int y2);
void GotoXY(short x, short y);
void print(short x, short y, char c, bool b);

int main() {

	int x1 = 10, x2 = x1 + 26;
	int y1 = 1, y2 = y1 + 20;
	int i;
	char c;

	// ���ô��ڴ�С
	system("mode con cols=80 lines=22");

	// ���ع��
	HideCursor(0);

	// ���Ʊ�Ե
	DrawRectangle(x1, y1, x2, y2);

	// ����
	GotoXY(x1 + 2, y2 - 1);
	printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

	do {
		c = rand() % 26 + 'A';

		for (i = y1; i < y2 - 1; ++i) {

			// ���Ʋ�ɫ��ĸ
			print(x1 + c - 'A' + 2, i, c, 1);

			Sleep(100);

			// �Ƴ���ĸ ����������
			print(x1 + c - 'A' + 2, i, c, 0);
		}

		// �ȱ����
		GotoXY(x1 + c - 'A' + 2, i);
		printf("=");

		Sleep(200);

		// ��ԭ����
		GotoXY(x1 + c - 'A' + 2, i);
		printf("%c", c);

	} while (_kbhit() == 0);

	return 0;
}

void HideCursor(bool n) {
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = n;
	cursor.dwSize = sizeof(cursor);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(handle, &cursor);
}

void DrawRectangle(int x1, int y1, int x2, int y2) {

	GotoXY(x1, 0);
	printf("������������������������������");

	for (int y = y1; y < y2; ++y) {
		GotoXY(x1, y);
		printf("��");
		GotoXY(x2 + 2, y);
		printf("��");
	}

	GotoXY(x1, y2);
	printf("������������������������������");
}

void GotoXY(short x, short y) {
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);z
}

void print(short x, short y, char c, bool b) {
	static int count = 0;

	int backgrountcolor = (c - 65) % 10 + 40;
	int fontcolor = count % 10 + 30;

	char buf[10];
	buf[0] = '\033';
	buf[1] = '[';
	buf[2] = backgrountcolor / 10 + 48;
	buf[3] = backgrountcolor % 10 + 48;
	buf[4] = ';';
	buf[5] = fontcolor / 10 + 48;
	buf[6] = fontcolor % 10 + 48;
	buf[7] = 'm';
	buf[8] = b ? c : ' ';
	buf[9] = '\0';

	GotoXY(x, y);
	printf("%s\033[0m", buf);
	++count;
}