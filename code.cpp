#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 100,FALSE };//隐藏光标
	SetConsoleCursorInfo(handle, &cursor);
	int position = 1;
	int state = 0;
	
	COORD coord;//光标位置

	printf("----------------------------------\n\n\n");
	printf("            Colors\n\n");
	printf("      ->");
	SetConsoleTextAttribute(handle, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE| BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	printf("1. White & Green\n");
	SetConsoleTextAttribute(handle, 0);
	printf("        ");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY| FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_RED);
	printf("2. Red & Grey\n");
	SetConsoleTextAttribute(handle, 0);
	printf("        ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
		| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("3. White & Black\n");
	SetConsoleTextAttribute(handle, 0);
	printf("        ");
	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
	printf("4. White & Blue\n");
	SetConsoleTextAttribute(handle, 0);
	printf("\n\n");
	printf("       ");
	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
	printf("This is a test text.");

	//交互的部分
	while (TRUE)
	{
		
		if (::GetAsyncKeyState(VK_UP) & 0x8000 && position > 1 && state == 0)
		{
			position--;
			state = 1;
		}
		if (::GetAsyncKeyState(VK_DOWN) & 0x8000 && position < 4 && state == 0)
		{
			position++;
			state = 1;
		}
		if (!(::GetAsyncKeyState(VK_UP) & 0x8000 && position) && !(::GetAsyncKeyState(VK_DOWN) & 0x8000))
		{
			state = 0;
		}
		if (position == 1&&state==0) {
			coord.X = 6;
			coord.Y = 4;
			for (int i = 0; i < 4; i++)
			{
				coord.Y += 1;
				SetConsoleCursorPosition(handle, coord);
				SetConsoleTextAttribute(handle, 0);
				printf("  ");
			}
			coord.X = 6;
			coord.Y = 5;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
				| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("->");

			coord.X = 7;
			coord.Y = 11;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
			printf("This is a test text.");
			

		}
		if (position == 2&&state==0) {
			coord.X = 6;
			coord.Y = 4;
			for (int i = 0; i < 4; i++)
			{
				coord.Y += 1;
				SetConsoleCursorPosition(handle, coord);
				SetConsoleTextAttribute(handle, 0);
				printf("  ");
			}
			coord.X = 6;
			coord.Y = 6;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
				| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("->");
			

			coord.X = 7;
			coord.Y = 11;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_RED);
			printf("This is a test text.");
		}
		else if (position == 3&&state ==0) {
			coord.X = 6;
			coord.Y = 4;
			for (int i = 0; i < 4; i++)
			{
				coord.Y += 1;
				SetConsoleCursorPosition(handle, coord);
				SetConsoleTextAttribute(handle, 0);
				printf("  ");
			}
			coord.X = 6;
			coord.Y = 7;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
				| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("->");

			coord.X = 7;
			coord.Y = 11;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
				| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("This is a test text.");

		}
		else if (position == 4&&state==0) {
			coord.X = 6;
			coord.Y = 4;
			for (int i = 0; i < 4; i++)
			{
				coord.Y += 1;
				SetConsoleCursorPosition(handle, coord);
				SetConsoleTextAttribute(handle, 0);
				printf("  ");
			}
			coord.X = 6;
			coord.Y = 8;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
				| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("->");

			coord.X = 7;
			coord.Y = 11;
			SetConsoleCursorPosition(handle, coord);
			SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
			printf("This is a test text.");
		};
		
						

	}

}
