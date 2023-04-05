#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<time.h>
#include<math.h>

void putpoint(int x, int y, int color)
{
	int i, j;
	for (i = -5; i <= 5; i++)
	{
		for (j = -5; j <= 5; j++)
		{
			putpixel(x + i, y + j, color);
		}
	}
}

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
	srand(time(0));
	initgraph(1500, 700);

	int x = rand() % 1500, y = rand() % 700;//小黄
	int x2 = rand() % 1500, y2 = rand() % 700;//小绿

	int CD_yellow = 0;
	int CD_green = 0;
	int style_green = 0;//如果为1，表示小绿开大


	while (distance(x, y, x2, y2) > 3)
	{
		int color1 = CYAN;  if (CD_yellow == 100)color1 = YELLOW;
		int color2 = GREEN;  if (style_green == 1)color2 = LIGHTGREEN;
		int color2_b = BLUE;  if (style_green == 1)color2_b = LIGHTBLUE;

		putpoint(x, y, color1);
		putpoint(x2, y2, color2);
		Sleep(100);
		putpoint(x, y, RED);
		putpoint(x2, y2, color2_b);

		//处理小黄的坐标
		int i = rand() % 3 - 1;//  -1 到 1
		int j = rand() % 3 - 1;
		x += i * 5;		y += j * 5;
		if (x < 0)x = 1500 - 5;		if (x >= 1500)x = 5;		if (y < 0)y = 700 - 5;		if (y >= 700)y = 5;


		//处理小绿的坐标
		if (CD_green == 100)
		{
			style_green = 1;
		}
		if (CD_green <= 0) { style_green = 0; }
		if (style_green == 0)CD_green++;

		if (style_green == 1)
		{
			//小绿开大
			i = rand() % 3 - 1;//  -1 到 1
			j = rand() % 3 - 1;
			if (rand() % 2 == 0) {
				i = 2; if (x < x2)i = -2; //如果小黄在小绿左侧，小绿turn left
				j = 2; if (y < y2)j = -2;//
			}
			CD_green -= 2;
		}
		else
		{
			i = rand() % 3 - 1;//  -1 到 1
			j = rand() % 3 - 1;
			if (rand() % 3 == 0) {
				i = 1; if (x < x2)i = -1; //如果小黄在小绿左侧，小绿turn left
				j = 1; if (y < y2)j = -1;//
			}
		}

		x2 += i * 5;		y2 += j * 5;
		if (x2 < 0)x2 = 1500 - 5;		if (x2 >= 1500)x2 = 5;		if (y2 < 0)y2 = 700 - 5;		if (y2 >= 700)y2 = 5;

		if (distance(x, y, x2, y2) < 10 && CD_yellow == 100)
		{
			putpoint(x, y, BROWN);
			x = rand() % 1500, y = rand() % 700;  CD_yellow = 0;
		}
		else
		{
			CD_yellow++;   if (CD_yellow > 100)CD_yellow = 100;
		}




	}
	putpoint(x2, y2, WHITE);

	getchar();
}
