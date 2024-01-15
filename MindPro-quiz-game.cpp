#include <iostream> 
#include <conio.h> 
#include <string> 
#include <windows.h>
#include <fstream>
#define getch() _getch()
#define KEY_UP 72     
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
using namespace std;

unsigned char a = 219, b = 220, c = 223;


void gotoxy(int x, int y)
{
	COORD coordinates;     // coordinates is declared as COORD
	coordinates.X = x;     // defining x-axis
	coordinates.Y = y;     //defining  y-axis
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

//Opening logo of the program
void logo() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(color, 14);
	gotoxy(60, 8); gotoxy(60, 8); cout << a << a << a << a << a << "      " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(60, 9); cout << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(60, 10); cout << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(60, 11); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a;
	gotoxy(60, 12); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a;
	gotoxy(60, 13); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a;
	gotoxy(60, 14); cout << a << a << a << a << a << " " << a << a << a << a << " " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a;
	gotoxy(60, 15); cout << a << a << a << a << a << " " << a << a << a << a << " " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a;
	gotoxy(60, 16); cout << a << a << a << a << a << "      " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a;
	gotoxy(60, 17); cout << a << a << a << a << a << "      " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(60, 18); cout << a << a << a << a << a << "      " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(60, 19); cout << a << a << a << a << a << "      " << a << a << a << a << a << "  " << a << a << a << a << a << "  " << a << a << a << a << a << "    " << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a << a << a << a << a;

	SetConsoleTextAttribute(color, 4);
	gotoxy(74, 21); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a;
	gotoxy(74, 22); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << a;
	gotoxy(74, 23); cout << a << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << a << "   " << a << a << a;
	gotoxy(74, 24); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << "   " << a << a << a;
	gotoxy(74, 25); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << b << "  " << a << a << a << "   " << a << a << a;
	gotoxy(74, 26); cout << a << a << a << "       " << a << a << a << "  " << a << a << a << "  " << a << a << a << a << a << a << a << a << a;
	gotoxy(74, 27); cout << a << a << a << "       " << a << a << a << "  " << a << a << a << "  " << a << a << a << a << a << a << a << a << a;

	SetConsoleTextAttribute(color, 11);
	gotoxy(47, 12); cout << "     " << a << a;
	gotoxy(47, 13); cout << "    " << a << a << a;
	gotoxy(47, 14); cout << "   " << a << a << a;
	gotoxy(47, 15); cout << "  " << a << a << a << a;
	gotoxy(47, 16); cout << " " << a << a << a << a;
	gotoxy(47, 17); cout << a << a << a << a << a << a << a << a << a << a;
	gotoxy(47, 18); cout << a << a << a << a << a << a << a << a << a;
	gotoxy(47, 19); cout << "    " << a << a << a << a;
	gotoxy(47, 20); cout << "   " << a << a << a << a;
	gotoxy(47, 21); cout << "   " << a << a << a;
	gotoxy(47, 22); cout << "  " << a << a << a;
	gotoxy(47, 23); cout << " " << a << a;

	gotoxy(118, 12); cout << "     " << a << a;
	gotoxy(118, 13); cout << "    " << a << a << a;
	gotoxy(118, 14); cout << "   " << a << a << a;
	gotoxy(118, 15); cout << "  " << a << a << a << a;
	gotoxy(118, 16); cout << " " << a << a << a << a;
	gotoxy(118, 17); cout << a << a << a << a << a << a << a << a << a << a;
	gotoxy(118, 18); cout << a << a << a << a << a << a << a << a << a;
	gotoxy(118, 19); cout << "    " << a << a << a << a;
	gotoxy(118, 20); cout << "   " << a << a << a << a;
	gotoxy(118, 21); cout << "   " << a << a << a;
	gotoxy(118, 22); cout << "  " << a << a << a;
	gotoxy(118, 23); cout << " " << a << a;

	SetConsoleTextAttribute(color, 14);

}

//Logo header design
void  logoa() {
	gotoxy(50, 2); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << c << "   " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << c << c << c << c << c << c << endl;
	gotoxy(50, 3); cout << c << c << c << "  " << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << "  " << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 4); cout << c << c << c << c << c << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << "    " << c << c << endl;
	gotoxy(50, 5); cout << c << c << " " << c << c << " " << c << c << "  " << "   " << c << c << "     " << c << c << "  " << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 6); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << endl;

}

//Create a username border
void createuser() {
	gotoxy(74, 18);     cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b;
	gotoxy(74, 19);     cout << a << "                                 " << a;
	gotoxy(74, 20);     cout << a << "                                 " << a;
	gotoxy(74, 21);     cout << a << "                                 " << a;
	gotoxy(74, 22);     cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;

}

//Border design of the homepage
void homepborder() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	gotoxy(39, 5); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(103, 5); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(39, 6); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 7); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 8); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 9); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 10); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 11); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 12); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 13); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 14); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 15); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 16); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 17); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 18); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 19); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 20); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 21); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 22); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 23); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 24); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 25); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 26); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 27); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 28); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 29); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 30); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 31); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 32); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 33); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 34); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 35); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 36); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 37); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 38); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 39); cout << a << a << "                                                                                  " << a << a;
	gotoxy(39, 40); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;

	gotoxy(59, 39); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(59, 40); cout << a << "      PRESS LEFT [<] AND RIGHT [>] KEY      " << a;
	gotoxy(59, 41); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(61, 2); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(61, 3); cout << a;
	gotoxy(61, 4); cout << a;
	gotoxy(61, 5); cout << a;
	gotoxy(61, 6); cout << a;
	gotoxy(61, 7); cout << a;
	gotoxy(61, 8); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(102, 3); cout << a;
	gotoxy(102, 4); cout << a;
	gotoxy(102, 5); cout << a;
	gotoxy(102, 6); cout << a;
	gotoxy(102, 7); cout << a;
	gotoxy(63, 3); cout << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a;
	gotoxy(63, 4); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << b << b << a << a << a << "  " << a << a;
	gotoxy(63, 5); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a;
	gotoxy(63, 6); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << " " << c << c << " " << a << a << "  " << a << a;
	gotoxy(63, 7); cout << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a;

	SetConsoleTextAttribute(color, 11);
	gotoxy(53, 12);     cout << "    " << b << b << b << b << b << b << b << b;
	gotoxy(53, 13);     cout << "   " << a << a << a << a << a << a << a << a << a << a;
	gotoxy(53, 14);     cout << "  " << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(53, 15);     cout << "  " << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(53, 16);     cout << "   " << a << a << a << a << a << a << a << a << a << a;
	gotoxy(53, 17);     cout << "    " << c << c << c << c << c << c << c << c;
	gotoxy(53, 18);     cout << "  " << a << a << a << b << "    " << b << a << a << a;
	gotoxy(53, 19);     cout << " " << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(53, 20);     cout << "" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(53, 21);     cout << "" << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;
	SetConsoleTextAttribute(color, 14);

	gotoxy(74, 12);     cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(74, 13);     cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b;
	gotoxy(74, 14);     cout << a << "                                 " << a;
	gotoxy(74, 15);     cout << a << "                                 " << a;
	gotoxy(74, 16);     cout << a << "                                 " << a;
	gotoxy(74, 17);     cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;

	createuser();

}

//Options in the homepage

//Settings
void settings() {
	gotoxy(50, 26); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(50, 27); cout << a << a << "                          " << a << a;
	gotoxy(50, 28); cout << a << a << "         SETTINGS         " << a << a;
	gotoxy(50, 29); cout << a << a << "                          " << a << a;
	gotoxy(50, 30); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//Terms and Conditions
void termsandcon() {

	gotoxy(82, 26); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(82, 27); cout << a << a << "                          " << a << a;
	gotoxy(82, 28); cout << a << a << "   TERMS AND CONDITIONS   " << a << a;
	gotoxy(82, 29); cout << a << a << "                          " << a << a;
	gotoxy(82, 30); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//About the Developers
void aboutdev() {

	gotoxy(50, 32); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(50, 33); cout << a << a << "                          " << a << a;
	gotoxy(50, 34); cout << a << a << "   ABOUT THE DEVELOPERS   " << a << a;
	gotoxy(50, 35); cout << a << a << "                          " << a << a;
	gotoxy(50, 36); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//Exit
void exit() {

	gotoxy(82, 32); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(82, 33); cout << a << a << "                          " << a << a;
	gotoxy(82, 34); cout << a << a << "           EXIT           " << a << a;
	gotoxy(82, 35); cout << a << a << "                          " << a << a;
	gotoxy(82, 36); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//Theme Options in the Settings

//Dark Theme
void themed() {
	gotoxy(94, 21); cout << a << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(94, 22); cout << a << "   DARK    " << a;
	gotoxy(94, 23); cout << a << b << b << b << b << b << b << b << b << b << b << b << a;
}

//Light Theme
void themel() {
	gotoxy(77, 21); cout << a << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(77, 22); cout << a << "   LIGHT   " << a;
	gotoxy(77, 23); cout << a << b << b << b << b << b << b << b << b << b << b << b << a;
}

void soundsy() {

	gotoxy(77, 25); cout << a << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(77, 26); cout << a << "    YES    " << a << endl;
	gotoxy(77, 27); cout << a << b << b << b << b << b << b << b << b << b << b << b << a << endl;

}

void soundsn() {
	gotoxy(94, 25); cout << a << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(94, 26); cout << a << "    NO     " << a << endl;
	gotoxy(94, 27); cout << a << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Settings page Design
void settingspage() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl << endl;
	cout << "                                   " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	cout << "                                   " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	cout << "                                   " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << "                                                                                                 " << a << a << endl;
	cout << "                                   " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	logoa();

	gotoxy(44, 8); cout << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << "   " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(44, 9); cout << "  " << a << a << "        " << a << a << "           " << a << a << "        " << a << a << "        " << a << a << "     " << a << a << a << a << "  " << a << a << "  " << a << a << "        " << a << a << endl;
	gotoxy(44, 10); cout << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "        " << a << a << "        " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << "   " << a << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(44, 11); cout << "  " << "      " << a << a << "  " << a << a << "           " << a << a << "        " << a << a << "        " << a << a << "     " << a << a << "  " << a << a << a << a << "  " << a << a << "    " << a << a << "        " << a << a << endl;
	gotoxy(44, 12); cout << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "        " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << endl;

	//Theme Options


	gotoxy(64, 22); cout << "THEME:" << endl;
	themel();
	themed();

	//Sounds

	gotoxy(64, 26); cout << "SOUNDS:" << endl;
	soundsy();
	soundsn();


	//Trivia

	gotoxy(64, 30); cout << "TRIVIA:" << endl;
	gotoxy(77, 29); cout << a << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(77, 30); cout << a << "    YES    " << a << endl;
	gotoxy(77, 31); cout << a << b << b << b << b << b << b << b << b << b << b << b << a << endl;

	gotoxy(94, 29); cout << a << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(94, 30); cout << a << "    NO     " << a << endl;
	gotoxy(94, 31); cout << a << b << b << b << b << b << b << b << b << b << b << b << a << endl;

	//Home Options
	gotoxy(76, 35); cout << a << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << a << endl;
	gotoxy(76, 36); cout << a << a << "                     " << a << a << endl;
	gotoxy(76, 37); cout << a << a << "       << HOME       " << a << a << endl;
	gotoxy(76, 38); cout << a << a << "                     " << a << a << endl;
	gotoxy(76, 39); cout << a << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << a << endl;
}

//About the developers page
void aboutdevpage() {
	gotoxy(50, 3); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(50, 4); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << "       " << a << a << "    " << a << a << "  " << a << a << endl;
	gotoxy(50, 5); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << "       " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(50, 6); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << "       " << a << a << "    " << a << a << "        " << a << a << endl;
	gotoxy(50, 7); cout << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "       " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a;

	gotoxy(29, 11); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 12); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 13); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(29, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 16); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 17); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 18); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 19); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 20); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 21); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 22); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 23); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 24); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 25); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 26); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 27); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 28); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 29); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 30); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 31); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 32); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 33); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 34); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 35); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 36); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 37); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 38); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 39); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 40); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(40, 17); cout << "Mind Pro, an interactive brain-twister gameplay, created by cunning students of 11-01 CPG," << endl;
	gotoxy(40, 18); cout << "Team SYNTAX ERROR takes you to a world of education enjoyment. The group composing 4 elite" << endl;
	gotoxy(43, 19); cout << "programmers were able to come up with a wide variation of learning fields classified" << endl;
	gotoxy(40, 20); cout << "together in different levels: Easy, Average and Difficult round. Each degree encompasses" << endl;
	gotoxy(43, 21); cout << "diverse areas, corresponding scores and educational trivias which the group members" << endl;
	gotoxy(45, 22); cout << "collectively encrypted into the program. Team Syntax incorporate the level with" << endl;
	gotoxy(44, 23); cout << "interactional services that would enable the history of your game. Calling this an" << endl;
	gotoxy(40, 24); cout << "'ultimate end goal' for the development, the group aims to enrich and let the players" << endl;
	gotoxy(75, 25); cout << "gain enormous knowledge. ";
	gotoxy(40, 26); cout << "+-----------------------------------------------------------------------------------------+";
	gotoxy(75, 29); cout << "D E V E L O P E R S :";
	gotoxy(80, 31); cout << "EDGAR PALEN";
	gotoxy(78, 33); cout << "CRISBEL BRONZAL";
	gotoxy(78, 35); cout << "JEREMIAH JIMENO";
	gotoxy(78, 37); cout << "ANGELITO MIGUEL";

}

void termsandconpage() {
	gotoxy(45, 1); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << endl;
	gotoxy(45, 2); cout << "   " << a << a << "   " << "  " << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "  " << a << a << a << a << "  " << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(45, 3); cout << "   " << a << a << "   " << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(45, 4); cout << "   " << a << a << "   " << "  " << a << a << "        " << a << a << "    " << a << a << "  " << a << a << " " << a << a << " " << a << a << "        " << a << a << "    " << a << a << "    " << a << a << "  " << a << a << "  " << a << a << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(45, 5); cout << "   " << a << a << "   " << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << endl;

	cout << endl << endl;
	gotoxy(32, 7); cout << "    " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << "   " << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << "   " << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(32, 8); cout << "    " << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << a << "  " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << "        " << a << a << "        " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << a << a << "  " << a << a << "  " << a << a << endl;
	gotoxy(32, 9); cout << "    " << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "     " << a << a << "        " << a << a << "        " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(32, 10); cout << "    " << a << a << "        " << a << a << "    " << a << a << "  " << a << a << "  " << a << a << a << a << "  " << a << a << "    " << a << a << "     " << a << a << "        " << a << a << "        " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "  " << a << a << a << a << "        " << a << a << endl;
	gotoxy(32, 11); cout << "    " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << endl;

	gotoxy(19, 13); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 14); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(19, 17); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 18); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 19); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 20); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 21); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 22); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 23); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 24); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 25); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 26); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 27); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 28); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 29); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 30); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 31); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 32); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 33); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 34); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 35); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 36); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 37); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 38); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 39); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;


	gotoxy(26, 19); cout << "1. INTRODUCTION";
	gotoxy(26, 20); cout << "1.1 Welcome to Mind Pro.  These Terms of Service set out the terms and conditions by which Team Syntax Error limited,";
	gotoxy(26, 21); cout << "and its affiliates and subsidiaries provide and offer: ";

	gotoxy(26, 22); cout << "(a) our PC games (“Games”); ";
	gotoxy(26, 23); cout << "(b) the underlying Games client software and the Syntax Error PC Platform ";
	gotoxy(26, 24); cout << "Client Software (“Software”); and";
	gotoxy(26, 25); cout << "(c) this program, including the Mind Pro (“Game”); and";
	gotoxy(26, 26); cout << "1.2 The Services also include specific services provided by or through the Syntax Error platform client software,";
	gotoxy(26, 27); cout << "any services made available through our program, and all information, content, programming, application services.";

	gotoxy(26, 29); cout << "2. ACCOUNTS AND SECURITY";
	gotoxy(26, 30); cout << "2.1 Some functions of our Services require registration for an Account by selecting a user identification ('User ID').";
	gotoxy(26, 31); cout << "You may be able to use your Account to gain access to the program or services to which we have enabled access or with";
	gotoxy(26, 32); cout << "which we have tied up or collaborated. Syntax Error Platform has not reviewed, and assumes no responsibility for any";
	gotoxy(26, 33); cout << "third party content, functionality, security, services, privacy policies, or other practices of those product or ";
	gotoxy(26, 34); cout << "services.  If you do so, the terms of service for those products or services, including their respective privacy";
	gotoxy(26, 35); cout << " policies, if different from these Terms of Service and/or our Privacy Policy, may also apply to your use of";
	gotoxy(26, 36); cout << "those products or services.";

}

//For the choose game page after the Homepage
void choosegameb() {
	gotoxy(19, 10); cout << "                                      " << a << a << "                                                   " << a << a << endl;
	gotoxy(19, 11); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "     " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "     " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 12); cout << a << a << "                                    " << a << a << "                                                   " << a << a << "                                    " << a << a << endl;
	gotoxy(19, 13); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 14); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 16); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 17); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(19, 18); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 19); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 20); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 21); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 22); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 23); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 24); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 25); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 26); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 27); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 28); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 29); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 30); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 31); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 32); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 33); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 34); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 35); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 36); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 37); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 38); cout << a << a << "                                                                                                                               " << a << a << endl;
	gotoxy(19, 39); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;



	gotoxy(28, 3); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(28, 4); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "        " << a << a << "          " << a << a << a << "  " << a << a << a << "    " << a << a << "        " << a << a << a << "  " << a << a << a << "  " << a << a << a << b << b << a << a << a << "  " << a << a << endl;
	gotoxy(28, 5); cout << a << a << "        " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "    " << a << a << "   " << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << endl;
	gotoxy(28, 6); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << "      " << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "    " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << " " << c << c << " " << a << a << "  " << a << a << endl;
	gotoxy(28, 7); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "    " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << endl;

}

//Vocabulary Game
void vocabg() {
	gotoxy(24, 20);     cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(24, 21);     cout << a << "                        " << a << endl;
	gotoxy(24, 22);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(24, 23);     cout << a << "         " << a << a << a << a << a << "          " << a << endl;
	gotoxy(24, 24);     cout << a << "        " << a << a << a << a << a << a << "          " << a << endl;
	gotoxy(24, 25);     cout << a << "       " << a << a << a << a << a << a << a << "          " << a << endl;
	gotoxy(24, 26);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(24, 27);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(24, 28);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(24, 29);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(24, 30);     cout << a << "      " << a << a << a << a << a << a << a << a << a << a << a << a << "      " << a << endl;
	gotoxy(24, 31);     cout << a << "      " << c << c << c << c << c << c << c << c << c << c << c << c << "      " << a << endl;
	gotoxy(24, 32);     cout << a << "                        " << a << endl;
	gotoxy(24, 33);     cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(24, 34);     cout << a << "       VOCABULARY       " << a << endl;
	gotoxy(24, 35);     cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Technology game
void techg() {
	gotoxy(55, 20);     cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(55, 21);     cout << a << "                        " << a << endl;
	gotoxy(55, 22);     cout << a << "      " << "    " << a << a << a << a << "          " << a << endl;
	gotoxy(55, 23);     cout << a << "      " << "  " << a << a << a << a << a << a << a << a << "        " << a << endl;
	gotoxy(55, 24);     cout << a << "      " << a << a << a << a << "   " << a << a << a << a << "       " << a << endl;
	gotoxy(55, 25);     cout << a << "      " << "       " << a << a << a << a << "       " << a << endl;
	gotoxy(55, 26);     cout << a << "      " << "       " << a << a << a << a << "       " << a << endl;
	gotoxy(55, 27);     cout << a << "      " << "     " << a << a << a << a << "         " << a << endl;
	gotoxy(55, 28);     cout << a << "      " << "   " << a << a << a << a << "           " << a << endl;
	gotoxy(55, 29);     cout << a << "      " << " " << a << a << a << a << "             " << a << endl;
	gotoxy(55, 30);     cout << a << "      " << a << a << a << a << a << a << a << a << a << a << a << a << "      " << a << endl;
	gotoxy(55, 31);     cout << a << "      " << c << c << c << c << c << c << c << c << c << c << c << c << "      " << a << endl;
	gotoxy(55, 32);     cout << a << "                        " << a << endl;
	gotoxy(55, 33);     cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(55, 34);     cout << a << "       TECHNOLOGY       " << a << endl;
	gotoxy(55, 35);     cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Riddles game
void riddlesg() {
	gotoxy(86, 20);        cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(86, 21);        cout << a << "                        " << a << endl;
	gotoxy(86, 22);        cout << a << "       " << a << a << a << a << a << a << a << a << a << a << "       " << a << endl;
	gotoxy(86, 23);        cout << a << "      " << a << a << a << a << "    " << a << a << a << a << "      " << a << endl;
	gotoxy(86, 24);        cout << a << "              " << a << a << a << a << "      " << a << endl;
	gotoxy(86, 25);        cout << a << "            " << a << a << a << a << a << "       " << a << endl;
	gotoxy(86, 26);        cout << a << "            " << a << a << a << a << a << "       " << a << endl;
	gotoxy(86, 27);        cout << a << "              " << a << a << a << a << "      " << a << endl;
	gotoxy(86, 28);        cout << a << "              " << a << a << a << a << "      " << a << endl;
	gotoxy(86, 29);        cout << a << "      " << a << a << a << a << "    " << a << a << a << a << "      " << a << endl;
	gotoxy(86, 30);        cout << a << "       " << a << a << a << a << a << a << a << a << a << a << "       " << a << endl;
	gotoxy(86, 31);        cout << a << "        " << c << c << c << c << c << c << c << c << "        " << a << endl;
	gotoxy(86, 32);        cout << a << "                        " << a << endl;
	gotoxy(86, 33);        cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(86, 34);        cout << a << "        RIDDLES         " << a << endl;
	gotoxy(86, 35);        cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Quiz Master game
void quizmg() {
	gotoxy(117, 20);        cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(117, 21);        cout << a << "                        " << a << endl;
	gotoxy(117, 22);        cout << a << "           " << a << a << a << a << a << "        " << a << endl;
	gotoxy(117, 23);        cout << a << "          " << a << a << a << a << a << a << "        " << a << endl;
	gotoxy(117, 24);        cout << a << "         " << a << a << " " << a << a << a << a << "        " << a << endl;
	gotoxy(117, 25);        cout << a << "        " << a << a << "  " << a << a << a << a << "        " << a << endl;
	gotoxy(117, 26);        cout << a << "       " << a << a << "   " << a << a << a << a << "        " << a << endl;
	gotoxy(117, 27);        cout << a << "      " << a << a << "    " << a << a << a << a << "        " << a << endl;
	gotoxy(117, 28);        cout << a << "      " << a << a << b << b << b << b << a << a << a << a << b << b << "      " << a << endl;
	gotoxy(117, 29);        cout << a << "      " << a << a << a << a << a << a << a << a << a << a << a << a << "      " << a << endl;
	gotoxy(117, 30);        cout << a << "      ""      " << a << a << a << a << "        " << a << endl;
	gotoxy(117, 31);        cout << a << "      ""      " << c << c << c << c << "        " << a << endl;
	gotoxy(117, 32);        cout << a << "                        " << a << endl;
	gotoxy(117, 33);        cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(117, 34);        cout << a << "      QUIZ MASTER       " << a << endl;
	gotoxy(117, 35);        cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Choose level (easy, average, difficult)
void chooselevel() {

	gotoxy(29, 10); cout << "                            " << a << a << "                                                    " << a << a << endl;
	gotoxy(29, 11); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "     " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "     " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 12); cout << a << a << "                          " << a << a << "                                                    " << a << a << "                          " << a << a << endl;
	gotoxy(29, 13); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 14); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 16); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 17); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 18); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 19); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 20); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 21); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 22); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 23); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 24); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 25); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 26); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 27); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 28); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 29); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 30); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 31); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 32); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 33); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 34); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 35); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 36); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 37); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 38); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 39); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(29, 3); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "      " << a << a << "        " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << endl;
	gotoxy(29, 4); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "        " << a << a << "            " << a << a << "        " << a << a << "        " << a << a << "    " << a << a << "  " << a << a << "        " << a << a << endl;
	gotoxy(29, 5); cout << a << a << "        " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "      " << a << a << "        " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << endl;
	gotoxy(29, 6); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << "      " << a << a << "  " << a << a << "            " << a << a << "        " << a << a << "         " << a << a << "  " << a << a << "   " << a << a << "        " << a << a << endl;
	gotoxy(29, 7); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "      " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << endl;
}

//Easy 
void easy() {
	gotoxy(41, 20);     cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(41, 21);     cout << a << "                        " << a << endl;
	gotoxy(41, 22);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(41, 23);     cout << a << "         " << a << a << a << a << a << "          " << a << endl;
	gotoxy(41, 24);     cout << a << "        " << a << a << a << a << a << a << "          " << a << endl;
	gotoxy(41, 25);     cout << a << "       " << a << a << a << a << a << a << a << "          " << a << endl;
	gotoxy(41, 26);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(41, 27);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(41, 28);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(41, 29);     cout << a << "          " << a << a << a << a << "          " << a << endl;
	gotoxy(41, 30);     cout << a << "      " << a << a << a << a << a << a << a << a << a << a << a << a << "      " << a << endl;
	gotoxy(41, 31);     cout << a << "      " << c << c << c << c << c << c << c << c << c << c << c << c << "      " << a << endl;
	gotoxy(41, 32);     cout << a << "                        " << a << endl;
	gotoxy(41, 33);     cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(41, 34);     cout << a << "          EASY          " << a << endl;
	gotoxy(41, 35);     cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Average
void average() {
	gotoxy(72, 20);     cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(72, 21);     cout << a << "                        " << a << endl;
	gotoxy(72, 22);     cout << a << "      " << "    " << a << a << a << a << "          " << a << endl;
	gotoxy(72, 23);     cout << a << "      " << "  " << a << a << a << a << a << a << a << a << "        " << a << endl;
	gotoxy(72, 24);     cout << a << "      " << a << a << a << a << "   " << a << a << a << a << "       " << a << endl;
	gotoxy(72, 25);     cout << a << "      " << "       " << a << a << a << a << "       " << a << endl;
	gotoxy(72, 26);     cout << a << "      " << "       " << a << a << a << a << "       " << a << endl;
	gotoxy(72, 27);     cout << a << "      " << "     " << a << a << a << a << "         " << a << endl;
	gotoxy(72, 28);     cout << a << "      " << "   " << a << a << a << a << "           " << a << endl;
	gotoxy(72, 29);     cout << a << "      " << " " << a << a << a << a << "             " << a << endl;
	gotoxy(72, 30);     cout << a << "      " << a << a << a << a << a << a << a << a << a << a << a << a << "      " << a << endl;
	gotoxy(72, 31);     cout << a << "      " << c << c << c << c << c << c << c << c << c << c << c << c << "      " << a << endl;
	gotoxy(72, 32);     cout << a << "                        " << a << endl;
	gotoxy(72, 33);     cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(72, 34);     cout << a << "        AVERAGE         " << a << endl;
	gotoxy(72, 35);     cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Difficult
void difficult() {
	gotoxy(103, 20);        cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(103, 21);        cout << a << "                        " << a << endl;
	gotoxy(103, 22);        cout << a << "       " << a << a << a << a << a << a << a << a << a << a << "       " << a << endl;
	gotoxy(103, 23);        cout << a << "      " << a << a << a << a << "    " << a << a << a << a << "      " << a << endl;
	gotoxy(103, 24);        cout << a << "              " << a << a << a << a << "      " << a << endl;
	gotoxy(103, 25);        cout << a << "            " << a << a << a << a << a << "       " << a << endl;
	gotoxy(103, 26);        cout << a << "            " << a << a << a << a << a << "       " << a << endl;
	gotoxy(103, 27);        cout << a << "              " << a << a << a << a << "      " << a << endl;
	gotoxy(103, 28);        cout << a << "              " << a << a << a << a << "      " << a << endl;
	gotoxy(103, 29);        cout << a << "      " << a << a << a << a << "    " << a << a << a << a << "      " << a << endl;
	gotoxy(103, 30);        cout << a << "       " << a << a << a << a << a << a << a << a << a << a << "       " << a << endl;
	gotoxy(103, 31);        cout << a << "        " << c << c << c << c << c << c << c << c << "        " << a << endl;
	gotoxy(103, 32);        cout << a << "                        " << a << endl;
	gotoxy(103, 33);        cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << endl;
	gotoxy(103, 34);        cout << a << "       DIFFICULT        " << a << endl;
	gotoxy(103, 35);        cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << endl;
}

//Questions Border
void quesborder() {
	gotoxy(29, 8); cout << "                            " << a << a << "                                                    " << a << a << endl;
	gotoxy(29, 9); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "     " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << "     " << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 10); cout << a << a << "                          " << a << a << "                                                    " << a << a << "                          " << a << a << endl;
	gotoxy(29, 11); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 12); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 13); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 14); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(29, 16); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 17); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 18); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 19); cout << a << a << "     --------------------------------------------------------------------------------------------------     " << a << a << endl;
	gotoxy(29, 20); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 21); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 22); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 23); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 24); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 25); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 26); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 27); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 28); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 29); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 30); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 31); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 32); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 33); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 34); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 35); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 36); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 37); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 38); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 39); cout << a << a << "                                                                                                            " << a << a << endl;
	gotoxy(29, 40); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(50, 2); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << c << "   " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << c << c << c << c << c << c << endl;
	gotoxy(50, 3); cout << c << c << c << "  " << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << "  " << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 4); cout << c << c << c << c << c << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << "    " << c << c << endl;
	gotoxy(50, 5); cout << c << c << " " << c << c << " " << c << c << "  " << "   " << c << c << "     " << c << c << "  " << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 6); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << endl;


	gotoxy(70, 34); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(70, 35); cout << a << "                      " << a << "     " << a << endl;
	gotoxy(70, 36); cout << a << "  ENTER YOUR ANSWER:  " << a << "     " << a << endl;
	gotoxy(70, 37); cout << a << "                      " << a << "     " << a << endl;
	gotoxy(70, 38); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << endl;

}

//A border
void abord() {
	gotoxy(48, 22); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(48, 23); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(48, 24); cout << a << "  A  " << a << "                           " << a << endl;
	gotoxy(48, 25); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(48, 26); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << endl;
}

//B Border
void bbord() {

	gotoxy(87, 22); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(87, 23); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(87, 24); cout << a << "  B  " << a << "                           " << a << endl;
	gotoxy(87, 25); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(87, 26); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << endl;
}

//C Border
void cbord() {
	gotoxy(48, 28); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(48, 29); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(48, 30); cout << a << "  C  " << a << "                           " << a << endl;
	gotoxy(48, 31); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(48, 32); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << endl;
}

//D Border
void dbord() {
	gotoxy(87, 28); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(87, 29); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(87, 30); cout << a << "  D  " << a << "                           " << a << endl;
	gotoxy(87, 31); cout << a << "     " << a << "                           " << a << endl;
	gotoxy(87, 32); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << endl;

}

//Result Border after the game
void gresult() {
	gotoxy(59, 9); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 10); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 11); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 12); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 13); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 14); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 16); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 17); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 18); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 19); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 20); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 21); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 22); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 23); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 24); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 25); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 26); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 27); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 28); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 29); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 30); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 31); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 32); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 33); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 34); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 35); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 36); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 37); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 38); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 39); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 40); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(50, 2); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << c << "   " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << c << c << c << c << c << c << endl;
	gotoxy(50, 3); cout << c << c << c << "  " << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << "  " << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 4); cout << c << c << c << c << c << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << "    " << c << c << endl;
	gotoxy(50, 5); cout << c << c << " " << c << c << " " << c << c << "  " << "   " << c << c << "     " << c << c << "  " << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 6); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << endl;

	gotoxy(63, 13); cout << "----------  G A M E  R E S U L T  ----------";


	gotoxy(79, 17); cout << "L E V E L :";
	gotoxy(79, 21); cout << "S C O R E :";

}

//Next level button in the result page
void nextleveld() {
	gotoxy(69, 27); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(69, 28); cout << a << a << "                            " << a << a;
	gotoxy(69, 29); cout << a << a << "  N E X T   L E V E L  > >  " << a << a;
	gotoxy(69, 30); cout << a << a << "                            " << a << a;
	gotoxy(69, 31); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//More options in the result page 
void moreoptionsd() {
	gotoxy(69, 33); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(69, 34); cout << a << a << "                            " << a << a;
	gotoxy(69, 35); cout << a << a << "  M O R E    O P T I O N S  " << a << a;
	gotoxy(69, 36); cout << a << a << "                            " << a << a;
	gotoxy(69, 37); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//Choose Level option when in difficult level already
void reschooseleveld() {
	gotoxy(69, 27); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(69, 28); cout << a << a << "                            " << a << a;
	gotoxy(69, 29); cout << a << a << "   C H O O S E  L E V E L   " << a << a;
	gotoxy(69, 30); cout << a << a << "                            " << a << a;
	gotoxy(69, 31); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
}

//More Options Design Page (choose another game, game history, home, and back)
void moreoptionspaged() {


	gotoxy(59, 9); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 10); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 11); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 12); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 13); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 14); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 15); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	gotoxy(59, 16); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 17); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 18); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 19); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 20); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 21); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 22); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 23); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 24); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 25); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 26); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 27); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 28); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 29); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 30); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 31); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 32); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 33); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 34); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 35); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 36); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 37); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 38); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 39); cout << a << a << "                                                " << a << a << endl;
	gotoxy(59, 40); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;

	gotoxy(50, 2); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << c << "   " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << c << c << c << c << c << c << endl;
	gotoxy(50, 3); cout << c << c << c << "  " << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << "  " << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 4); cout << c << c << c << c << c << c << c << c << "  " << "   " << c << c << "     " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << c << c << c << c << c << c << "  " << c << c << c << c << c << c << c << "   " << c << c << "    " << c << c << endl;
	gotoxy(50, 5); cout << c << c << " " << c << c << " " << c << c << "  " << "   " << c << c << "     " << c << c << "  " << c << c << c << c << "  " << c << c << "    " << c << c << "    " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << "    " << c << c << endl;
	gotoxy(50, 6); cout << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << "  " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << "     " << c << c << "        " << c << c << "    " << c << c << "  " << c << c << c << c << c << c << c << c << endl;

	gotoxy(63, 13); cout << "---------- M O R E  O P T I O N S ----------";
	gotoxy(68, 17); cout << "----------------------------------";
	gotoxy(68, 38); cout << "----------------------------------";
}

//Choose another game button
void chooseanothergamed() {
	gotoxy(63, 18); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b;
	gotoxy(63, 19); cout << a << a << "                                        " << a << a;
	gotoxy(63, 20); cout << a << a << "  C H O O S E  A N O T H E R   G A M E  " << a << a;
	gotoxy(63, 21); cout << a << a << "                                        " << a << a;
	gotoxy(63, 22); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;
}

//Game history button
void gamehistoryd() {
	gotoxy(63, 23); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b;
	gotoxy(63, 24); cout << a << a << "                                        " << a << a;
	gotoxy(63, 25); cout << a << a << "        G A M E    H I S T O R Y        " << a << a;
	gotoxy(63, 26); cout << a << a << "                                        " << a << a;
	gotoxy(63, 27); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;
}

//HOme Button option in the more options page
void homed() {
	gotoxy(63, 28); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b;
	gotoxy(63, 29); cout << a << a << "                                        " << a << a;
	gotoxy(63, 30); cout << a << a << "               H  O  M  E               " << a << a;
	gotoxy(63, 31); cout << a << a << "                                        " << a << a;;
	gotoxy(63, 32); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;
}

//Back option in the more options page that leads to game result page
void backd() {
	gotoxy(63, 33); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b;
	gotoxy(63, 34); cout << a << a << "                                        " << a << a;
	gotoxy(63, 35); cout << a << a << "               B  A  C  K               " << a << a;
	gotoxy(63, 36); cout << a << a << "                                        " << a << a;
	gotoxy(63, 37); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c;

}

void invalidinput() {
	gotoxy(70, 34); cout << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << endl;
	gotoxy(70, 35); cout << a << "                            " << a << endl;
	gotoxy(70, 36); cout << a << "  I N V A L I D  I N P U T  " << a << endl;
	gotoxy(70, 37); cout << a << "                            " << a << endl;
	gotoxy(70, 38); cout << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << endl;

}

void vegameh() {
	gotoxy(30, 1); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << "    " << a << a << endl;
	gotoxy(30, 2); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(30, 3); cout << a << a << "  " << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << endl;
	gotoxy(30, 4); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << " " << a << a << " " << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;
	gotoxy(30, 5); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;


	gotoxy(7, 7); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(7, 8); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 9); cout << a << " USERNAME:                    " << a << " GAME:                        " << a << " LEVEL:                       " << a << " CORRECT ANSWER/S:            " << a << " SCORE:                       " << a;
	gotoxy(7, 10); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(3, 12); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 13); cout << a << " 1. WHICH QUESTION WORD IS USED FOR ASKING ABOUT TIME? " << a;
	gotoxy(3, 14); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 15); cout << a << "                                                       " << a;
	gotoxy(3, 16); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 17); cout << a << " CORRECT ANSWER: WHEN                                  " << a;
	gotoxy(3, 18); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(3, 20); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 21); cout << a << " 2. IF YOU LOOK HAGGARD, THEN YOU LOOK...              " << a;
	gotoxy(3, 22); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 23); cout << a << "                                                       " << a;
	gotoxy(3, 24); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 25); cout << a << " CORRECT ANSWER: TIRED                                 " << a;
	gotoxy(3, 26); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(3, 28); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 29); cout << a << " 3. A FALLACY IS A BELIEF THAT IS...                   " << a;
	gotoxy(3, 30); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 31); cout << a << "                                                       " << a;
	gotoxy(3, 32); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 33); cout << a << " CORRECT ANSWER: WRONG                                 " << a;
	gotoxy(3, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(3, 36); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 37); cout << a << " 4. I WASN'T LISTENING. _______ DID SHE SAY?           " << a;
	gotoxy(3, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 39); cout << a << "                                                       " << a;
	gotoxy(3, 40); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 41); cout << a << " CORRECT ANSWER: WHAT                                  " << a;
	gotoxy(3, 42); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(62, 12); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 13); cout << a << " 5. TO CONVEY YOUR FEELINGS IS TO...          " << a;
	gotoxy(62, 14); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 15); cout << a << "                                              " << a;
	gotoxy(62, 16); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 17); cout << a << " CORRECT ANSWER: TELL OTHERS YOUR FEELINGS    " << a;
	gotoxy(62, 18); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(62, 20); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 21); cout << a << " 6. MY MOTHER'S DAUGHTER IS MY....            " << a;
	gotoxy(62, 22); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 23); cout << a << "                                              " << a;
	gotoxy(62, 24); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 25); cout << a << " CORRECT ANSWER: SISTER                       " << a;
	gotoxy(62, 26); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(62, 28); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 29); cout << a << " 7. WE ADD A SUFFIX TO THE _______ OF A WORD. " << a;
	gotoxy(62, 30); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 31); cout << a << "                                              " << a;
	gotoxy(62, 32); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 33); cout << a << " CORRECT ANSWER: END                          " << a;
	gotoxy(62, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(62, 36); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 37); cout << a << " 8. JOHN ______ HIS LEG AT THE BASEBALL GAME. " << a;
	gotoxy(62, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 39); cout << a << "                                              " << a;
	gotoxy(62, 40); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 41); cout << a << " CORRECT ANSWER: BROKE                        " << a;
	gotoxy(62, 42); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 12); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 13); cout << a << " 9. I POINTED AT THE PHONE I WANTED TO BUY AND SAID, " << a;
	gotoxy(112, 14); cout << a << " _______ IS THAT ONE?                                " << a;
	gotoxy(112, 15); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(112, 16); cout << a << "                                                     " << a;
	gotoxy(112, 17); cout << a << " YOUR ANSWER:                                        " << a;
	gotoxy(112, 18); cout << a << " CORRECT ANSWER: HOW MUCH                            " << a;
	gotoxy(112, 19); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 21); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 22); cout << a << " 10. I HAVE TO _______ TO THE FINISH LINE AND BACK.  " << a;
	gotoxy(112, 23); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(112, 24); cout << a << "                                                     " << a;
	gotoxy(112, 25); cout << a << " YOUR ANSWER:                                        " << a;
	gotoxy(112, 26); cout << a << " CORRECT ANSWER: RUN                                 " << a;
	gotoxy(112, 27); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 29); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(112, 30); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 31); cout << a << "                                                     " << a;
	gotoxy(112, 32); cout << a << "                                                     " << a;
	gotoxy(112, 33); cout << a << "                                                     " << a;
	gotoxy(112, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(112, 36); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(112, 37); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 38); cout << a << "                                                     " << a;
	gotoxy(112, 39); cout << a << "          P R E S S  A N Y  K E Y  T O  G O          " << a;
	gotoxy(112, 40); cout << a << "                     < <  B A C K                    " << a;
	gotoxy(112, 41); cout << a << "                                                     " << a;
	gotoxy(112, 42); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

}

void vagameh() {

	gotoxy(30, 1); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << "    " << a << a << endl;
	gotoxy(30, 2); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(30, 3); cout << a << a << "  " << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << endl;
	gotoxy(30, 4); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << " " << a << a << " " << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;
	gotoxy(30, 5); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;

	gotoxy(7, 7); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(7, 8); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 9); cout << a << " USERNAME:                    " << a << " GAME:                        " << a << " LEVEL:                       " << a << " CORRECT ANSWER/S:            " << a << " SCORE:                       " << a;
	gotoxy(7, 10); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(3, 12); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 13); cout << a << " 1. WOULD YOU _______ MY DOG FOR ME THIS WEEKEND?      " << a;
	gotoxy(3, 14); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 15); cout << a << "                                                       " << a;
	gotoxy(3, 16); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 17); cout << a << " CORRECT ANSWER: LOOK AFTER                            " << a;
	gotoxy(3, 18); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(3, 20); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 21); cout << a << " 2. IT WILL BE EASIER TO READ IF YOU _____ THE LIGHTS. " << a;
	gotoxy(3, 22); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 23); cout << a << "                                                       " << a;
	gotoxy(3, 24); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 25); cout << a << " CORRECT ANSWER: SWITCH ON                             " << a;
	gotoxy(3, 26); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(3, 28); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 29); cout << a << " 3. MY BROTHER'S DAUGHTER IS MY..                      " << a;
	gotoxy(3, 30); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 31); cout << a << "                                                       " << a;
	gotoxy(3, 32); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 33); cout << a << " CORRECT ANSWER: NIECE                                 " << a;
	gotoxy(3, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(3, 36); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(3, 37); cout << a << " 4. AN ACRONYM IS USUALLY PRONOUNCED AS...             " << a;
	gotoxy(3, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(3, 39); cout << a << "                                                       " << a;
	gotoxy(3, 40); cout << a << " YOUR ANSWER:                                          " << a;
	gotoxy(3, 41); cout << a << " CORRECT ANSWER: A WORD                                " << a;
	gotoxy(3, 42); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(62, 12); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 13); cout << a << " 5. THE MANAGER THINKS THE COMPANY'S BEEN RUN " << a;
	gotoxy(62, 14); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 15); cout << a << "                                              " << a;
	gotoxy(62, 16); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 17); cout << a << " CORRECT ANSWER: VERY POORLY                  " << a;
	gotoxy(62, 18); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(62, 20); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 21); cout << a << " 6. THE SYNONYM OF  KIND IS...                " << a;
	gotoxy(62, 22); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 23); cout << a << "                                              " << a;
	gotoxy(62, 24); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 25); cout << a << " CORRECT ANSWER: NICE                         " << a;
	gotoxy(62, 26); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(62, 28); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 29); cout << a << " 7. I __________ TENNIS EVERY SUNDAY MORNING. " << a;
	gotoxy(62, 30); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 31); cout << a << "                                              " << a;
	gotoxy(62, 32); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 33); cout << a << " CORRECT ANSWER: PLAY                         " << a;
	gotoxy(62, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(62, 36); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(62, 37); cout << a << " 8. WHAT IS THE ANTONYM OF REPAIR?            " << a;
	gotoxy(62, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(62, 39); cout << a << "                                              " << a;
	gotoxy(62, 40); cout << a << " YOUR ANSWER:                                 " << a;
	gotoxy(62, 41); cout << a << " CORRECT ANSWER: BREAK                        " << a;
	gotoxy(62, 42); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 12); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 13); cout << a << " 9. YOU LOOK A LITTLE DOWN IN THE DUMPS.             " << a;
	gotoxy(112, 14); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(112, 15); cout << a << "                                                     " << a;
	gotoxy(112, 16); cout << a << " YOUR ANSWER:                                        " << a;
	gotoxy(112, 17); cout << a << " CORRECT ANSWER: YOU LOOK SAD.                       " << a;
	gotoxy(112, 18); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 20); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 21); cout << a << " 10. WHICH ONE IS CORRECT?                           " << a;
	gotoxy(112, 22); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(112, 23); cout << a << "                                                     " << a;
	gotoxy(112, 24); cout << a << " YOUR ANSWER:                                        " << a;
	gotoxy(112, 25); cout << a << " CORRECT ANSWER: NECESSARY                           " << a;
	gotoxy(112, 26); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 29); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(112, 30); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(112, 31); cout << a << "                                                     " << a;
	gotoxy(112, 32); cout << a << "                                                     " << a;
	gotoxy(112, 33); cout << a << "                                                     " << a;
	gotoxy(112, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(112, 36); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(112, 37); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(112, 38); cout << a << "                                                     " << a;
	gotoxy(112, 39); cout << a << "          P R E S S  A N Y  K E Y  T O  G O          " << a;
	gotoxy(112, 40); cout << a << "                     < <  B A C K                    " << a;
	gotoxy(112, 41); cout << a << "                                                     " << a;
	gotoxy(112, 42); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
}

void vdgameh()
{

	gotoxy(30, 1); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << "    " << a << a << endl;
	gotoxy(30, 2); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(30, 3); cout << a << a << "  " << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << endl;
	gotoxy(30, 4); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << " " << a << a << " " << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;
	gotoxy(30, 5); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;


	gotoxy(7, 8); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(7, 9); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 10); cout << a << " USERNAME:                    " << a << " GAME:                        " << a << " LEVEL:                       " << a << " CORRECT ANSWER/S:            " << a << " SCORE:                       " << a;
	gotoxy(7, 11); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;


	gotoxy(7, 14); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 15); cout << a << " 1.IN CONTRACTIONS OF MORE THAN ONE WORD, MISSING LETTERS ARE REPLACED BY? " << a;
	gotoxy(7, 16); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(7, 17); cout << a << "                                                                           " << a;
	gotoxy(7, 18); cout << a << " YOUR ANSWER:                                                              " << a;
	gotoxy(7, 19); cout << a << " CORRECT ANSWER: LOOK AFTER                                                " << a;
	gotoxy(7, 20); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(86, 14); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(86, 15); cout << a << " 2. EVERYONE THOUGHT SIMONE WOULD LOSE THE GAME,THEN SHE BROUGHT OFF ..... " << a;
	gotoxy(86, 16); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(86, 17); cout << a << "                                                                           " << a;
	gotoxy(86, 18); cout << a << " YOUR ANSWER:                                                              " << a;
	gotoxy(86, 19); cout << a << " CORRECT ANSWER: A GREAT VICTORY                                           " << a;
	gotoxy(86, 20); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(7, 23); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 24); cout << a << " 3. SORRY, YOU CAN'T BORROW MY PENCIL. I __________ IT MYSELF.             " << a;
	gotoxy(7, 25); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(7, 26); cout << a << "                                                                           " << a;
	gotoxy(7, 27); cout << a << " YOUR ANSWER:                                                              " << a;
	gotoxy(7, 28); cout << a << " CORRECT ANSWER: AM USING                                                  " << a;
	gotoxy(7, 29); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(86, 23); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(86, 24); cout << a << " 4. WHAT IS THE SYNONYM OF CONTEMPLATE?                                    " << a;
	gotoxy(86, 25); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(86, 26); cout << a << "                                                                           " << a;
	gotoxy(86, 27); cout << a << " YOUR ANSWER:                                                              " << a;
	gotoxy(86, 28); cout << a << " CORRECT ANSWER: THINK                                                     " << a;
	gotoxy(86, 29); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(7, 32); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 33); cout << a << " 5. WHICH ONE IS THE CORRECT SPELLING?               " << a;
	gotoxy(7, 34); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;
	gotoxy(7, 35); cout << a << "                                                     " << a;
	gotoxy(7, 36); cout << a << " YOUR ANSWER:                                        " << a;
	gotoxy(7, 37); cout << a << " CORRECT ANSWER: MANEUVER                            " << a;
	gotoxy(7, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(65, 32); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(65, 33); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(65, 34); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(65, 35); cout << a << "                                              " << a;
	gotoxy(65, 36); cout << a << "                                              " << a;
	gotoxy(65, 37); cout << a << "                                              " << a;
	gotoxy(65, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(116, 32); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(116, 33); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(116, 34); cout << a << "                                             " << a;
	gotoxy(116, 35); cout << a << "      P R E S S  A N Y  K E Y  T O  G O      " << a;
	gotoxy(116, 36); cout << a << "                 < <  B A C K                " << a;
	gotoxy(116, 37); cout << a << "                                             " << a;
	gotoxy(116, 38); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

}

void gamehistory() {
	gotoxy(30, 5); cout << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << "    " << a << a << endl;
	gotoxy(30, 6); cout << a << a << "        " << a << a << "    " << a << a << "  " << a << a << a << "  " << a << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << endl;
	gotoxy(30, 7); cout << a << a << "  " << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << "   " << a << a << a << a << a << a << a << a << endl;
	gotoxy(30, 8); cout << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << " " << a << a << " " << a << a << "  " << a << a << "          " << a << a << "    " << a << a << "     " << a << a << "           " << a << a << "     " << a << a << "     " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;
	gotoxy(30, 9); cout << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "  " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "    " << a << a << "    " << a << a << "  " << a << a << a << a << a << a << a << a << "  " << a << a << a << a << a << a << a << a << "     " << a << a << "     " << a << a << a << a << a << a << a << a << "  " << a << a << "    " << a << a << "     " << a << a << endl;


	gotoxy(7, 14); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(7, 15); cout << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << a;
	gotoxy(7, 16); cout << a << " USERNAME:                    " << a << " GAME:                        " << a << " LEVEL:                       " << a << " CORRECT ANSWER/S:            " << a << " SCORE:                       " << a;
	gotoxy(7, 17); cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << a;

	gotoxy(58, 22); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;
	gotoxy(58, 23); cout << a << a << "                                                  " << a << a;
	gotoxy(58, 24); cout << a << a << "  P R E S S  A N Y  K E Y   T O  C O N T I N U E  " << a << a;
	gotoxy(58, 25); cout << a << a << "                                                  " << a << a;
	gotoxy(58, 26); cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a;


}

//MAIN PROGRAM
int main() {

	//Code for SetColor
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//Start
	SetConsoleTextAttribute(color, 14);
	
	SetConsoleTextAttribute(color, 14);
	gotoxy(60, 4); cout << "Maximize The Screen and Press Any Key To Continue";
	getch();
	system("cls");

	logo(); //Calls the function "logo"
	getch();
	system("cls");

menu:

	//Variables
	int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
	string usern;

	//Home functions
	homepborder();
	settings();
	termsandcon();
	aboutdev();
	exit();

	gotoxy(83, 15); cout << "CREATE A USERNAME:";
	gotoxy(85, 20); cin >> usern;
	SetConsoleTextAttribute(color, 11);
	createuser();
	gotoxy(83, 20); cout << "PRESS RIGHT KEY [>]";

	//For the arrow keys option in the Homepage
	while (menl != 1)
	{
		int v = 0;

		if (v == 0 || v == 224 || v == 13 || v == 10) { //to specify arrow keys exemplifying other values such as the ascii code.

			switch ((v = _getch()))
			{

			case KEY_LEFT:
				if (men == 1)
				{
				}
				else
				{
					men -= 1;
				}
				break;
			case KEY_RIGHT:
				if (men == 5)
				{
				}
				else
				{
					men += 1;
				}
				break;
			case ENTER:
				if (men == 0)
				{
					continue;
				}
				else {
					menl = 1;
					continue;
				}
				break;
			case 49:
				continue;
				break;
			}
		}
		//Switch to Highlight HOmepage Options
		switch (men)
		{
		case 1:
			SetConsoleTextAttribute(color, 11);
			createuser();
			gotoxy(85, 20); cout << "CONTINUE >>";
			SetConsoleTextAttribute(color, 14);
			settings(); termsandcon(); aboutdev(); exit();
			SetConsoleTextAttribute(color, 14);
			break;
		case 2:
			SetConsoleTextAttribute(color, 14);
			createuser();
			gotoxy(85, 20); cout << "CONTINUE >>";
			termsandcon(); aboutdev(); exit();
			SetConsoleTextAttribute(color, 11);
			settings();
			SetConsoleTextAttribute(color, 14);
			break;
		case 3:
			SetConsoleTextAttribute(color, 14);
			createuser();
			gotoxy(85, 20); cout << "CONTINUE >>";
			settings(); aboutdev(); exit();
			SetConsoleTextAttribute(color, 11);
			termsandcon();
			SetConsoleTextAttribute(color, 14);
			break;
		case 4:
			SetConsoleTextAttribute(color, 14);
			createuser();
			gotoxy(85, 20); cout << "CONTINUE >>";
			settings(); exit(); termsandcon();
			SetConsoleTextAttribute(color, 11);
			aboutdev();
			SetConsoleTextAttribute(color, 14);
			break;
		case 5:
			SetConsoleTextAttribute(color, 14);
			createuser();
			gotoxy(85, 20); cout << "CONTINUE >>";
			settings(); termsandcon(); aboutdev();
			SetConsoleTextAttribute(color, 11);
			exit();
			SetConsoleTextAttribute(color, 14);
			break;
		}
	}
	if (men != 1 && men != 2 && men != 3 && men != 4) {
		menl--;
		system("cls");
	}
	else
	{
		menl = 1;
	}

	//Switch to display the Homepage Options if Entered
	switch (men) {

	case 1: //If "Continue" was choosen, the program will continue to next page
	{
		system("cls");

	choosegame:
		int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
		char te1, te2, te3, te4, te5, te6, te7, te8, te9, te10; //technology easy
		char ta1, ta2, ta3, ta4, ta5, ta6, ta7, ta8, ta9, ta10; //technology ave
		char td1, td2, td3, td4, td5; //technology diff
		int teaverage = 0, te1score = 0, te2score = 0, te3score = 0, te4score = 0, te5score = 0, te6score = 0, te7score = 0, te8score = 0, te9score = 0, te10score = 0;
		int taaverage = 0, ta1score = 0, ta2score = 0, ta3score = 0, ta4score = 0, ta5score = 0, ta6score = 0, ta7score = 0, ta8score = 0, ta9score = 0, ta10score = 0;
		int td1score = 0, td2score = 0, td3score = 0, td4score = 0, td5score = 0, tdaverage = 0;

		char re1, re2, re3, re4, re5, re6, re7, re8, re9, re10; //riddles easy
		char ra1, ra2, ra3, ra4, ra5, ra6, ra7, ra8, ra9, ra10; //riddles ave
		char rd1, rd2, rd3, rd4, rd5; //riddles diff
		int reaverage = 0, re1score = 0, re2score = 0, re3score = 0, re4score = 0, re5score = 0, re6score = 0, re7score = 0, re8score = 0, re9score = 0, re10score = 0;
		int raaverage = 0, ra1score = 0, ra2score = 0, ra3score = 0, ra4score = 0, ra5score = 0, ra6score = 0, ra7score = 0, ra8score = 0, ra9score = 0, ra10score = 0;
		int rdaverage = 0, rd1score = 0, rd2score = 0, rd3score = 0, rd4score = 0, rd5score = 0;

		char ve1, ve2, ve3, ve4, ve5, ve6, ve7, ve8, ve9, ve10; // vocab easy
		char va1, va2, va3, va4, va5, va6, va7, va8, va9, va10; // vocab ave
		char vd1, vd2, vd3, vd4, vd5; // vocab diff
		int veaverage = 0, ve1score = 0, ve2score = 0, ve3score = 0, ve4score = 0, ve5score = 0, ve6score = 0, ve7score = 0, ve8score = 0, ve9score = 0, ve10score = 0;
		int vaaverage = 0, va1score = 0, va2score = 0, va3score = 0, va4score = 0, va5score = 0, va6score = 0, va7score = 0, va8score = 0, va9score = 0, va10score = 0;
		int vdaverage = 0, vd1score = 0, vd2score = 0, vd3score = 0, vd4score = 0, vd5score = 0;

		char qe1, qe2, qe3, qe4, qe5, qe6, qe7, qe8, qe9, qe10;
		char qa1, qa2, qa3, qa4, qa5, qa6, qa7, qa8, qa9, qa10;
		char qd1, qd2, qd3, qd4, qd5;
		int qeaverage = 0, qe1score = 0, qe2score = 0, qe3score = 0, qe4score = 0, qe5score = 0, qe6score = 0, qe7score = 0, qe8score = 0, qe9score = 0, qe10score = 0;
		int qaaverage = 0, qa1score = 0, qa2score = 0, qa3score = 0, qa4score = 0, qa5score = 0, qa6score = 0, qa7score = 0, qa8score = 0, qa9score = 0, qa10score = 0;
		int qdaverage = 0, qd1score = 0, qd2score = 0, qd3score = 0, qd4score = 0, qd5score = 0;

		int vectotal = 0, ve1c, ve2c, ve3c, ve4c, ve5c, ve6c, ve7c, ve8c, ve9c, ve10c;
		int vactotal = 0, va1c, va2c, va3c, va4c, va5c, va6c, va7c, va8c, va9c, va10c;
		int vdctotal = 0, vd1c, vd2c, vd3c, vd4c, vd5c;

		int tectotal = 0, te1c, te2c, te3c, te4c, te5c, te6c, te7c, te8c, te9c, te10c;
		int tactotal = 0, ta1c, ta2c, ta3c, ta4c, ta5c, ta6c, ta7c, ta8c, ta9c, ta10c;
		int tdctotal = 0, td1c, td2c, td3c, td4c, td5c;

		int rectotal = 0, re1c, re2c, re3c, re4c, re5c, re6c, re7c, re8c, re9c, re10c;
		int ractotal = 0, ra1c, ra2c, ra3c, ra4c, ra5c, ra6c, ra7c, ra8c, ra9c, ra10c;
		int rdctotal = 0, rd1c, rd2c, rd3c, rd4c, rd5c;

		int qectotal = 0, qe1c, qe2c, qe3c, qe4c, qe5c, qe6c, qe7c, qe8c, qe9c, qe10c;
		int qactotal = 0, qa1c, qa2c, qa3c, qa4c, qa5c, qa6c, qa7c, qa8c, qa9c, qa10c;
		int qdctotal = 0, qd1c, qd2c, qd3c, qd4c, qd5c;



		choosegameb();
		vocabg();
		techg();
		riddlesg();
		quizmg();

		//Switch keys to choose game
		while (genl != 1) {
			int v = 0;
			if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) {

				switch ((v = _getch()))
				{
				case KEY_LEFT:
					if (game == 1)
					{
					}
					else
					{
						game -= 1;
					}
					break;
				case KEY_RIGHT:
					if (game == 4)
					{
					}
					else
					{

						game += 1;
					}
					break;

				case ENTER:
					if (game == 0) {
						continue;
					}
					else {
						genl = 1;
						continue;
					}
					break;
				}
			}genl = 0;

			switch (game) //Highlights the Switch for the Game Options in the Settings Page
			{
			case 1:
				SetConsoleTextAttribute(color, 11);
				vocabg();
				SetConsoleTextAttribute(color, 14);
				techg(); riddlesg(); quizmg();
				SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
				vocabg(); riddlesg(); quizmg();
				SetConsoleTextAttribute(color, 11);
				techg();
				SetConsoleTextAttribute(color, 14);
				break;
			case 3:
				SetConsoleTextAttribute(color, 14);
				vocabg(); techg(); quizmg();
				SetConsoleTextAttribute(color, 11);
				riddlesg();
				SetConsoleTextAttribute(color, 14);
				break;
			case 4:
				SetConsoleTextAttribute(color, 14);
				vocabg(); techg(); riddlesg();
				SetConsoleTextAttribute(color, 11);
				quizmg();
				SetConsoleTextAttribute(color, 14);
				break;
			}
		}

		if (game != 1 && game != 4) {}
		else
		{
			gamel = 1;
		} gamel = 0;

		switch (game)
		{
		case 1: //If "Vocabulary" was chosen
		{
			system("cls");

		vocabgame:
			level = 0;

			chooselevel();
			easy();
			average();
			difficult();

			while (gamel != 1) {
				int v = 0;
				if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

					switch ((v = _getch()))
					{
					case KEY_LEFT:
						if (level == 1)
						{
						}
						else
						{
							level -= 1;
						}
						break;
					case KEY_RIGHT:
						if (level == 3)
						{
						}
						else
						{
							level += 1;
						}
						break;

					case ENTER:
						if (level == 0)
						{
							continue;
						}
						else {
							gamel = 1;
							continue;
						}
						break;
					}
				}

				switch (level) //Highlights the Switch for the Game Options in the Level Page
				{
				case 1:
					SetConsoleTextAttribute(color, 11);
					easy();
					SetConsoleTextAttribute(color, 14);
					average(); difficult();
					SetConsoleTextAttribute(color, 14);
					break;
				case 2:
					SetConsoleTextAttribute(color, 11);
					average();
					SetConsoleTextAttribute(color, 14);
					easy();	difficult();
					SetConsoleTextAttribute(color, 14);
					break;
				case 3:
					SetConsoleTextAttribute(color, 11);
					difficult();
					SetConsoleTextAttribute(color, 14);
					easy(); average();
					SetConsoleTextAttribute(color, 14);
					break;
				}
			}

			if (level != 1 && level != 3) {}
			else
			{
				gamel = 1;
			} gamel = 0;

			switch (level)
			{
			case 1:
			{
				system("cls");

			velevel:

			veq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "WHICH QUESTION WORD IS USED FOR ASKING ABOUT TIME?";
				gotoxy(66, 24); cout << "WHERE";
				gotoxy(106, 24); cout << "WHEN";
				gotoxy(67, 30); cout << "HOW";
				gotoxy(106, 30); cout << "WHY";
				gotoxy(96, 36); cin >> ve1;

				switch (ve1)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(106, 24); cout << "WHEN";
					SetConsoleTextAttribute(color, 14);
					ve1score = 300;
					ve1c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "WHERE";
					SetConsoleTextAttribute(color, 14);
					ve1score = 0;
					ve1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(67, 30); cout << "HOW";
					SetConsoleTextAttribute(color, 14);
					ve1score = 0;
					ve1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(106, 30); cout << "WHY";
					SetConsoleTextAttribute(color, 14);
					ve1score = 0;
					ve1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq1;
				}
				}
				getch();
				system("cls");

			veq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(67, 17); cout << "IF YOU LOOK HAGGARD, THEN YOU LOOK...";
				gotoxy(66, 24); cout << "TIRED";
				gotoxy(104, 24); cout << "HATEFUL";
				gotoxy(64, 30); cout << "VERY GOOD";
				gotoxy(105, 30); cout << "TINY";
				gotoxy(96, 36); cin >> ve2;

				switch (ve2)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(66, 24); cout << "TIRED";
					SetConsoleTextAttribute(color, 14);
					ve2score = 305;
					ve2c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "HATEFUL";
					ve2score = 0;
					ve2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "VERY GOOD";
					SetConsoleTextAttribute(color, 14);
					ve2score = 0;
					ve2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "TINY";
					SetConsoleTextAttribute(color, 14);
					ve2score = 0;
					ve2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq2;
				}
				}
				getch();				system("cls");

			veq3:
				SetConsoleTextAttribute(color, 14);
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(69, 17); cout << "A FALLACY IS A BELIEF THAT IS...";
				gotoxy(66, 24); cout << "CERTAIN";
				gotoxy(104, 24); cout << "WRONG";
				gotoxy(64, 30); cout << "REFRESHING";
				gotoxy(97, 30); cout << "HELD AMONG MANY PEOPLE";
				gotoxy(96, 36); cin >> ve3;

				switch (ve3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "WRONG";
					SetConsoleTextAttribute(color, 14);
					ve3score = 310;
					ve3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "CERTAIN";
					SetConsoleTextAttribute(color, 14);
					ve3score = 0;
					ve3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "REFRESHING";
					SetConsoleTextAttribute(color, 14);
					ve3score = 0;
					ve3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(97, 30); cout << "HELD AMONG MANY PEOPLE";
					SetConsoleTextAttribute(color, 14);
					ve3score = 0;
					ve3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq3;
				}
				}
				getch();
				system("cls");

			veq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(64, 17); cout << "I WASN'T LISTENING. _______ DID SHE SAY?";
				gotoxy(66, 24); cout << "HOW";
				gotoxy(104, 24); cout << "WHAT";
				gotoxy(66, 30); cout << "WHY";
				gotoxy(104, 30); cout << "WHEN";
				gotoxy(96, 36); cin >> ve4;

				switch (ve4)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "WHAT";
					SetConsoleTextAttribute(color, 14);
					ve4score = 315;
					ve4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "HOW";
					SetConsoleTextAttribute(color, 14);
					ve4score = 0;
					ve4c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "WHY";
					SetConsoleTextAttribute(color, 14);
					ve4score = 0;
					ve4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "WHEN";
					SetConsoleTextAttribute(color, 14);
					ve4score = 0;
					ve4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq4;
				}
				}
				getch();
				system("cls");

			veq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(69, 17); cout << "TO CONVEY YOUR FEELINGS IS TO...";
				gotoxy(60, 24); cout << "HIDE YOUR FEELINGS";
				gotoxy(96, 24); cout << "FORGET OF YOUR FEELINGS";
				gotoxy(57, 30); cout << "DISCOVER YOUR FEELINGS";
				gotoxy(95, 30); cout << "TELL OTHERS YOUR FEELINGS";
				gotoxy(96, 36); cin >> ve5;

				switch (ve5)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(95, 30); cout << "TELL OTHERS YOUR FEELINGS";
					SetConsoleTextAttribute(color, 14);
					ve5score = 320;
					ve5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(96, 24); cout << "FORGET OF YOUR FEELINGS";
					SetConsoleTextAttribute(color, 14);
					ve5score = 0;
					ve5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(57, 30); cout << "DISCOVER YOUR FEELINGS";
					SetConsoleTextAttribute(color, 14);
					ve5score = 0;
					ve5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(60, 24); cout << "HIDE YOUR FEELINGS";
					ve5score = 0;
					ve5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq5;
				}
				}
				getch();
				system("cls");

			veq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "MY MOTHER'S DAUGHTER IS MY....";
				gotoxy(66, 24); cout << "AUNT";
				gotoxy(104, 24); cout << "COUSIN";
				gotoxy(65, 30); cout << "SISTER";
				gotoxy(104, 30); cout << "NEPHEW";
				gotoxy(96, 36); cin >> ve6;

				switch (ve6)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(65, 30); cout << "SISTER";
					SetConsoleTextAttribute(color, 14);
					ve6score = 325;
					ve6c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "AUNT";
					SetConsoleTextAttribute(color, 14);
					ve6score = 0;
					ve6c = 0;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "COUSIN";
					SetConsoleTextAttribute(color, 14);
					ve6score = 0;
					ve6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "NEPHEW";
					SetConsoleTextAttribute(color, 14);
					ve6score = 0;
					ve6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq6;
				}
				}
				getch();
				system("cls");

			veq7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(65, 17); cout << "WE ADD A SUFFIX TO THE _______ OF A WORD.";
				gotoxy(65, 24); cout << "START";
				gotoxy(104, 24); cout << "MIDDLE";
				gotoxy(66, 30); cout << "END";
				gotoxy(102, 30); cout << "BEGINNING";
				gotoxy(96, 36); cin >> ve7;

				switch (ve7)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(66, 30); cout << "END";
					SetConsoleTextAttribute(color, 14);
					ve7score = 330;
					ve7c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "MIDDLE";
					SetConsoleTextAttribute(color, 14);
					ve7score = 0;
					ve7c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "START";
					SetConsoleTextAttribute(color, 14);
					ve7score = 0;
					ve7c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "BEGINNING";
					SetConsoleTextAttribute(color, 14);
					ve7score = 0;
					ve7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq7;
				}
				}
				getch();
				system("cls");

			veq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(64, 17); cout << "JOHN _______ HIS LEG AT THE BASEBALL GAME.";
				gotoxy(66, 24); cout << "BROKE";
				gotoxy(102, 24); cout << "BROKE DOWN";
				gotoxy(64, 30); cout << "BROKE OFF";
				gotoxy(103, 30); cout << "BROKE UP";
				gotoxy(96, 36); cin >> ve8;

				switch (ve8)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(66, 24); cout << "BROKE";
					SetConsoleTextAttribute(color, 14);
					ve8score = 335;
					ve8c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "BROKE DOWN";
					SetConsoleTextAttribute(color, 14);
					ve8score = 0;
					ve8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "BROKE OFF";
					SetConsoleTextAttribute(color, 14);
					ve8score = 0;
					ve8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "BROKE UP";
					SetConsoleTextAttribute(color, 14);
					ve8score = 0;
					ve8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq8;
				}
				}
				getch();
				system("cls");

			veq9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(50, 17); cout << "I POINTED AT THE PHONE I WANTED TO BUY AND SAID, _______ IS THAT ONE?";
				gotoxy(64, 24); cout << "HOW MANY";
				gotoxy(103, 24); cout << "HOW MUCH";
				gotoxy(66, 30); cout << "WHAT";
				gotoxy(103, 30); cout << "WHAT COST";
				gotoxy(96, 36); cin >> ve9;

				switch (ve9)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(103, 24); cout << "HOW MUCH";
					SetConsoleTextAttribute(color, 14);
					ve9score = 340;
					ve9c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "HOW MANY";
					SetConsoleTextAttribute(color, 14);
					ve9score = 0;
					ve9c = 0;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "WHAT";
					SetConsoleTextAttribute(color, 14);
					ve9score = 0;
					ve9c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "WHAT COST";
					SetConsoleTextAttribute(color, 14);
					ve9score = 0;
					ve9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq9;
				}
				}
				getch();
				system("cls");

			veq10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(62, 17); cout << "I HAVE TO _______ TO THE FINISH LINE AND BACK.";
				gotoxy(64, 24); cout << "RUN AWAY";
				gotoxy(103, 24); cout << "RUN OUT OF";
				gotoxy(66, 30); cout << "RUN";
				gotoxy(104, 30); cout << "RUN OFF";
				gotoxy(96, 36); cin >> ve10;

				switch (ve10)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(66, 30); cout << "RUN";
					SetConsoleTextAttribute(color, 14);
					ve10score = 345;
					ve10c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "RUN AWAY";
					SetConsoleTextAttribute(color, 14);
					ve10score = 0;
					ve10c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "RUN OUT OF";
					SetConsoleTextAttribute(color, 14);
					ve10score = 0;
					ve10c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "RUN OFF";
					SetConsoleTextAttribute(color, 14);
					ve10score = 0;
					ve10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto veq10;
				}
				}
				getch();
				system("cls");


			resultve:

				vectotal = ve1c + ve2c + ve3c + ve4c + ve5c + ve6c + ve7c + ve8c + ve9c + ve10c;
				veaverage = ve1score + ve2score + ve3score + ve4score + ve5score + ve6score + ve7score + ve8score + ve9score + ve10score;


				ofstream file;
				file.open("Vocabularyhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Vocabulary";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Easy Score Result: " << veaverage << "\n";
				file << "Correct Answer/s: " << vectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Average Score Result: " << vaaverage << "\n";
				file << "Correct Answer/s: " << vactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Difficult Score Result: " << vdaverage << "\n";
				file << "Correct Answer/s: " << vdctotal << " / 5 \n";
				file << "-------------------------------------";

				file.close();

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(81, 19); cout << "E A S Y";
				gotoxy(82, 23); cout << veaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) {

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto valevel;
					break;
				}
				case 2: {
					system("cls");

					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) {

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2: //game history
					{
						system("cls");

						vegameh();

						gotoxy(19, 9); cout << usern;
						gotoxy(46, 9); cout << "VOCABULARY";
						gotoxy(78, 9); cout << "EASY";
						gotoxy(120, 9); cout << vectotal << " / 10";
						gotoxy(140, 9); cout << veaverage;

						//1
						switch (ve1)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 16); cout << "WHEN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 16); cout << "WHERE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 16); cout << "HOW";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 16); cout << "WHY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve2)
						{
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 24); cout << "TIRED";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 24); cout << "HATEFUL";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 24); cout << "VERY GOOD";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 24); cout << "TINY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve3)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 32); cout << "WRONG";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 32); cout << "CERTAIN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 32); cout << "VREFRESHING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 32); cout << "HELD AMONG MANY PEOPLE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}


						switch (ve4)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 40); cout << "WHAT";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 40); cout << "HOW";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 40); cout << "WHY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 40); cout << "WHEN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}


						switch (ve5)
						{
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 16); cout << "TELL OTHERS YOUR FEELINGS";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 16); cout << "HIDE YOUR FEELINGS";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 16); cout << "FORGET OF YOUR FEELINGS";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 16); cout << "DISCOVER YOUR FEELINGS";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve6)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 24); cout << "SISTER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 24); cout << "AUNT";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 24); cout << "COUSIN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 24); cout << "NEPHEW";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve7)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 32); cout << "END";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 32); cout << "START";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 32); cout << "MIDDLE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 32); cout << "BEGINNING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve8)
						{
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 40); cout << "BROKE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'B':
						case 'b': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 40); cout << "BROKE DOWN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 40); cout << "BROKE OFF";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 40); cout << "BROKE UP";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve9)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(127, 17); cout << "HOW MUCH";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 17); cout << "HOW MANY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 17); cout << "WHAT";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 17); cout << "WHAT COST";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (ve10)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(127, 25); cout << "RUN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 25); cout << "RUN AWAY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 25); cout << "RUN OUT OF";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 25); cout << "RUN OFF";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						if (vectotal<7)
						{
							gotoxy(123, 32); cout << "BETTER LUCK NEXT TIME " << usern;

						}
						else if (vectotal>7 && vectotal<10)
						{
							gotoxy(130, 32); cout << "GOOD JOB " << usern;
						}

						getch();
						system("cls");

						goto resultve;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultve;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP

				break;
			} //end of Vocab EASy

			case 2:
			{
				system("cls");
			valevel:

			vaq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(62, 17); cout << " WOULD YOU _______ MY DOG FOR ME THIS WEEKEND?";
				gotoxy(66, 24); cout << "LOOK";
				gotoxy(103, 24); cout << "LOOK AFTER";
				gotoxy(65, 30); cout << "LOOK UP";
				gotoxy(103, 30); cout << "LOOK DOWN";
				gotoxy(96, 36); cin >> va1;

				switch (va1)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(103, 24); cout << "LOOK AFTER";
					SetConsoleTextAttribute(color, 14);
					va1score = 400;
					va1c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "LOOK";
					SetConsoleTextAttribute(color, 14);
					va1score = 0;
					va1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "LOOK UP";
					SetConsoleTextAttribute(color, 14);
					va1score = 0;
					va1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "LOOK DOWN";
					SetConsoleTextAttribute(color, 14);
					va1score = 0;
					va1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq1;
				}
				}
				getch();
				system("cls");

			vaq2:
				SetConsoleTextAttribute(color, 14);
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(59, 17); cout << " IT WILL BE EASIER TO READ IF YOU _______ THE LIGHTS.";
				gotoxy(65, 24); cout << "SWITCH";
				gotoxy(103, 24); cout << "SWITCH ON";
				gotoxy(63, 30); cout << "SWITCH OVER";
				gotoxy(102, 30); cout << "SWITCH DOWN";
				gotoxy(96, 36); cin >> va2;

				switch (va2)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(103, 24); cout << "SWITCH ON";
					SetConsoleTextAttribute(color, 14);
					va2score = 405;
					va2c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "SWITCH";
					va2score = 0;
					va2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "SWITCH OVER";
					va2score = 0;
					va2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "SWITCH DOWN";
					SetConsoleTextAttribute(color, 14);
					va2score = 0;
					va2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq2;
				}
				}
				getch();
				system("cls");

			vaq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(71, 17); cout << "MY BROTHER'S DAUGHTER IS MY...";
				gotoxy(65, 24); cout << "NEPHEW";
				gotoxy(105, 24); cout << "NIECE";
				gotoxy(65, 30); cout << "SISTER";
				gotoxy(105, 30); cout << "COUSIN";
				gotoxy(96, 36); cin >> va3;

				switch (va3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "NIECE";
					SetConsoleTextAttribute(color, 14);
					va3score = 410;
					va3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "NEPHEW";
					SetConsoleTextAttribute(color, 14);
					va3score = 0;
					va3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "SISTER";
					SetConsoleTextAttribute(color, 14);
					va3score = 0;
					va3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "COUSIN";
					SetConsoleTextAttribute(color, 14);
					va3score = 0;
					va3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq3;
				}
				}
				getch();
				system("cls");

			vaq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(66, 17); cout << "AN ACRONYM IS USUALLY PRONOUNCED AS...";
				gotoxy(64, 24); cout << "A WORD";
				gotoxy(104, 24); cout << "LETTERS";
				gotoxy(63, 30); cout << "A PHRASE";
				gotoxy(103, 30); cout << "A SENTENCE";
				gotoxy(96, 36); cin >> va4;

				switch (va4)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(64, 24); cout << "A WORD";
					SetConsoleTextAttribute(color, 14);
					va4score = 415;
					va4c = 1;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "A PHRASE";
					SetConsoleTextAttribute(color, 14);
					va4score = 0;
					va4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "LETTERS";
					SetConsoleTextAttribute(color, 14);
					va4score = 0;
					va4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "A SENTENCE";
					SetConsoleTextAttribute(color, 14);
					va4score = 0;
					va4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq4;
				}
				}
				getch();
				system("cls");

			vaq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(37, 17); cout << "THE NEW MANAGER WANTS TO BRING ABOUT CHANGES BECAUSE HE THINKS THE COMPANY HAS BEEN RUN ________";
				gotoxy(64, 24); cout << "VERY WELL";
				gotoxy(101, 24); cout << "VERY SMOOTHLY";
				gotoxy(63, 30); cout << "VERY POORLY";
				gotoxy(101, 30); cout << "VERY STRONGLY";
				gotoxy(96, 36); cin >> va5;

				switch (va5)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(63, 30); cout << "VERY POORLY";
					SetConsoleTextAttribute(color, 14);
					va5score = 420;
					va5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(101, 24); cout << "VERY SMOOTHLY";
					SetConsoleTextAttribute(color, 14);
					va5score = 0;
					va5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "VERY WELL";
					SetConsoleTextAttribute(color, 14);
					va5score = 0;
					va5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "VERY STRONGLY";
					va5score = 0;
					va5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq5;
				}
				}
				getch();
				system("cls");

			vaq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(72, 17); cout << "THE SYNONYM OF  KIND IS...";
				gotoxy(66, 24); cout << "NICE";
				gotoxy(105, 24); cout << "WILD";
				gotoxy(65, 30); cout << "FUNNY";
				gotoxy(105, 30); cout << "BEST";
				gotoxy(96, 36); cin >> va6;

				switch (va6)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(66, 24); cout << "NICE";
					SetConsoleTextAttribute(color, 14);
					va6score = 425;
					va6c = 1;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "FUNNY";
					SetConsoleTextAttribute(color, 14);
					va6score = 0;
					va6c = 0;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "WILD";
					SetConsoleTextAttribute(color, 14);
					va6score = 0;
					va6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "BEST";
					SetConsoleTextAttribute(color, 14);
					va6score = 0;
					va6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq6;
				}
				}
				getch();
				system("cls");

			vaq7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(65, 17); cout << "I __________ TENNIS EVERY SUNDAY MORNING.";
				gotoxy(65, 24); cout << "PLAYING";
				gotoxy(105, 24); cout << "PLAY";
				gotoxy(64, 30); cout << "AM PLAYING";
				gotoxy(104, 30); cout << "AM PLAY";
				gotoxy(96, 36); cin >> va7;

				switch (va7)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "PLAY";
					SetConsoleTextAttribute(color, 14);
					va7score = 430;
					va7c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "PLAYING";
					SetConsoleTextAttribute(color, 14);
					va7score = 0;
					va7c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "AM PLAYING";
					SetConsoleTextAttribute(color, 14);
					va7score = 0;
					va7c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "AM PLAY";
					SetConsoleTextAttribute(color, 14);
					va7score = 0;
					va7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq7;
				}
				}
				getch();
				system("cls");

			vaq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "WHAT IS THE ANTONYM OF REPAIR?";
				gotoxy(65, 24); cout << "BREAK";
				gotoxy(105, 24); cout << "PLAY";
				gotoxy(65, 30); cout << "MOVE";
				gotoxy(105, 30); cout << "SEND";
				gotoxy(96, 36); cin >> va8;

				switch (va8)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "BREAK";
					SetConsoleTextAttribute(color, 14);
					va8score = 435;
					va8c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "PLAY";
					SetConsoleTextAttribute(color, 14);
					va8score = 0;
					va8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "MOVE";
					SetConsoleTextAttribute(color, 14);
					va8score = 0;
					va8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "SEND";
					SetConsoleTextAttribute(color, 14);
					va8score = 0;
					va8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq8;
				}
				}
				getch();
				system("cls");

			vaq9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(66, 17); cout << "YOU LOOK A LITTLE DOWN IN THE DUMPS.";
				gotoxy(58, 24); cout << "YOU ARE LOOKING DOWN.";
				gotoxy(101, 24); cout << "YOU LOOK ANGRY.";
				gotoxy(62, 30); cout << "YOU LOOK SAD.";
				gotoxy(101, 30); cout << "YOU LOOK GREAT.";
				gotoxy(96, 36); cin >> va9;

				switch (va9)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(62, 30); cout << "YOU LOOK SAD.";
					SetConsoleTextAttribute(color, 14);
					va9score = 440;
					va9c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(58, 24); cout << "YOU ARE LOOKING DOWN.";
					SetConsoleTextAttribute(color, 14);
					va9score = 0;
					va9c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(101, 24); cout << "YOU LOOK ANGRY.";
					SetConsoleTextAttribute(color, 14);
					va9score = 0;
					va9c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "YOU LOOK GREAT.";
					SetConsoleTextAttribute(color, 14);
					va9score = 0;
					va9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq9;
				}
				}
				getch();
				system("cls");

			vaq10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(75, 17); cout << "WHICH ONE IS CORRECT?";
				gotoxy(64, 24); cout << "NECCESSARY";
				gotoxy(103, 24); cout << "NECESSARY";
				gotoxy(65, 30); cout << "NECESARY";
				gotoxy(103, 30); cout << "NECCESARY";
				gotoxy(96, 36); cin >> va10;

				switch (va10)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(103, 24); cout << "NECESSARY";
					SetConsoleTextAttribute(color, 14);
					va10score = 445;
					va10c = 1;
					break;
				}

				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "NECCESARY";
					SetConsoleTextAttribute(color, 14);
					va10score = 0;
					va10c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "NECCESSARY";
					SetConsoleTextAttribute(color, 14);
					va10score = 0;
					va10c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "NECESARY";
					SetConsoleTextAttribute(color, 14);
					va10score = 0;
					va10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vaq10;
				}
				}
				getch();
				system("cls");

			resultva:

				vaaverage = va1score + va2score + va3score + va4score + va5score + va6score + va7score + va8score + va9score + va10score;
				vactotal = va1c + va2c + va3c + va4c + va5c + va6c + va7c + va8c + va9c + va10c;

				ofstream file;
				file.open("Vocabularyhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Vocabulary";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Easy Score Result: " << veaverage << "\n";
				file << "Correct Answer/s: " << vectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Average Score Result: " << vaaverage << "\n";
				file << "Correct Answer/s: " << vactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Difficult Score Result: " << vdaverage << "\n";
				file << "Correct Answer/s: " << vdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(78, 19); cout << "A V E R A G E";
				gotoxy(82, 23); cout << vaaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) {

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto vdlevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;

						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						vegameh();

						gotoxy(19, 9); cout << usern;
						gotoxy(46, 9); cout << "VOCABULARY";
						gotoxy(78, 9); cout << "AVERAGE";
						gotoxy(120, 9); cout << vactotal << " / 10";
						gotoxy(140, 9); cout << vaaverage;

						//1
						switch (va1)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 16); cout << "LOOK AFTER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 16); cout << "LOOK";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 16); cout << "LOOK UP";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 16); cout << "LOOK DOWN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va2)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 24); cout << "SWITCH ON";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 24); cout << "SWITCH ";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 24); cout << "SWITCH OVER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 24); cout << "SWITCH DOWN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va3)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 32); cout << "NIECE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 32); cout << "NEPHEW";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 32); cout << "SISTER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 32); cout << "SISTER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}


						switch (va4)
						{
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(18, 40); cout << "A WORD";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 40); cout << "LETTERS";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 40); cout << "A PHRASE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(18, 40); cout << "A SENTENCE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}


						switch (va5)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 16); cout << "VERY POORLY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 16); cout << "VERY WELL";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 16); cout << "VERY SMOOTHLY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 16); cout << "VERY STRONGLY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va6)
						{
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 24); cout << "NICE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 24); cout << "WILD";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 24); cout << "FUNNY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 24); cout << "BEST";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va7)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 32); cout << "PLAY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 32); cout << "PLAYING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 32); cout << "AM PLAYING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 32); cout << "AM PLAY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va8)
						{
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(77, 40); cout << "BREAK";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'B':
						case 'b': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 40); cout << "PLAY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 40); cout << "MOVE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(77, 40); cout << "SEND";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va9)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(127, 16); cout << "YOU LOOK SAD.";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 17); cout << "YOU ARE LOOKING DOWN.";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 17); cout << "YOU LOOK ANGRY.";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 17); cout << "YOU LOOK GREAT.";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (va10)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(127, 25); cout << "NECESSARY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 25); cout << "NECCESSARY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 25); cout << "NECESARY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(127, 25); cout << "NECCESARY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						if (vactotal<7)
						{
							gotoxy(123, 32); cout << "BETTER LUCK NEXT TIME " << usern;

						}
						else if (vectotal>7 && vectotal<10)
						{
							gotoxy(130, 32); cout << "GOOD JOB " << usern;
						}

						getch();
						system("cls");
						goto resultva;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultva;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP

				break;
			} //end of Vocab ave

			case 3:
			{
				system("cls");
			vdlevel:

			vdq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(46, 17); cout << "IN CONTRACTIONS OF MORE THAN ONE WORD, MISSING LETTERS ARE REPLACED BY _________";
				gotoxy(63, 24); cout << "A FULL STOP";
				gotoxy(103, 24); cout << "A COMMA";
				gotoxy(62, 30); cout << "AN APOSTROPHE";
				gotoxy(103, 30); cout << "A PERIOD";
				gotoxy(96, 36); cin >> vd1;

				switch (vd1)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(62, 30); cout << "AN APOSTROPHE";
					SetConsoleTextAttribute(color, 14);
					vd1score = 500;
					vd1c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "A COMMA";
					SetConsoleTextAttribute(color, 14);
					vd1score = 0;
					vd1c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(63, 24); cout << "A FULL STOP";
					SetConsoleTextAttribute(color, 14);
					vd1score = 0;
					vd1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "A PERIOD";
					SetConsoleTextAttribute(color, 14);
					vd1score = 0;
					vd1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vdq1;
				}
				}
				getch();
				system("cls");

			vdq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(50, 17); cout << "EVERYONE THOUGHT SIMONE WOULD LOSE THE GAME, AND THEN SHE BROUGHT OFF...";
				gotoxy(63, 24); cout << "A BIG LOSS";
				gotoxy(101, 24); cout << "A GREAT VICTORY";
				gotoxy(62, 30); cout << "A WEAK EFFORT";
				gotoxy(103, 30); cout << "A SAD LIFE";
				gotoxy(96, 36); cin >> vd2;

				switch (vd2)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(101, 24); cout << "A GREAT VICTORY";
					SetConsoleTextAttribute(color, 14);
					vd2score = 505;
					vd2c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(63, 24); cout << "A BIG LOSS";
					vd2score = 0;
					vd2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(62, 30); cout << "A WEAK EFFORT";
					SetConsoleTextAttribute(color, 14);
					vd2score = 0;
					vd2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "A SAD LIFE";
					SetConsoleTextAttribute(color, 14);
					vd2score = 0;
					vd2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vdq2;
				}
				}
				getch();
				system("cls");

			vdq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(56, 17); cout << "SORRY, YOU CAN'T BORROW MY PENCIL. I __________ IT MYSELF.";
				gotoxy(64, 24); cout << "WAS USING";
				gotoxy(104, 24); cout << "USING";
				gotoxy(67, 30); cout << "USE";
				gotoxy(103, 30); cout << "AM USING";
				gotoxy(96, 36); cin >> vd3;

				switch (vd3)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(103, 30); cout << "AM USING";
					SetConsoleTextAttribute(color, 14);
					vd3score = 510;
					vd3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "WAS USING";
					SetConsoleTextAttribute(color, 14);
					vd3score = 0;
					vd3c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "USING";
					SetConsoleTextAttribute(color, 14);
					vd3score = 0;
					vd3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(67, 30); cout << "USE";
					SetConsoleTextAttribute(color, 14);
					vd3score = 0;
					vd3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vdq3;
				}
				}
				getch();
				system("cls");

			vdq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(68, 17); cout << "WHAT IS THE SYNONYM OF CONTEMPLATE?";
				gotoxy(66, 24); cout << "LEARN";
				gotoxy(105, 24); cout << "STUDY";
				gotoxy(66, 30); cout << "THINK";
				gotoxy(105, 30); cout << "FORGET";
				gotoxy(96, 36); cin >> vd4;

				switch (vd4)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(66, 30); cout << "THINK";
					SetConsoleTextAttribute(color, 14);
					vd4score = 515;
					vd4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "LEARN";
					SetConsoleTextAttribute(color, 14);
					vd4score = 0;
					vd4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "STUDY";
					SetConsoleTextAttribute(color, 14);
					vd4score = 0;
					vd4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "FORGET";
					SetConsoleTextAttribute(color, 14);
					vd4score = 0;
					vd4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vdq4;
				}
				}
				getch();
				system("cls");

			vdq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(68, 17); cout << "WHICH ONE IS THE CORRECT SPELLING?";
				gotoxy(65, 24); cout << "MANUVER";
				gotoxy(104, 24); cout << "MANEUVER";
				gotoxy(64, 30); cout << "MANEUVERE";
				gotoxy(104, 30); cout << "MANNEUVER";
				gotoxy(96, 36); cin >> vd5;

				switch (vd5)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "MANEUVER";
					SetConsoleTextAttribute(color, 14);
					vd5score = 520;
					vd5c = 1;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "MANNEUVER";
					SetConsoleTextAttribute(color, 14);
					vd5score = 0;
					vd5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "MANEUVERE";
					SetConsoleTextAttribute(color, 14);
					vd5score = 0;
					vd5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "MANUVER";
					vd5score = 0;
					vd5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto vdq5;
				}
				}
				getch();
				system("cls");


			resultvd:

				vdaverage = vd1score + vd2score + vd3score + vd4score + vd5score;
				vdctotal = vd1c + vd2c + vd3c + vd4c + vd5c;

				ofstream file;
				file.open("Vocabularyhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Vocabulary";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Easy Score Result: " << veaverage << "\n";
				file << "Correct Answer/s: " << vectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Average Score Result: " << vaaverage << "\n";
				file << "Correct Answer/s: " << vactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Difficult Score Result: " << vdaverage << "\n";
				file << "Correct Answer/s: " << vdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				reschooseleveld();
				moreoptionsd();
				gotoxy(76, 19); cout << "D I F F I C U L T";
				gotoxy(82, 23); cout << vdaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						reschooseleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						reschooseleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto vocabgame;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;

						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						vdgameh();

						gotoxy(19, 10); cout << usern;
						gotoxy(46, 10); cout << "VOCABULARY";
						gotoxy(78, 10); cout << "DIFFICULT";
						gotoxy(120, 10); cout << vdctotal << " / 5";
						gotoxy(140, 10); cout << vdaverage;

						//1
						switch (vd1)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(22, 18); cout << "AN APOSTROPHE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 18); cout << "A FULL STOP";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 18); cout << "A COMMA";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 18); cout << "A PERIOD";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (vd2)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(101, 18); cout << "A GREAT VICTORY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(101, 18); cout << "A BIG LOSS ";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(101, 18); cout << "A WEAK EFFORT";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(101, 18); cout << "A SAD LIFE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (vd3)
						{
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(22, 27); cout << "AM USING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 27); cout << "WAS USING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 27); cout << "USE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 27); cout << "USING";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}


						switch (vd4)
						{
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(101, 27); cout << "THINK";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(101, 27); cout << "LEARN";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(101, 27); cout << "STUDY";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(101, 27); cout << "FORGET";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						}

						switch (vd5)
						{
						case 'b':
						case 'B': {
							SetConsoleTextAttribute(color, 10);
							gotoxy(22, 36); cout << "MANEUVER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'a':
						case 'A': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 36); cout << "MANUVER";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'c':
						case 'C': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 36); cout << "MANEUVERE";
							SetConsoleTextAttribute(color, 14);
							break;
						}
						case 'd':
						case 'D': {
							SetConsoleTextAttribute(color, 12);
							gotoxy(22, 36); cout << "MANNEUVER";
							SetConsoleTextAttribute(color, 14);
							break;
						}


						}

						if (vdctotal<2)
						{
							gotoxy(77, 36); cout << "BETTER LUCK NEXT TIME " << usern;

						}
						else if (vdctotal>2 && vdctotal<5)
						{
							gotoxy(77, 36); cout << "GOOD JOB " << usern;
						}

						getch();
						system("cls");
						goto resultvd;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultvd;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				break;
			}
			} //end of vocab game
			break;
		}

		case 2: //IF "Technology" was choosen
		{
			system("cls");

		techgame:

			level = 0;

			chooselevel();
			easy();
			average();
			difficult();

			while (gamel != 1) {
				int v = 0;
				if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

					switch ((v = _getch()))
					{
					case KEY_LEFT:
						if (level == 1)
						{
						}
						else
						{
							level -= 1;
						}
						break;
					case KEY_RIGHT:
						if (level == 3)
						{
						}
						else
						{
							level += 1;
						}
						break;

					case ENTER:
						if (level == 0) {
							continue;
						}
						else {
							gamel = 1;
							continue;
						}
						break;
					}
				}

				switch (level) //Highlights the Switch for the Game Options in the Level Page
				{
				case 1:
					SetConsoleTextAttribute(color, 11);
					easy();
					SetConsoleTextAttribute(color, 14);
					average();
					difficult();
					SetConsoleTextAttribute(color, 14);
					break;
				case 2:
					SetConsoleTextAttribute(color, 11);
					average();
					SetConsoleTextAttribute(color, 14);
					easy();
					difficult();
					SetConsoleTextAttribute(color, 14);
					break;
				case 3:
					SetConsoleTextAttribute(color, 11);
					difficult();
					SetConsoleTextAttribute(color, 14);
					easy();
					average();
					SetConsoleTextAttribute(color, 14);
					break;
				}
			}

			if (level != 1 && level != 3) {}
			else
			{
				gamel = 1;
			} gamel = 0;

			switch (level)
			{
			case 1: //easy
			{
				system("cls");
			televel:
			teq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(35, 17); cout << "WHAT DO YOU CALL A COLLECTION OF TWO OR  MORE COMPUTER THAT ARE LOCATED WITHIN A LIMITED DISTANCE OF ";
				gotoxy(49, 18); cout << "EACH OTHER AND THAT ARE CONNECTED TO EACH OTHER DIRECTLY OR INDIRECTLY?";
				gotoxy(62, 24); cout << "INTERNET";
				gotoxy(103, 24); cout << "INTERANET";
				gotoxy(58, 30); cout << " LOCAL AREA NETWORK";
				gotoxy(97, 30); cout << " WIDE AREA NETWORK";
				gotoxy(96, 36); cin >> te1;

				switch (te1)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(58, 30); cout << " LOCAL AREA NETWORK";
					SetConsoleTextAttribute(color, 14);
					te1score = 300;
					te1c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(62, 24); cout << "INTERNET";
					SetConsoleTextAttribute(color, 14);
					te1score = 0;
					te1c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "INTERANET";
					SetConsoleTextAttribute(color, 14);
					te1score = 0;
					te1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(97, 30); cout << " WIDE AREA NETWORK";
					SetConsoleTextAttribute(color, 14);
					te1score = 0;
					te1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq1;
				}
				}
				getch();
				system("cls");

			teq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "'.jpeg'EXTENSION REFERS USUALLY TO WHAT KIND OF FILE";
				gotoxy(61, 24); cout << " SYSTEM FILE";
				gotoxy(97, 24); cout << "ANIMATION / MOVIE FILE";
				gotoxy(59, 30); cout << "MS ENCARTA DOCUMENT";
				gotoxy(102, 30); cout << "IMAGE FILE";
				gotoxy(96, 36); cin >> te2;

				switch (te2)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(102, 30); cout << "IMAGE FILE";
					SetConsoleTextAttribute(color, 14);
					te2score = 305;
					te2c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(61, 24); cout << " SYSTEM FILE";
					SetConsoleTextAttribute(color, 14);
					te2score = 0;
					te2c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(97, 24); cout << "ANIMATION / MOVIE FILE";
					SetConsoleTextAttribute(color, 14);
					te2score = 0;
					te2c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(59, 30); cout << "MS ENCARTA DOCUMENT";
					SetConsoleTextAttribute(color, 14);
					te2score = 0;
					te2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq2;
				}
				}
				getch();
				system("cls");

			teq3:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(68, 17); cout << "FIREWALL IN COMPUTER IS USED FOR ?";
				gotoxy(64, 24); cout << "SECURITY";
				gotoxy(99, 24); cout << "DATA TRANSMISSION";
				gotoxy(61, 30); cout << "AUTHENTICATION";
				gotoxy(102, 30); cout << "MONITORING";
				gotoxy(96, 36); cin >> te3;

				switch (te3)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(64, 24); cout << "SECURITY";
					SetConsoleTextAttribute(color, 14);
					te3score = 310;
					te3c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(99, 24); cout << "DATA TRANSMISSION";
					SetConsoleTextAttribute(color, 14);
					te3score = 0;
					te3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(61, 30); cout << "AUTHENTICATION";
					SetConsoleTextAttribute(color, 14);
					te3score = 0;
					te3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "MONITORING";
					SetConsoleTextAttribute(color, 14);
					te3score = 0;
					te3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq3;
				}
				}
				getch();
				system("cls");

			teq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(62, 17); cout << "MAC OPERATING SYSTEM IS DEVELOP BY WHICH COMPANY";
				gotoxy(67, 24); cout << "IMB";
				gotoxy(105, 24); cout << "APPLE";
				gotoxy(63, 30); cout << "MICROSOFT";
				gotoxy(104, 30); cout << "SAMSUNG";
				gotoxy(96, 36); cin >> te4;

				switch (te4)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "APPLE";
					SetConsoleTextAttribute(color, 14);
					te4score = 315;
					te4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(67, 24); cout << "IMB";
					SetConsoleTextAttribute(color, 14);
					te4score = 0;
					te4c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "MICROSOFT";
					SetConsoleTextAttribute(color, 14);
					te4score = 0;
					te4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "SAMSUNG";
					SetConsoleTextAttribute(color, 14);
					te4score = 0;
					te4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq4;
				}
				}
				getch();
				system("cls");

			teq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(63, 17); cout << "'OS' COMPUTER ABBREVIATION USUALLY MEANS";
				gotoxy(58, 24); cout << "ORDER OF SIGNIFICANCE";
				gotoxy(101, 24); cout << "OPEN SOFTWARE";
				gotoxy(60, 30); cout << "OPERATING SYSTEM";
				gotoxy(101, 30); cout << "OPTICAL SENSOR";
				gotoxy(96, 36); cin >> te5;

				switch (te5)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(60, 30); cout << "OPERATING SYSTEM";
					te5score = 320;
					te5c = 1;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(58, 24); cout << "ORDER OF SIGNIFICANCE";
					SetConsoleTextAttribute(color, 14);
					te5score = 0;
					te5c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(101, 24); cout << "OPEN SOFTWARE";
					SetConsoleTextAttribute(color, 14);
					te5score = 0;
					te5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "OPTICAL SENSOR";
					SetConsoleTextAttribute(color, 14);
					te5score = 0;
					te5c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq5;
				}
				}
				getch();
				system("cls");

			teq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "'.MOV' EXTENSION REFERS USUALLY TO WHAT KIND OF FILE";
				gotoxy(63, 24); cout << "IMAGE FILE";
				gotoxy(98, 24); cout << "ANIMATION/MOVIE FILE";
				gotoxy(63, 30); cout << "AUDIO FILE";
				gotoxy(98, 30); cout << "MS OFFICE DOCUMENT";
				gotoxy(96, 36); cin >> te6;

				switch (te6)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(98, 24); cout << "ANIMATION/MOVIE FILE";
					SetConsoleTextAttribute(color, 14);
					te6score = 325;
					te6c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(63, 24); cout << "IMAGE FILE";
					SetConsoleTextAttribute(color, 14);
					te6score = 0;
					te6c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "AUDIO FILE";
					SetConsoleTextAttribute(color, 14);
					te6score = 0;
					te6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(98, 30); cout << "MS OFFICE DOCUMENT";
					SetConsoleTextAttribute(color, 14);
					te6score = 0;
					te6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq6;
				}
				}
				getch();
				system("cls");

			teq7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(63, 17); cout << "MOST MODERN TV's DRAW POWER EVEN IF TURNED OFF.";
				gotoxy(61, 18); cout << "THE CURCUIT THE POWER IS USED IN DOES NOT FUNCTION";
				gotoxy(65, 24); cout << "SOUNDS";
				gotoxy(101, 24); cout << "REMOTE CONTROL";
				gotoxy(62, 30); cout << "COLOR BALNCE";
				gotoxy(101, 30); cout << "HIGH VOLTAGE";
				gotoxy(96, 36); cin >> te7;

				switch (te7)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(101, 24); cout << "REMOTE CONTROL";
					te7score = 330;
					te7c = 1;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "SOUNDS";
					SetConsoleTextAttribute(color, 14);
					te7score = 0;
					te7c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(62, 30); cout << "COLOR BALNCE";
					SetConsoleTextAttribute(color, 14);
					te7score = 0;
					te7c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "HIGH VOLTAGE";
					SetConsoleTextAttribute(color, 14);
					te7score = 0;
					te7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq7;
				}
				}
				getch();
				system("cls");

			teq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(67, 17); cout << "IN COMPUTER WORLD, TROJAN REFERS TO";
				gotoxy(65, 24); cout << "VIRUS";
				gotoxy(104, 24); cout << "MALWARE";
				gotoxy(65, 30); cout << "WORM";
				gotoxy(103, 30); cout << "SPYWARE";
				gotoxy(96, 36); cin >> te8;

				switch (te8)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "VIRUS";
					SetConsoleTextAttribute(color, 14);
					te8score = 335;
					te8c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "MALWARE";
					SetConsoleTextAttribute(color, 14);
					te8score = 0;
					te8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "WORM";
					SetConsoleTextAttribute(color, 14);
					te8score = 0;
					te8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "SPYWARE";
					SetConsoleTextAttribute(color, 14);
					te8score = 0;
					te8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq8;
				}
				}

				getch();
				system("cls");

			teq9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();
				gotoxy(60, 17); cout << "WHICH ONE IS A 'TEXT EDITOR' FOR MICROSOFT WINDOWS";
				gotoxy(65, 24); cout << "MS WORD";
				gotoxy(104, 24); cout << "MS EXCEL";
				gotoxy(65, 30); cout << "WORD PAD";
				gotoxy(104, 30); cout << "NOTEPAD";
				gotoxy(96, 36); cin >> te9;

				switch (te9)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "NOTEPAD";
					SetConsoleTextAttribute(color, 14);
					te9score = 340;
					te9c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "MS WORD";
					SetConsoleTextAttribute(color, 14);
					te9score = 0;
					te9c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "MS EXCEL";
					SetConsoleTextAttribute(color, 14);
					te9score = 0;
					te9c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "WORD PAD";
					SetConsoleTextAttribute(color, 14);
					te9score = 0;
					te9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq9;
				}
				}
				getch();
				system("cls");

			teq10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "WHAT YEAR WAS THE IPHONE RELEASE?";
				gotoxy(65, 24); cout << "2007";
				gotoxy(105, 24); cout << "2000";
				gotoxy(65, 30); cout << "1987";
				gotoxy(105, 30); cout << "2010";
				gotoxy(96, 36); cin >> te10;

				switch (te10)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "2007";
					SetConsoleTextAttribute(color, 14);
					te10score = 345;
					te10c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "2000";
					SetConsoleTextAttribute(color, 14);
					te10score = 0;
					te10c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "1987";
					SetConsoleTextAttribute(color, 14);
					te10score = 0;
					te10c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "2010";
					SetConsoleTextAttribute(color, 14);
					te10score = 0;
					te10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto teq10;
				}
				}
				getch();
				system("cls");

				teaverage = te1score + te2score + te3score + te4score + te5score + te6score + te7score + te8score + te9score + te10score;
				tectotal = te1c + te2c + te3c + te4c + te5c + te6c + te7c + te8c + te9c + te10c;

				ofstream file;
				file.open("Techhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Technology";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Easy Score Result: " << teaverage << "\n";
				file << "Correct Answer/s: " << tectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Average Score Result: " << taaverage << "\n";
				file << "Correct Answer/s: " << tactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Difficult Score Result: " << tdaverage << "\n";
				file << "Correct Answer/s: " << tdctotal << " / 5 \n";
				file << "-------------------------------------";

				file.close();

			resultte:
				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(81, 19); cout << "E A S Y";
				gotoxy(82, 23); cout << teaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{

								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;


					switch (resoption) //Highlights the Switch for the Game Options in the Settings Page
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto tavelevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged();
					chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{

									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the More Options 
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;

						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;

						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;

						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "TECHNOLOGY";
						gotoxy(78, 16); cout << "EASY";
						gotoxy(120, 16); cout << tectotal << " / 10";
						gotoxy(140, 16); cout << teaverage;

						getch();
						system("cls");
						goto resultte;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;

						system("cls");
						goto menu;
						break;
					}
					case 4:
					{
						system("cls");
						goto resultte;
						break;
					}

					} //ENd switch for More Options options

					break;
				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				getch();
				system("cls");

				break;
			}// END of Technology Easyyyyyyyyyyyyyyyyyyyy

			case 2: //average
			{
				system("cls");

			tavelevel:

			taq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(39, 17); cout << "AN ELECTRONIC DEVICE FOR STORING ANDP ROCCESING DATA, TYPICALY IN BINARY FORM, ACCORDING TO";
				gotoxy(64, 18); cout << "INSTRUNCTION GIVEN TO IN IT VARIABLE PROGRAM";
				gotoxy(64, 24); cout << "COMPUTER";
				gotoxy(105, 24); cout << "PHONE";
				gotoxy(65, 30); cout << "LAPTOP";
				gotoxy(104, 30); cout << "PROGRAM";
				gotoxy(96, 36); cin >> ta1;

				switch (ta1)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(64, 24); cout << "COMPUTER";
					SetConsoleTextAttribute(color, 14);
					ta1score = 400;
					ta1c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "PHONE";
					SetConsoleTextAttribute(color, 14);
					ta1score = 0;
					ta1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "LAPTOP";
					SetConsoleTextAttribute(color, 14);
					ta1score = 0;
					ta1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "PROGRAM";
					SetConsoleTextAttribute(color, 14);
					ta1score = 0;
					ta1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq1;
				}
				}
				getch();
				system("cls");

			taq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(63, 17); cout << "WHICH ONE IS THE FIRST BROWER INVENTED IN 1990?";
				gotoxy(60, 24); cout << "INTERNET EXPLORER";
				gotoxy(104, 24); cout << "mosaic";
				gotoxy(65, 30); cout << "mozilla";
				gotoxy(104, 30); cout << "nexus";
				gotoxy(96, 36); cin >> ta2;

				switch (ta2)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "nexus";
					SetConsoleTextAttribute(color, 14);
					ta2score = 405;
					ta2c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(60, 24); cout << "INTERNET EXPLORER";
					SetConsoleTextAttribute(color, 14);
					ta2score = 0;
					ta2c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "mosaic";
					SetConsoleTextAttribute(color, 14);
					ta2score = 0;
					ta2c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "mozilla";
					SetConsoleTextAttribute(color, 14);
					ta2score = 0;
					ta2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq2;
				}
				}

				getch();
				system("cls");

			taq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(52, 17); cout << "IT IS THE WORLD'S LARGETS ELECTRONIC DEVICE CREATED IN SOUTH KOREA";
				gotoxy(65, 24); cout << "SAMSUNG";
				gotoxy(104, 24); cout << "HUAWEI";
				gotoxy(63, 30); cout << "HANWHA SEOUL";
				gotoxy(102, 30); cout << "KIA MOTORS";
				gotoxy(96, 36); cin >> ta3;

				switch (ta3)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "SAMSUNG";
					SetConsoleTextAttribute(color, 14);
					ta3score = 410;
					ta3c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "HUAWEI";
					SetConsoleTextAttribute(color, 14);
					ta3score = 0;
					ta3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "HANWHA SEOUL";
					SetConsoleTextAttribute(color, 14);
					ta3score = 0;
					ta3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "KIA MOTORS";
					SetConsoleTextAttribute(color, 14);
					ta3score = 0;
					ta3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq3;
				}
				}
				getch();
				system("cls");

			taq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "FIRST COMPUTER VIRUS KNOWN AS?\n";
				gotoxy(65, 24); cout << "RABBIT";
				gotoxy(101, 24); cout << "CREEPER VIRUS";
				gotoxy(63, 30); cout << "ELK CLONER";
				gotoxy(103, 30); cout << "SCA VIRUS";
				gotoxy(96, 36); cin >> ta4;

				switch (ta4)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(101, 24); cout << "CREEPER VIRUS";
					SetConsoleTextAttribute(color, 14);
					ta4score = 415;
					ta4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "RABBIT";
					SetConsoleTextAttribute(color, 14);
					ta4score = 0;
					ta4c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "ELK CLONER";
					SetConsoleTextAttribute(color, 14);
					ta4score = 0;
					ta4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "SCA VIRUS";
					SetConsoleTextAttribute(color, 14);
					ta4score = 0;
					ta4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq4;
				}
				}
				getch();
				system("cls");

			taq5:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(65, 17); cout << "WHAT COUNTRY DOES THE INTERNET CAME FROM?";
				gotoxy(65, 24); cout << "TEXAS";
				gotoxy(104, 24); cout << "RUSSIA";
				gotoxy(65, 30); cout << "INDIA";
				gotoxy(106, 30); cout << "USA";
				gotoxy(96, 36); cin >> ta5;

				switch (ta5)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(106, 30); cout << "USA";
					SetConsoleTextAttribute(color, 14);
					ta5score = 420;
					ta5c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "TEXAS";
					SetConsoleTextAttribute(color, 14);
					ta5score = 0;
					ta5c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "RUSSIA";
					SetConsoleTextAttribute(color, 14);
					ta5score = 0;
					ta5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "INDIA";
					SetConsoleTextAttribute(color, 14);
					ta5score = 0;
					ta5c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq5;
				}
				}
				getch();
				system("cls");

			taq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(74, 17); cout << "WHO DEVELOPED YAHOO?";
				gotoxy(56, 24); cout << "DENNIS RITCHIE & THAMPSON";
				gotoxy(96, 24); cout << "DAVID FILO & JERRY YANG";
				gotoxy(57, 30); cout << "VINT CERF & ROBERT KAHN";
				gotoxy(96, 30); cout << "STEVE CASE & JEFF BEZOS";
				gotoxy(96, 36); cin >> ta6;

				switch (ta6)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(96, 24); cout << "DAVID FILO & JERRY YANG";
					SetConsoleTextAttribute(color, 14);
					ta6score = 425;
					ta6c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(56, 24); cout << "DENNIS RITCHIE & THAMPSON";
					SetConsoleTextAttribute(color, 14);
					ta6score = 0;
					ta6c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(57, 30); cout << "VINT CERF & ROBERT KAHN";
					SetConsoleTextAttribute(color, 14);
					ta6score = 0;
					ta6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(96, 30); cout << "STEVE CASE & JEFF BEZOS";
					SetConsoleTextAttribute(color, 14);
					ta6score = 0;
					ta6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq6;
				}
				}
				getch();
				system("cls");

			taq7:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "WHICH COMPUTER PROGRAM CONVERTS";
				gotoxy(68, 18); cout << "ASSEMBLY LANGUAGE TO MACHINE LANGUAGE";
				gotoxy(62, 24); cout << "INTERPRETER";
				gotoxy(102, 24); cout << "COMPILER";
				gotoxy(63, 30); cout << "ASSEMBLER";
				gotoxy(101, 30); cout << "COMPARATOR";
				gotoxy(96, 36); cin >> ta7;

				switch (ta7)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(63, 30); cout << "ASSEMBLER";
					SetConsoleTextAttribute(color, 14);
					ta7score = 430;
					ta7c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(62, 24); cout << "INTERPRETER";
					SetConsoleTextAttribute(color, 14);
					ta7score = 0;
					ta7c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "COMPILER";
					SetConsoleTextAttribute(color, 14);
					ta7score = 0;
					ta7c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "COMPARATOR";
					SetConsoleTextAttribute(color, 14);
					ta7score = 0;
					ta7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq7;
				}
				}
				getch();
				system("cls");

			taq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "IT IS THE WORLD's THIRD LARGEST SMARTPHONE PRODUCER";
				gotoxy(74, 18); cout << "AFTER SAMSUNG AND APPLE";
				gotoxy(61, 24); cout << "CHERRY MOBILE";
				gotoxy(105, 24); cout << "VIVO";
				gotoxy(65, 30); cout << "NOKIA";
				gotoxy(104, 30); cout << "HUAWEI";
				gotoxy(96, 36); cin >> ta8;

				switch (ta8)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "HUAWEI";
					SetConsoleTextAttribute(color, 14);
					ta8score = 435;
					ta8c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(61, 24); cout << "CHERRY MOBILE";
					SetConsoleTextAttribute(color, 14);
					ta8score = 0;
					ta8c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "VIVO";
					SetConsoleTextAttribute(color, 14);
					ta8score = 0;
					ta8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "NOKIA";
					SetConsoleTextAttribute(color, 14);
					ta8score = 0;
					ta8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq8;
				}
				}
				getch();
				system("cls");

			taq9:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "IT IS THE FIFTH GENERATION WIRELESS TECHNOLOGY FOR";
				gotoxy(58, 18); cout << "DIGITAL CELLULAR NETWORK BEGAN WIDE DEVELOPMENT IN 2019";
				gotoxy(65, 24); cout << "3G";
				gotoxy(106, 24); cout << "5G";
				gotoxy(65, 30); cout << "7G";
				gotoxy(106, 30); cout << "4G";
				gotoxy(96, 36); cin >> ta9;

				switch (ta9)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(106, 24); cout << "5G";
					SetConsoleTextAttribute(color, 14);
					ta9score = 440;
					ta9c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "3G";
					SetConsoleTextAttribute(color, 14);
					ta9score = 0;
					ta9c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "7G";
					SetConsoleTextAttribute(color, 14);
					ta9score = 0;
					ta9c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(106, 30); cout << "4G";
					SetConsoleTextAttribute(color, 14);
					ta9score = 0;
					ta9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq9;
				}
				}
				getch();
				system("cls");

			taq10:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(67, 17); cout << "WHO IS ONE OF THE FOUNDERS OF APPLE?\n";
				gotoxy(62, 24); cout << "STEVE JOBS";
				gotoxy(101, 24); cout << "LEE BYUNG-CHUL";
				gotoxy(62, 30); cout << "MAYNARD NGU";
				gotoxy(101, 30); cout << "ADAM SANDLER";
				gotoxy(96, 36); cin >> ta10;

				switch (ta10)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(62, 24); cout << "STEVE JOBS";
					SetConsoleTextAttribute(color, 14);
					ta10score = 445;
					ta10c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(101, 24); cout << "LEE BYUNG-CHUL";
					SetConsoleTextAttribute(color, 14);
					ta10score = 0;
					ta10c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(62, 30); cout << "MAYNARD NGU";
					SetConsoleTextAttribute(color, 14);
					ta10score = 0;
					ta10c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "ADAM SANDLER";
					SetConsoleTextAttribute(color, 14);
					ta10score = 0;
					ta10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto taq10;
				}
				}
				getch();
				system("cls");


				taaverage = ta1score + ta2score + ta3score + ta4score + ta5score + ta6score + ta7score + ta8score + ta9score + ta10score;
				tactotal = ta1c + ta2c + ta3c + ta4c + ta5c + ta6c + ta7c + ta8c + ta9c + ta10c;

				ofstream file;
				file.open("Techhistory.txt");


				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Technology";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Easy Score Result: " << teaverage << "\n";
				file << "Correct Answer/s: " << tectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Average Score Result: " << taaverage << "\n";
				file << "Correct Answer/s: " << tactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Difficult Score Result: " << tdaverage << "\n";
				file << "Correct Answer/s: " << tdctotal << " / 5 \n";
				file << "-------------------------------------";

				file.close();

			resultta:

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(78, 19); cout << "A V E R A G E";
				gotoxy(82, 23); cout << taaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto tdiflevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) {

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the More Options of the  Game
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;

						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "TECHNOLOGY";
						gotoxy(78, 16); cout << "AVERAGE";
						gotoxy(120, 16); cout << tactotal << " / 10";
						gotoxy(140, 16); cout << taaverage;

						getch();
						system("cls");
						goto resultta;
						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultta;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP

				break;
			}

			case 3:  //difficult
			{
				system("cls");

			tdiflevel:

			tdq1:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(58, 17); cout << "WHICH ONE IS THE FIRST SEARCH ENGINE IN THE INTERNET?";
				gotoxy(65, 24); cout << "GOOGLE";
				gotoxy(104, 24); cout << "ARCHIE";
				gotoxy(63, 30); cout << "ALTAVISTA";
				gotoxy(105, 30); cout << "WAIS";
				gotoxy(96, 36); cin >> td1;

				switch (td1)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "ARCHIE";
					SetConsoleTextAttribute(color, 14);
					td1score = 500;
					td1c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "GOOGLE";
					SetConsoleTextAttribute(color, 14);
					td1score = 0;
					td1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "ALTAVISTA";
					SetConsoleTextAttribute(color, 14);
					td1score = 0;
					td1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "WAIS";
					SetConsoleTextAttribute(color, 14);
					td1score = 0;
					td1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto tdq1;
				}
				}
				getch();
				system("cls");

				//2	
			tdq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(65, 17); cout << "WHAT IS PART OF A DATABASE THAT HOLDS";
				gotoxy(70, 18); cout << "ONLY ONE TYPE OF INFORMATION";
				gotoxy(65, 24); cout << "REPORT";
				gotoxy(104, 24); cout << "FIELD";
				gotoxy(65, 30); cout << "RECORD";
				gotoxy(104, 30); cout << "FILE";
				gotoxy(96, 36); cin >> td2;

				switch (td2)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "FIELD";
					SetConsoleTextAttribute(color, 14);
					td2score = 505;
					td2c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "REPORT";
					SetConsoleTextAttribute(color, 14);
					td2score = 0;
					td2c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "RECORD";
					SetConsoleTextAttribute(color, 14);
					td2score = 0;
					td2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "FILE";
					SetConsoleTextAttribute(color, 14);
					td2score = 0;
					td2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto tdq2;
				}
				}
				getch();
				system("cls");


				//3
			tdq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "1024 BIT IS EQUAL TO HOW MANY ?";
				gotoxy(65, 24); cout << "1 BYTE";
				gotoxy(104, 24); cout << "128 BYTE";
				gotoxy(65, 30); cout << "32 BYTE";
				gotoxy(104, 30); cout << "64 BYTE";
				gotoxy(96, 36); cin >> td3;

				switch (td3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "128 BYTE";
					SetConsoleTextAttribute(color, 14);
					td3score = 510;
					td3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "1 BYTE";
					SetConsoleTextAttribute(color, 14);
					td3score = 0;
					td3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "32 BYTE";
					SetConsoleTextAttribute(color, 14);
					td3score = 0;
					td3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "64 BYTE";
					SetConsoleTextAttribute(color, 14);
					td3score = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto tdq3;
				}
				}
				getch();
				system("cls");


				//4
			tdq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(70, 17); cout << "WHEN WAS THE INTERNET CREATED?";
				gotoxy(65, 24); cout << "1990";
				gotoxy(104, 24); cout << "1960";
				gotoxy(65, 30); cout << "1983";
				gotoxy(104, 30); cout << "1982";
				gotoxy(96, 36); cin >> td4;

				switch (td4)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(65, 30); cout << "1983";
					SetConsoleTextAttribute(color, 14);
					td4score = 515;
					td4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "1990";
					SetConsoleTextAttribute(color, 14);
					td4score = 0;
					td4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "1960";
					SetConsoleTextAttribute(color, 14);
					td4score = 0;
					td4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "1982";
					SetConsoleTextAttribute(color, 14);
					td4score = 0;
					td4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto tdq4;
				}
				}
				getch();
				system("cls");

				//5	
			tdq5:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(45, 17); cout << "WHAT COMPANY IS RANKED AS THE WORLD MOST SUCCESSFUL TECHNOLOGY COMPANY WORLDWIDE? \n";
				gotoxy(64, 24); cout << "MICROSOFT";
				gotoxy(105, 24); cout << "APPLE";
				gotoxy(65, 30); cout << "SAMSUNG";
				gotoxy(101, 30); cout << "CHERRY MOBILE";
				gotoxy(96, 36); cin >> td5;

				switch (td5)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "APPLE";
					SetConsoleTextAttribute(color, 14);
					td5score = 520;
					td5c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "MICROSOFT";
					SetConsoleTextAttribute(color, 14);
					td5score = 0;
					td5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "SAMSUNG";
					SetConsoleTextAttribute(color, 14);
					td5score = 0;
					td5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "CHERRY MOBILE";
					SetConsoleTextAttribute(color, 14);
					td5score = 0;
					td5c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto tdq5;
				}
				}
				getch();
				system("cls");

				tdaverage = td1score + td2score + td3score + td4score + td5score;
				tdctotal = td1c + td2c + td3c + td4c + td5c;

				ofstream file;
				file.open("Techhistory.txt");


				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Technology";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Easy Score Result: " << teaverage << "\n";
				file << "Correct Answer/s: " << tectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Average Score Result: " << taaverage << "\n";
				file << "Correct Answer/s: " << tactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Technology Difficult Score Result: " << tdaverage << "\n";
				file << "Correct Answer/s: " << tdctotal << " / 5 \n";
				file << "-------------------------------------";

				file.close();

			resulttd:
				gresult();
				reschooseleveld();
				moreoptionsd();
				gotoxy(76, 19); cout << "D I F F I C U L T";
				gotoxy(82, 23); cout << tdaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{

								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Game Options in the Settings Page
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						reschooseleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						reschooseleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto techgame;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged();
					chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{

									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;

						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;

						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;

						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "TECHNOLOGY";
						gotoxy(78, 16); cout << "DIFFICULT";
						gotoxy(120, 16); cout << tdctotal << " / 5";
						gotoxy(140, 16); cout << tdaverage;

						getch();
						system("cls");
						goto resulttd;
						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, theme = 0, sounds = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;

						system("cls");
						goto menu;
						//homeoptions();
						break;
					}
					case 4:
					{
						system("cls");
						goto resulttd;
					}

					} //ENd switch for More Options options

					break;
				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				break;
			}
			}
			break;
		}
		case 3: //If "RIddles" was choosen
		{
			system("cls");

		riddlesgame:

			level = 0;

			chooselevel();
			easy();
			average();
			difficult();

			while (gamel != 1) {
				int v = 0;
				if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

					switch ((v = _getch()))
					{
					case KEY_LEFT:
						if (level == 1)
						{
						}
						else
						{
							level -= 1;
						}
						break;
					case KEY_RIGHT:
						if (level == 3)
						{
						}
						else
						{
							level += 1;
						}
						break;

					case ENTER:
						if (level == 0) {
							continue;
						}
						else {
							gamel = 1;
							continue;
						}
						break;
					}
				}

				switch (level) //Highlights the Switch for the Game Options in the LEvel Page
				{
				case 1:
					SetConsoleTextAttribute(color, 11);
					easy();
					SetConsoleTextAttribute(color, 14);
					average();
					difficult();
					SetConsoleTextAttribute(color, 14);
					break;

				case 2:
					SetConsoleTextAttribute(color, 11);
					average();
					SetConsoleTextAttribute(color, 14);
					easy();
					difficult();
					SetConsoleTextAttribute(color, 14);
					break;
				case 3:
					SetConsoleTextAttribute(color, 11);
					difficult();
					SetConsoleTextAttribute(color, 14);
					easy();
					average();
					SetConsoleTextAttribute(color, 14);
					break;
				}
			}

			if (level != 1 && level != 3) {
				//system("cls");
			}
			else
			{
				gamel = 1;
			} gamel = 0;

			switch (level)
			{
			case 1:
			{
				system("cls");


			req1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(58, 17); cout << "I CAN FLY BUT HAVE NO WING, I CAN CRY BUT HAVE NO EYES";
				gotoxy(62, 18); cout << "WHERE EVER I GO DARKNESS FOLLOWS ME WHAT AM I?";
				gotoxy(66, 24); cout << "BIRD  ";
				gotoxy(101, 24); cout << "REFLECTION  ";
				gotoxy(66, 30); cout << "CLOUD   ";
				gotoxy(104, 30); cout << "RAIN  ";
				gotoxy(96, 36); cin >> re1;

				switch (re1)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(66, 30); cout << "CLOUD   ";
					SetConsoleTextAttribute(color, 14);
					re1score = 300;
					re1c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << " BIRD  ";
					SetConsoleTextAttribute(color, 14);
					re1score = 0;
					re1c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(101, 24); cout << "REFLECTION  ";
					SetConsoleTextAttribute(color, 14);
					re1score = 0;
					re1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "RAIN  ";
					SetConsoleTextAttribute(color, 14);
					re1score = 0;
					re1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req1;
				}
				}
				getch();
				system("cls");

			req2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(66, 17); cout << "WHAT GETS BROKEN WITHOUT BEING HELD?  ";
				gotoxy(64, 24); cout << " PROMISE  ";
				gotoxy(104, 24); cout << "GLASS  ";
				gotoxy(65, 30); cout << "PASSION  ";
				gotoxy(105, 30); cout << "LUCK  ";
				gotoxy(96, 36); cin >> re2;

				switch (re2)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(64, 24); cout << "PROMISE  ";
					SetConsoleTextAttribute(color, 14);
					re2score = 305;
					re2c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "GLASS  ";
					re2score = 0;
					re2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "PASSION  ";
					SetConsoleTextAttribute(color, 14);
					re2score = 0;
					re2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "LUCK  ";
					SetConsoleTextAttribute(color, 14);
					re2score = 0;
					re2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req2;
				}
				}
				getch();
				system("cls");

			req3:
				SetConsoleTextAttribute(color, 14);
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(58, 17); cout << "WHAT CAN TRAVEL THE WORLD WHILE STAYING IN THE CORNER ?  ";
				gotoxy(63, 24); cout << "PAPER PLANE  ";
				gotoxy(105, 24); cout << "STAMP  ";
				gotoxy(65, 30); cout << "EYES  ";
				gotoxy(106, 30); cout << "BIRD  ";
				gotoxy(96, 36); cin >> re3;

				switch (re3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "STAMP  ";
					SetConsoleTextAttribute(color, 14);
					re3score = 310;
					re3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(63, 24); cout << "PAPER PLANE  ";
					SetConsoleTextAttribute(color, 14);
					re3score = 0;
					re3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "EYES  ";
					SetConsoleTextAttribute(color, 14);
					re3score = 0;
					re3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(106, 30); cout << "BIRD  ";
					SetConsoleTextAttribute(color, 14);
					re3score = 0;
					re3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req3;
				}
				}
				getch();
				system("cls");

			req4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(66, 17); cout << "I AM ALWAYS HUNGRY, I MUST ALWAYS BE FED,  ";
				gotoxy(66, 18); cout << "THE FINGER I TOUCH SOON WILL TURN TO RED  ";
				gotoxy(64, 24); cout << "SCISSOR  ";
				gotoxy(104, 24); cout << "ENGINE  ";
				gotoxy(66, 30); cout << "HEAT  ";
				gotoxy(105, 30); cout << "FIRE  ";
				gotoxy(96, 36); cin >> re4;

				switch (re4)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(105, 30); cout << "FIRE  ";
					SetConsoleTextAttribute(color, 14);
					re4score = 315;
					re4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "SCISSOR  ";
					SetConsoleTextAttribute(color, 14);
					re4score = 0;
					re4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "ENGINE  ";
					SetConsoleTextAttribute(color, 14);
					re4score = 0;
					re4c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "HEAT  ";
					SetConsoleTextAttribute(color, 14);
					re4score = 0;
					re4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req4;
				}
				}
				getch();
				system("cls");

			req5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(53, 17); cout << "WHEN IT IS ALIVE WE SING, WHEN IT IS DEAD WE CLAP, WHAT IS THIS?";
				gotoxy(61, 24); cout << "BIRTHDAY CANDLE  ";
				gotoxy(102, 24); cout << "PERFORMANCE  ";
				gotoxy(64, 30); cout << "CARNIVAL  ";
				gotoxy(98, 30); cout << "POP GOES THE WEASEL  ";
				gotoxy(96, 36); cin >> re5;

				switch (re5)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(61, 24); cout << "BIRTHDAY CANDLE  ";
					SetConsoleTextAttribute(color, 14);
					re5score = 320;
					re5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "PERFORMANCE  ";
					SetConsoleTextAttribute(color, 14);
					re5score = 0;
					re5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "CARNIVAL  ";
					SetConsoleTextAttribute(color, 14);
					re5score = 0;
					re5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(98, 30); cout << "POP GOES THE WEASEL  ";
					re5score = 0;
					re5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req5;
				}
				}
				getch();
				system("cls");

			req6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(68, 17); cout << "WHAT HAS FOUR LEGS BUT CAN'T WALK ";
				gotoxy(67, 24); cout << "CAR  ";
				gotoxy(106, 24); cout << "BED  ";
				gotoxy(66, 30); cout << "TABLE  ";
				gotoxy(103, 30); cout << "STROLLER  ";
				gotoxy(96, 36); cin >> re6;

				switch (re6)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(66, 30); cout << "TABLE  ";
					SetConsoleTextAttribute(color, 14);
					re6score = 325;
					re6c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(67, 24); cout << "CAR  ";
					SetConsoleTextAttribute(color, 14);
					re6score = 0;
					re6c = 0;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(106, 24); cout << "BED  ";
					SetConsoleTextAttribute(color, 14);
					re6score = 0;
					re6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "STROLLER  ";
					SetConsoleTextAttribute(color, 14);
					re6score = 0;
					re6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req6;
				}
				}
				getch();
				system("cls");

			req7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(71, 17); cout << "WHAT HAS A NECK BUT NO HEAD?  ";
				gotoxy(65, 24); cout << "BOTTLE  ";
				gotoxy(104, 24); cout << "SHIRT  ";
				gotoxy(64, 30); cout << "SWEATER  ";
				gotoxy(104, 30); cout << "PANTS  ";
				gotoxy(96, 36); cin >> re7;

				switch (re7)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "BOTTLE  ";
					SetConsoleTextAttribute(color, 14);
					re7score = 330;
					re7c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "SHIRT  ";
					SetConsoleTextAttribute(color, 14);
					re7score = 0;
					re7c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "SWEATER  ";
					SetConsoleTextAttribute(color, 14);
					re7score = 0;
					re7c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "PANTS  ";
					SetConsoleTextAttribute(color, 14);
					re7score = 0;
					re7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req7;
				}
				}
				getch();
				system("cls");

			req8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(68, 17); cout << "WHAT FALLS OFTEN BUT NEVER GETS HURT?  ";
				gotoxy(65, 24); cout << "RAIN  ";
				gotoxy(104, 24); cout << "BUBBLE  ";
				gotoxy(65, 30); cout << "LEAF  ";
				gotoxy(104, 30); cout << "GLASS  ";
				gotoxy(96, 36); cin >> re8;

				switch (re8)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "RAIN  ";
					SetConsoleTextAttribute(color, 14);
					re8score = 335;
					re8c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "BUBBLE  ";
					SetConsoleTextAttribute(color, 14);
					re8score = 0;
					re8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "LEAF  ";
					SetConsoleTextAttribute(color, 14);
					re8score = 0;
					re8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "GLASS  ";
					SetConsoleTextAttribute(color, 14);
					re8score = 0;
					re8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req8;
				}
				}
				getch();
				system("cls");

			req9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(57, 17); cout << "YOU ARE MY BROTHER BUT I AM NOT YOUR BROTHER, WHO AM I? ";
				gotoxy(65, 24); cout << "SISTER  ";
				gotoxy(102, 24); cout << "STEP SISTER  ";
				gotoxy(65, 30); cout << "FRIEND  ";
				gotoxy(104, 30); cout << "FATHER  ";
				gotoxy(96, 36); cin >> re9;

				switch (re9)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "SISTER  ";
					SetConsoleTextAttribute(color, 14);
					re9score = 340;
					re9c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "STEP SISTER  ";
					SetConsoleTextAttribute(color, 14);
					re9score = 0;
					re9c = 0;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "FRIEND  ";
					SetConsoleTextAttribute(color, 14);
					re9score = 0;
					re9c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "FATHER  ";
					SetConsoleTextAttribute(color, 14);
					re9score = 0;
					re9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req9;
				}
				}
				getch();
				system("cls");

			req10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(55, 17); cout << "I HAVE CITIES, BUT NO HOUSES. I HAVE MOUNTAIN, BUT NO TREES.  ";
				gotoxy(69, 18); cout << "I HAVE WATER, BUT NO FISH.WHAT AM I?  ";
				gotoxy(66, 24); cout << "DOOR  ";
				gotoxy(104, 24); cout << "EARTH  ";
				gotoxy(65, 30); cout << "GALAXY  ";
				gotoxy(105, 30); cout << "MAP  ";
				gotoxy(96, 36); cin >> re10;

				switch (re10)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(105, 30); cout << "MAP  ";
					SetConsoleTextAttribute(color, 14);
					re10score = 345;
					re10c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "DOOR  ";
					SetConsoleTextAttribute(color, 14);
					re10score = 0;
					re10c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "EARTH  ";
					SetConsoleTextAttribute(color, 14);
					re10score = 0;
					re10c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "GALAXY  ";
					SetConsoleTextAttribute(color, 14);
					re10score = 0;
					re10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto req10;
				}
				}
				getch();
				system("cls");


			resultre:

				reaverage = re1score + re2score + re3score + re4score + re5score + re6score + re7score + re8score + re9score + re10score;
				rectotal = re1c + re2c + re3c + re4c + re5c + re6c + re7c + re8c + re9c + re10c;

				ofstream file;
				file.open("Riddleshistory.txt");


				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Riddles";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Easy Score Result: " << reaverage << "\n";
				file << "Correct Answer/s: " << rectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Average Score Result: " << raaverage << "\n";
				file << "Correct Answer/s: " << ractotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Difficult Score Result: " << rdaverage << "\n";
				file << "Correct Answer/s: " << rdctotal << " / 5 \n";
				file << "-------------------------------------";

				file.close();

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(81, 19); cout << "E A S Y";
				gotoxy(82, 23); cout << reaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto ravelevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the MOre Options in the Game
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						int qeaverage = 0;
						int qaaverage = 0;
						int qdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "RIDDLES";
						gotoxy(78, 16); cout << "EASY";
						gotoxy(120, 16); cout << rectotal << " / 10";
						gotoxy(140, 16); cout << reaverage;

						getch();
						system("cls");
						goto resultre;
						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultre;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				break;
			}//END OF RIDDLES EASY

			case 2:
			{
				system("cls");

			ravelevel:

			raq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(62, 17); cout << "A KIND OF TREE YOU CAN CARRY IN YOUR HAND?  ";
				gotoxy(66, 24); cout << "MANGO   ";
				gotoxy(105, 24); cout << "PALM  ";
				gotoxy(65, 30); cout << "COCONUT  ";
				gotoxy(105, 30); cout << "APPLE  ";;
				gotoxy(96, 36); cin >> ra1;

				switch (ra1)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "PALM  ";
					SetConsoleTextAttribute(color, 14);
					ra1score = 400;
					ra1c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "MANGO   ";
					SetConsoleTextAttribute(color, 14);
					ra1score = 0;
					ra1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "COCONUT  ";
					SetConsoleTextAttribute(color, 14);
					ra1score = 0;
					ra1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "APPLE  ";
					SetConsoleTextAttribute(color, 14);
					ra1score = 0;
					ra1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq1;
				}
				}
				getch();
				system("cls");

			raq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(63, 17); cout << "IM TALL WHEN IM YOUNG, IM SMALL WHEN IM OLD ";
				gotoxy(65, 24); cout << "PENCIL  ";
				gotoxy(105, 24); cout << "TAPE  ";
				gotoxy(66, 30); cout << "WAX  ";
				gotoxy(105, 30); cout << "PEN  ";
				gotoxy(96, 36); cin >> ra2;

				switch (ra2)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "PENCIL  ";
					SetConsoleTextAttribute(color, 14);
					ra2score = 405;
					ra2c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "TAPE  ";
					ra2score = 0;
					ra2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "WAX  ";
					SetConsoleTextAttribute(color, 14);
					ra2score = 0;
					ra2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "PEN  ";
					SetConsoleTextAttribute(color, 14);
					ra2score = 0;
					ra2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq2;
				}
				}
				getch();
				system("cls");

			raq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(68, 17); cout << "WHAT CAN YOU CATCH BUT NEVER THROW?  ";
				gotoxy(66, 24); cout << "PUNCH  ";
				gotoxy(105, 24); cout << "COLD  ";
				gotoxy(66, 30); cout << "KICK  ";
				gotoxy(103, 30); cout << "BAD LUCK  ";

				gotoxy(96, 36); cin >> ra3;

				switch (ra3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "COLD  ";
					SetConsoleTextAttribute(color, 14);
					ra3score = 410;
					ra3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "PUNCH  ";
					SetConsoleTextAttribute(color, 14);
					ra3score = 0;
					ra3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "KICK  ";
					SetConsoleTextAttribute(color, 14);
					ra3score = 0;
					ra3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "BAD LUCK  ";
					SetConsoleTextAttribute(color, 14);
					ra3score = 0;
					ra3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq3;
				}
				}
				getch();
				system("cls");

			raq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(66, 17); cout << "I AM ALWAYS AND IN FRONT NEVER BEHIND  ";
				gotoxy(66, 24); cout << "TODAY  ";
				gotoxy(103, 24); cout << "YESTERDAY  ";
				gotoxy(66, 30); cout << "FUTURE  ";
				gotoxy(104, 30); cout << "MONDAY  ";
				gotoxy(96, 36); cin >> ra4;

				switch (ra4)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(66, 30); cout << "FUTURE  ";
					SetConsoleTextAttribute(color, 14);
					ra4score = 415;
					ra4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "TODAY  ";
					SetConsoleTextAttribute(color, 14);
					ra4score = 0;
					ra4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "YESTERDAY  ";
					SetConsoleTextAttribute(color, 14);
					ra4score = 0;
					ra4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "MONDAY  ";
					SetConsoleTextAttribute(color, 14);
					ra4score = 0;
					ra4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq4;
				}
				}
				getch();
				system("cls");

			raq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(65, 17); cout << "WHAT CAN BE OPEN, BUT CANNOT BE CLOSED?  ";
				gotoxy(66, 24); cout << "EGG  ";
				gotoxy(105, 24); cout << "SEED  ";
				gotoxy(60, 30); cout << "SAFE IN THE BANK  ";
				gotoxy(105, 30); cout << "CAN  ";
				gotoxy(96, 36); cin >> ra5;

				switch (ra5)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(66, 24); cout << "EGG  ";
					SetConsoleTextAttribute(color, 14);
					ra5score = 420;
					ra5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "SEED  ";
					SetConsoleTextAttribute(color, 14);
					ra5score = 0;
					ra5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(60, 30); cout << "SAFE IN THE BANK  ";
					SetConsoleTextAttribute(color, 14);
					ra5score = 0;
					ra5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "CAN  ";
					ra5score = 0;
					ra5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq5;
				}
				}
				getch();
				system("cls");

			raq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(38, 17); cout << "I SPEAK WITHOUT A MOUTH AND HEAR WITHOUT EARS, I HAVE NO BODY ,BUT I COME ALIVE WITH THE WIND? ";
				gotoxy(65, 24); cout << "GHOST  ";
				gotoxy(102, 24); cout << "POLTERGIEST  ";
				gotoxy(65, 30); cout << "ECHO  ";
				gotoxy(104, 30); cout << "WHISPER  ";
				gotoxy(96, 36); cin >> ra6;

				switch (ra6)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(65, 30); cout << "ECHO  ";
					SetConsoleTextAttribute(color, 14);
					ra6score = 425;
					ra6c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "GHOST  ";
					SetConsoleTextAttribute(color, 14);
					ra6score = 0;
					ra6c = 0;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "POLTERGIEST  ";
					SetConsoleTextAttribute(color, 14);
					ra6score = 0;
					ra6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "WHISPER  ";
					SetConsoleTextAttribute(color, 14);
					ra6score = 0;
					ra6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq6;
				}
				}
				getch();
				system("cls");

			raq7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(55, 17); cout << "WHAT GOES IN HARD, COMES OUT SOFT AND BLOWS CONTINUOUSLY? ";
				gotoxy(67, 24); cout << "GUM  ";
				gotoxy(105, 24); cout << "ICE  ";
				gotoxy(64, 30); cout << "CIGARETTE  ";
				gotoxy(103, 30); cout << "TRUMPET  ";

				gotoxy(96, 36); cin >> ra7;

				switch (ra7)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(67, 24); cout << "GUM  ";
					SetConsoleTextAttribute(color, 14);
					ra7score = 430;
					ra7c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "ICE  ";
					SetConsoleTextAttribute(color, 14);
					ra7score = 0;
					ra7c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "CIGARETTE  ";
					SetConsoleTextAttribute(color, 14);
					ra7score = 0;
					ra7c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "TRUMPET  ";
					SetConsoleTextAttribute(color, 14);
					ra7score = 0;
					ra7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq7;
				}
				}
				getch();
				system("cls");

			raq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(43, 17); cout << "IT CAN NOT BE SEEN WHENEVER IT'S THERE, IT FILLS UP A ROOM, IT'S MUCH LIKE THE AIR ";
				gotoxy(40, 18); cout << "IT CAN'T BE TOUCH, THERE'S NOTHING TO HEAR, IT IS QUITE HARMLESS, THERE'S NOTHING TO FEAR ";
				gotoxy(65, 24); cout << "GHOST  ";
				gotoxy(103, 24); cout << "DARKNESS  ";
				gotoxy(63, 30); cout << "EMPTY ROOM  ";
				gotoxy(106, 30); cout << "EGG  ";
				gotoxy(96, 36); cin >> ra8;

				switch (ra8)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(103, 24); cout << "DARKNESS  ";
					SetConsoleTextAttribute(color, 14);
					ra8score = 435;
					ra8c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "GHOST  ";
					SetConsoleTextAttribute(color, 14);
					ra8score = 0;
					ra8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "EMPTY ROOM  ";
					SetConsoleTextAttribute(color, 14);
					ra8score = 0;
					ra8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(106, 30); cout << "EGG  ";
					SetConsoleTextAttribute(color, 14);
					ra8score = 0;
					ra8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq8;
				}
				}
				getch();
				system("cls");

			raq9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(58, 17); cout << "I CAN'T BE BOUGHT, BUT I CAN BE STOLEN WITH A GLANCE.";
				gotoxy(62, 18); cout << " I'M WORTHLESS TO ONE, BUT PRICELESS TO TWO. ";
				gotoxy(65, 24); cout << "MONEY  ";
				gotoxy(105, 24); cout << "LOVE  ";
				gotoxy(65, 30); cout << "PASSION  ";
				gotoxy(103, 30); cout << "FREEDOM  ";
				gotoxy(96, 36); cin >> ra9;

				switch (ra9)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "LOVE  ";
					SetConsoleTextAttribute(color, 14);
					ra9score = 440;
					ra9c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "MONEY  ";
					SetConsoleTextAttribute(color, 14);
					ra9score = 0;
					ra9c = 0;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "PASSION  ";
					SetConsoleTextAttribute(color, 14);
					ra9score = 0;
					ra9c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "FREEDOM  ";
					SetConsoleTextAttribute(color, 14);
					ra9score = 0;
					ra9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq9;
				}
				}
				getch();
				system("cls");

			raq10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();


				gotoxy(58, 17); cout << "WHAT HAS A NECK BUT NO HEAD, HAS TWO ARMS BUT NO HAND?  ";
				gotoxy(65, 24); cout << "SHIRT  ";
				gotoxy(102, 24); cout << "POLTERGIEST  ";
				gotoxy(65, 30); cout << "SHADOW  ";
				gotoxy(105, 30); cout << "PANTS  ";
				gotoxy(96, 36); cin >> ra10;

				switch (ra10)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "SHIRT  ";
					SetConsoleTextAttribute(color, 14);
					ra10score = 445;
					ra10c = 1;
					break;
				}

				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "PANTS  ";
					SetConsoleTextAttribute(color, 14);
					ra10score = 0;
					ra10c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "POLTERGIEST  ";
					SetConsoleTextAttribute(color, 14);
					ra10score = 0;
					ra10c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "SHADOW  ";
					SetConsoleTextAttribute(color, 14);
					ra10score = 0;
					ra10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto raq10;
				}
				}
				getch();
				system("cls");


			resultra:

				raaverage = ra1score + ra2score + ra3score + ra4score + ra5score + ra6score + ra7score + ra8score + ra9score + ra10score;
				ractotal = ra1c + ra2c + ra3c + ra4c + ra5c + ra6c + ra7c + ra8c + ra9c + ra10c;

				ofstream file;
				file.open("Riddleshistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Riddles";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Easy Score Result: " << reaverage << "\n";
				file << "Correct Answer/s: " << rectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Average Score Result: " << raaverage << "\n";
				file << "Correct Answer/s: " << ractotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Difficult Score Result: " << rdaverage << "\n";
				file << "Correct Answer/s: " << rdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(78, 19); cout << "A V E R A G E";
				gotoxy(82, 23); cout << raaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto rdiflevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the MOre Options of the GAme
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						int qeaverage = 0;
						int qaaverage = 0;
						int qdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "RIDDLES";
						gotoxy(78, 16); cout << "AVERAGE";
						gotoxy(120, 16); cout << ractotal << " / 10";
						gotoxy(140, 16); cout << raaverage;

						getch();
						system("cls");
						goto resultra;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultra;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				break;
			}

			case 3:
			{
				system("cls");
			rdiflevel:


			rdq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(38, 17); cout << "I MAY BE SIMPLE, I MAY BE COMPLEX; I MAY HAVE A NAME BUT NO GENDER. I AM OFTEN A QUESTION OR ";
				gotoxy(38, 18); cout << "STATEMENTS AS A SETUP, I TEND TO HAVE AN ANSWER UNTIL YOU FIND IT, I WON'T LET UP. WHAT AM I?  ";
				gotoxy(65, 24); cout << "RIDDLE  ";
				gotoxy(105, 24); cout << "TEST  ";
				gotoxy(64, 30); cout << "QUESTION  ";
				gotoxy(105, 30); cout << "QUIZ  ";
				gotoxy(96, 36); cin >> rd1;

				switch (rd1)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "RIDDLE  ";
					SetConsoleTextAttribute(color, 14);
					rd1score = 500;
					rd1c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "TEST  ";
					SetConsoleTextAttribute(color, 14);
					rd1score = 0;
					rd1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "QUESTION  ";
					SetConsoleTextAttribute(color, 14);
					rd1score = 0;
					rd1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "QUIZ  ";
					SetConsoleTextAttribute(color, 14);
					rd1score = 0;
					rd1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto rdq1;
				}
				}
				getch();
				system("cls");

			rdq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(47, 17); cout << "I RUN IN & OUT OF TOWN ALL DAY & NIGHT AND YET I NEVER GET TIRED. WHAT AM I? ";
				gotoxy(66, 24); cout << "ROAD  ";
				gotoxy(105, 24); cout << "FLASH  ";
				gotoxy(64, 30); cout << "SUPERMAN  ";
				gotoxy(105, 30); cout << "TRAIN  ";
				gotoxy(96, 36); cin >> rd2;

				switch (rd2)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(66, 24); cout << "ROAD  ";
					SetConsoleTextAttribute(color, 14);
					rd2score = 505;
					rd2c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "FLASH  ";
					rd2score = 0;
					rd2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "SUPERMAN  ";
					SetConsoleTextAttribute(color, 14);
					rd2score = 0;
					rd2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(105, 30); cout << "TRAIN  ";
					SetConsoleTextAttribute(color, 14);
					rd2score = 0;
					rd2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto rdq2;
				}
				}
				getch();
				system("cls");

			rdq3:
				SetConsoleTextAttribute(color, 14);
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(45, 17); cout << "NO MATTER HOW LITTLE OR HOW MUCH YOU USE ME, YOU CHANGE ME EVERY MONTH, WHAT AM I? ";
				gotoxy(67, 24); cout << "GAS  ";
				gotoxy(105, 24); cout << "PAPER  ";
				gotoxy(64, 30); cout << "CALENDAR  ";
				gotoxy(106, 30); cout << "BAG  ";
				gotoxy(96, 36); cin >> rd3;

				switch (rd3)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(64, 30); cout << "CALENDAR  ";
					SetConsoleTextAttribute(color, 14);
					rd3score = 510;
					rd3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(67, 24); cout << "GAS  ";
					SetConsoleTextAttribute(color, 14);
					rd3score = 0;
					rd3c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "PAPER  ";
					SetConsoleTextAttribute(color, 14);
					rd3score = 0;
					rd3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(106, 30); cout << "BAG  ";
					SetConsoleTextAttribute(color, 14);
					rd3score = 0;
					rd3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto rdq3;
				}
				}
				getch();
				system("cls");

			rdq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(36, 17); cout << "MOUNTAIN WILL CRUMBLE AND TEMPLES WILL FALL AND NO MAN CAN SURVIVE ITS ENDLESS CALLS. WHAT IS THIS?";
				gotoxy(64, 24); cout << "CLIMATE  ";
				gotoxy(103, 24); cout << "DISASTER  ";
				gotoxy(66, 30); cout << "AGE  ";
				gotoxy(105, 30); cout << "TIME  ";
				gotoxy(96, 36); cin >> rd4;

				switch (rd4)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(105, 30); cout << "TIME  ";
					SetConsoleTextAttribute(color, 14);
					rd4score = 515;
					rd4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "CLIMATE  ";
					SetConsoleTextAttribute(color, 14);
					rd4score = 0;
					rd4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "DISASTER  ";
					SetConsoleTextAttribute(color, 14);
					rd4score = 0;
					rd4c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "AGE  ";
					SetConsoleTextAttribute(color, 14);
					rd4score = 0;
					rd4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto rdq4;
				}
				}
				getch();
				system("cls");

			rdq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(43, 17); cout << "WHAT DAY WOULD YESTERDAY BE IF THURSDAY WAS FOUR DAYS BEFORE THE DAY AFTER TOMORROW?";
				gotoxy(66, 24); cout << "MONDAY  ";
				gotoxy(104, 24); cout << "SUNDAY  ";
				gotoxy(64, 30); cout << "WEDNESDAY  ";
				gotoxy(104, 30); cout << "FRIDAY  ";
				gotoxy(96, 36); cin >> rd5;

				switch (rd5)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "FRIDAY  ";
					SetConsoleTextAttribute(color, 14);
					rd5score = 520;
					rd5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "SUNDAY  ";
					SetConsoleTextAttribute(color, 14);
					rd5score = 0;
					rd5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "WEDNESDAY  ";
					SetConsoleTextAttribute(color, 14);
					rd5score = 0;
					rd5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "MONDAY  ";
					rd5score = 0;
					rd5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto rdq5;
				}
				}
				getch();
				system("cls");


			resultrd:

				rdaverage = rd1score + rd2score + rd3score + rd4score + rd5score;
				rdctotal = rd1c + rd2c + rd3c + rd4c + rd5c;

				ofstream file;
				file.open("Riddleshistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Riddles";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Easy Score Result: " << reaverage << "\n";
				file << "Correct Answer/s: " << rectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Average Score Result: " << raaverage << "\n";
				file << "Correct Answer/s: " << ractotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Riddles Difficult Score Result: " << rdaverage << "\n";
				file << "Correct Answer/s: " << rdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				reschooseleveld();
				moreoptionsd();
				gotoxy(76, 19); cout << "D I F F I C U L T";
				gotoxy(82, 23); cout << rdaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						reschooseleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						reschooseleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto riddlesgame;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the more Options of the game
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						int qeaverage = 0;
						int qaaverage = 0;
						int qdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "RIDDLES";
						gotoxy(78, 16); cout << "DIFFICULT";
						gotoxy(120, 16); cout << rdctotal << " / 5";
						gotoxy(140, 16); cout << rdaverage;

						getch();
						system("cls");
						goto resultrd;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultrd;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP

				break;
			}
			}
			break;
		}
		case 4: //If "Quiz Master" was choosen
		{
			system("cls");

		quizmgame:

			level = 0;

			chooselevel();
			easy();
			average();
			difficult();

			while (gamel != 1) {
				int v = 0;
				if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) {

					switch ((v = _getch()))
					{
					case KEY_LEFT:
						if (level == 1)
						{
						}
						else
						{
							level -= 1;
						}
						break;
					case KEY_RIGHT:
						if (level == 3)
						{
						}
						else
						{
							level += 1;
						}
						break;

					case ENTER:
						if (level == 0) {
							continue;
						}
						else {
							gamel = 1;
							continue;
						}
						break;
					}
				}

				switch (level) //Highlights the Switch for the Game Options in the LEvel Page
				{
				case 1:
					SetConsoleTextAttribute(color, 11);
					easy();
					SetConsoleTextAttribute(color, 14);
					average();
					difficult();
					SetConsoleTextAttribute(color, 14);
					break;

				case 2:
					SetConsoleTextAttribute(color, 11);
					average();
					SetConsoleTextAttribute(color, 14);
					easy();
					difficult();
					SetConsoleTextAttribute(color, 14);
					break;
				case 3:
					SetConsoleTextAttribute(color, 11);
					difficult();
					SetConsoleTextAttribute(color, 14);
					easy();
					average();
					SetConsoleTextAttribute(color, 14);
					break;
				}
			}

			if (level != 1 && level != 3) {
				//system("cls");
			}
			else
			{
				gamel = 1;
			} gamel = 0;

			switch (level)
			{
			case 1:
			{
				system("cls");
			qelevel:


			qeq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(49, 17); cout << "WHEN REFERRING TO A WEBSITE'S ADDRESS WAS DOES THE ACRONYM URL STAND FOR?";
				gotoxy(56, 24); cout << "UNIFORM RESOURCE LOCATOR";
				gotoxy(95, 24); cout << "UNIVERSE RESOURCE LOCATOR";
				gotoxy(56, 30); cout << "UNIFORM RESOURCE LOCATION";
				gotoxy(95, 30); cout << "UNIVERSAL RESOURCE LOCATE";
				gotoxy(96, 36); cin >> qe1;

				switch (qe1)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(56, 24); cout << "UNIFORM RESOURCE LOCATOR";
					SetConsoleTextAttribute(color, 14);
					qe1score = 300;
					qe1c = 1;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(56, 30); cout << "UNIFORM RESOURCE LOCATION";
					SetConsoleTextAttribute(color, 14);
					qe1score = 0;
					qe1c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(95, 24); cout << "UNIVERSE RESOURCE LOCATOR";
					SetConsoleTextAttribute(color, 14);
					qe1score = 0;
					qe1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(95, 30); cout << "UNIVERSAL RESOURCE LOCATE";
					SetConsoleTextAttribute(color, 14);
					qe1score = 0;
					qe1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq1;
				}
				}
				getch();
				system("cls");

			qeq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(47, 17); cout << "WHEN USED IN THE KITCHEN, SODIUM BICARBONATE IS MORE COMMONLY KNOWN AS WHAT?";
				gotoxy(65, 24); cout << "SUGAR";
				gotoxy(102, 24); cout << "BAKING SODA";
				gotoxy(65, 30); cout << "SALT";
				gotoxy(104, 30); cout << "VINEGAR";
				gotoxy(96, 36); cin >> qe2;

				switch (qe2)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(102, 24); cout << "BAKING SODA";
					SetConsoleTextAttribute(color, 14);
					qe2score = 305;
					qe2c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "SUGAR";
					qe2score = 0;
					qe2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "SALT";
					qe2score = 0;
					qe2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "VINEGAR";
					SetConsoleTextAttribute(color, 14);
					qe2score = 0;
					qe2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq2;
				}
				}
				getch();
				system("cls");

			qeq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(45, 17); cout << "THE HIGHEST MOUNTAIN ON EARTH, MOUNT EVEREST, IS LOCATED IN WHICH MOUNTAIN RANGE?";
				gotoxy(61, 24); cout << "ROCKY MOUNTAINS";
				gotoxy(100, 24); cout << "THE HIMALAYAS";
				gotoxy(62, 30); cout << "ANDES NEVADA";
				gotoxy(104, 30); cout << "ALPS";
				gotoxy(96, 36); cin >> qe3;

				switch (qe3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(100, 24); cout << "THE HIMALAYAS";
					SetConsoleTextAttribute(color, 14);
					qe3score = 310;
					qe3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(61, 24); cout << "ROCKY MOUNTAINS";
					SetConsoleTextAttribute(color, 14);
					qe3score = 0;
					qe3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(62, 30); cout << "ANDES NEVADA";
					SetConsoleTextAttribute(color, 14);
					qe3score = 0;
					qe3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "ALPS";
					SetConsoleTextAttribute(color, 14);
					qe3score = 0;
					qe3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq3;
				}
				}
				getch();
				system("cls");

			qeq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(56, 17); cout << "WHAT JAPANESE WORD TRANSLATES INTO ENGLISH AS HARBOR WAVE?";
				gotoxy(64, 24); cout << "BIG WAVE";
				gotoxy(104, 24); cout << "SPLASH";
				gotoxy(66, 30); cout << "WAVE";
				gotoxy(104, 30); cout << "TSUNAMI";
				gotoxy(96, 36); cin >> qe4;

				switch (qe4)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "TSUNAMI";
					SetConsoleTextAttribute(color, 14);
					qe4score = 315;
					qe4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "BIG WAVE";
					SetConsoleTextAttribute(color, 14);
					qe4score = 0;
					qe4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "SPLASH";
					SetConsoleTextAttribute(color, 14);
					qe4score = 0;
					qe4c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(66, 30); cout << "WAVE";
					SetConsoleTextAttribute(color, 14);
					qe4score = 0;
					qe4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq4;
				}
				}
				getch();
				system("cls");

			qeq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "WHAT IS THE OFFICIAL CURRENCY OF THE PHILIPPINES?";
				gotoxy(61, 24); cout << "PHILIPPINE DOLLAR";
				gotoxy(102, 24); cout << "EUROPEAN EURO";
				gotoxy(62, 30); cout << "PHILIPPINE PESO";
				gotoxy(102, 30); cout << "JAPANESE YEN";
				gotoxy(96, 36); cin >> qe5;

				switch (qe5)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(62, 30); cout << "PHILIPPINE PESO";
					SetConsoleTextAttribute(color, 14);
					qe5score = 320;
					qe5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "EUROPEAN EURO";
					SetConsoleTextAttribute(color, 14);
					qe5score = 0;
					qe5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(61, 24); cout << "PHILIPPINE DOLLAR";
					SetConsoleTextAttribute(color, 14);
					qe5score = 0;
					qe5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "JAPANESE YEN";
					qe5score = 0;
					qe5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq5;
				}
				}
				getch();
				system("cls");

			qeq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(44, 17); cout << "THE GREAT RED SPOT IS A GIGANTIC STORM LOCATED ON WHICH PLANET IN OUR SOLAR SYSTEM?";
				gotoxy(64, 24); cout << "JUPITER";
				gotoxy(104, 24); cout << "SATURN";
				gotoxy(65, 30); cout << "EARTH";
				gotoxy(104, 30); cout << "VENUS";
				gotoxy(96, 36); cin >> qe6;

				switch (qe6)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(64, 24); cout << "JUPITER";
					SetConsoleTextAttribute(color, 14);
					qe6score = 325;
					qe6c = 1;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "EARTH";
					SetConsoleTextAttribute(color, 14);
					qe6score = 0;
					qe6c = 0;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "SATURN";
					SetConsoleTextAttribute(color, 14);
					qe6score = 0;
					qe6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "VENUS";
					SetConsoleTextAttribute(color, 14);
					qe6score = 0;
					qe6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq6;
				}
				}
				getch();
				system("cls");

			qeq7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(55, 17); cout << "IN COMPUTER TERMINOLOGY WHAT DOES THE ACRONYM LAN STAND FOR?";
				gotoxy(60, 24); cout << "LAND AREA NETWORK";
				gotoxy(100, 24); cout << "LIGHT AIR TRAVEL";
				gotoxy(60, 30); cout << "LOCAL AND NETWORK ";
				gotoxy(99, 30); cout << "LOCAL AREA NETWORK";
				gotoxy(96, 36); cin >> qe7;

				switch (qe7)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(99, 30); cout << "LOCAL AREA NETWORK";
					SetConsoleTextAttribute(color, 14);
					qe7score = 330;
					qe7c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(100, 24); cout << "LIGHT AIR TRAVEL";
					SetConsoleTextAttribute(color, 14);
					qe7score = 0;
					qe7c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(60, 30); cout << "LOCAL AND NETWORK ";
					SetConsoleTextAttribute(color, 14);
					qe7score = 0;
					qe7c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(60, 24); cout << "LAND AREA NETWORK";
					SetConsoleTextAttribute(color, 14);
					qe7score = 0;
					qe7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq7;
				}
				}
				getch();
				system("cls");

			qeq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(65, 17); cout << "WHAT IS THE TALLEST BUILDING IN THE WORLD?";
				gotoxy(62, 24); cout << "SHANGHAI TOWER";
				gotoxy(100, 24); cout << "THE BURJ KHALIFA";
				gotoxy(58, 30); cout << "ONE WORLD TRADE CENTER";
				gotoxy(101, 30); cout << "ENTISAR TOWER";
				gotoxy(96, 36); cin >> qe8;

				switch (qe8)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(100, 24); cout << "THE BURJ KHALIFA";
					SetConsoleTextAttribute(color, 14);
					qe8score = 335;
					qe8c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(62, 24); cout << "SHANGHAI TOWER";
					SetConsoleTextAttribute(color, 14);
					qe8score = 0;
					qe8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(58, 30); cout << "ONE WORLD TRADE CENTER";
					SetConsoleTextAttribute(color, 14);
					qe8score = 0;
					qe8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "ENTISAR TOWER";
					SetConsoleTextAttribute(color, 14);
					qe8score = 0;
					qe8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq8;
				}
				}
				getch();
				system("cls");

			qeq9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(47, 17); cout << "TUBERCULOSIS IS A DISEASE CAUSED BY BACTERIA THAT USUALLY ATTACK WHICH ORGAN?";
				gotoxy(66, 24); cout << "HEART";
				gotoxy(104, 24); cout << "LIVER";
				gotoxy(65, 30); cout << "KIDNEY";
				gotoxy(104, 30); cout << "LUNGS";
				gotoxy(96, 36); cin >> qe9;

				switch (qe9)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "LUNGS";
					SetConsoleTextAttribute(color, 14);
					qe9score = 340;
					qe9c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "LIVER";
					SetConsoleTextAttribute(color, 14);
					qe9score = 0;
					qe9c = 0;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "KIDNEY";
					SetConsoleTextAttribute(color, 14);
					qe9score = 0;
					qe9c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "HEART";
					SetConsoleTextAttribute(color, 14);
					qe9score = 0;
					qe9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq9;
				}
				}
				getch();
				system("cls");

			qeq10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(46, 17); cout << "THE DEEPEST TRENCH IN THE WORLD, THE MARIANA TRENCH, IS LOCATED IN WHICH OCEAN?";
				gotoxy(62, 24); cout << "PACIFIC OCEAN";
				gotoxy(102, 24); cout << "ATLANTIC OCEAN";
				gotoxy(62, 30); cout << "INDIAN OCEAN";
				gotoxy(102, 30); cout << "ARCTIC OCEAN";
				gotoxy(96, 36); cin >> qe10;

				switch (qe10)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(62, 24); cout << "PACIFIC OCEAN";
					SetConsoleTextAttribute(color, 14);
					qe10score = 345;
					qe10c = 1;
					break;
				}

				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "ARCTIC OCEAN";
					SetConsoleTextAttribute(color, 14);
					qe10score = 0;
					qe10c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(102, 24); cout << "ATLANTIC OCEAN";
					SetConsoleTextAttribute(color, 14);
					qe10score = 0;
					qe10c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(62, 30); cout << "INDIAN OCEAN";
					SetConsoleTextAttribute(color, 14);
					qe10score = 0;
					qe10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qeq10;
				}
				}
				getch();
				system("cls");


			resultqe:

				qeaverage = qe1score + qe2score + qe3score + qe4score + qe5score + qe6score + qe7score + qe8score + qe9score + qe10score;
				qectotal = qe1c + qe2c + qe3c + qe4c + qe5c + qe6c + qe7c + qe8c + qe9c + qe10c;

				ofstream file;
				file.open("QuizMasterhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Quiz Master";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Easy Score Result: " << qeaverage << "\n";
				file << "Correct Answer/s: " << qectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Average Score Result: " << qaaverage << "\n";
				file << "Correct Answer/s: " << qactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Difficult Score Result: " << qdaverage << "\n";
				file << "Correct Answer/s: " << qdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(81, 19); cout << "E A S Y";
				gotoxy(82, 23); cout << qeaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto qalevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						int qeaverage = 0;
						int qaaverage = 0;
						int qdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "QUIZ MASTER";
						gotoxy(78, 16); cout << "EASY";
						gotoxy(120, 16); cout << qectotal << " / 10";
						gotoxy(140, 16); cout << qeaverage;

						getch();
						system("cls");
						goto resultqe;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultqe;
						break;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				break;
			}//ENd of Quizmaster easy

			case 2:
			{
				system("cls");
			qalevel:


			qaq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(49, 17); cout << "A YOUNG ISAAC NEWTON IS SAID TO HAVE BEEN HIT ON THE HEAD BY WHICH FRUIT,";
				gotoxy(60, 18); cout << "LEADING HIM TO COME UP WITH THE THEORY OF GRAVITY?";
				gotoxy(64, 24); cout << "AN ORANGE";
				gotoxy(104, 24); cout << "AN APPLE";
				gotoxy(64, 30); cout << "A MANGO";
				gotoxy(102, 30); cout << "A JACKFRUIT";
				gotoxy(96, 36); cin >> qa1;

				switch (qa1)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "AN APPLE";
					SetConsoleTextAttribute(color, 14);
					qa1score = 400;
					qa1c = 1;
					break;
				}

				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "AN ORANGE";
					SetConsoleTextAttribute(color, 14);
					qa1score = 0;
					qa1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "A MANGO";
					SetConsoleTextAttribute(color, 14);
					qa1score = 0;
					qa1c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "A JACKFRUIT";
					SetConsoleTextAttribute(color, 14);
					qa1score = 0;
					qa1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq1;
				}
				}
				getch();
				system("cls");

			qaq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(48, 17); cout << "WHAT IS THE PRIMARY UNIT OF TEMPERATURE MEASUREMENT IN THE PHYSICAL SCIENCES?";
				gotoxy(65, 24); cout << "KELVIN";
				gotoxy(103, 24); cout << "FARENHEIT";
				gotoxy(64, 30); cout << "CELSIUS";
				gotoxy(104, 30); cout << "RANKINE";

				gotoxy(96, 36); cin >> qa2;

				switch (qa2)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "KELVIN";
					SetConsoleTextAttribute(color, 14);
					qa2score = 405;
					qa2c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "FARENHEIT";
					qa2score = 0;
					qa2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "CELSIUS";
					SetConsoleTextAttribute(color, 14);
					qa2score = 0;
					qa2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "RANKINE";
					SetConsoleTextAttribute(color, 14);
					qa2score = 0;
					qa2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq2;
				}
				}
				getch();
				system("cls");

			qaq3:
				SetConsoleTextAttribute(color, 14);
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(58, 17); cout << "THE MARTIAL ART OF KUNG FU ORIGINATED IN WHICH COUNTRY?";
				gotoxy(65, 24); cout << "AMERICA";
				gotoxy(105, 24); cout << "INDIA";
				gotoxy(63, 30); cout << "PHILIPPINES";
				gotoxy(105, 30); cout << "CHINA";
				gotoxy(96, 36); cin >> qa3;

				switch (qa3)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(105, 30); cout << "CHINA";
					SetConsoleTextAttribute(color, 14);
					qa3score = 410;
					qa3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "AMERICA";
					SetConsoleTextAttribute(color, 14);
					qa3score = 0;
					qa3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(63, 30); cout << "PHILIPPINES";
					SetConsoleTextAttribute(color, 14);
					qa3score = 0;
					qa3c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "INDIA";
					SetConsoleTextAttribute(color, 14);
					qa3score = 0;
					qa3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq3;
				}
				}
				getch();
				system("cls");

			qaq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(58, 17); cout << "WHICH PLANET IN OUR SOLAR SYSTEM HAS THE MOST OXYGEN?";
				gotoxy(65, 24); cout << "EARTH";
				gotoxy(105, 24); cout << "URANUS";
				gotoxy(65, 30); cout << "VENUS";
				gotoxy(106, 30); cout << "MARS";
				gotoxy(96, 36); cin >> qa4;

				switch (qa4)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "EARTH";
					SetConsoleTextAttribute(color, 14);
					qa4score = 415;
					qa4c = 1;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "VENUS";
					SetConsoleTextAttribute(color, 14);
					qa4score = 0;
					qa4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "URANUS";
					SetConsoleTextAttribute(color, 14);
					qa4score = 0;
					qa4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(106, 30); cout << "MARS";
					SetConsoleTextAttribute(color, 14);
					qa4score = 0;
					qa4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq4;
				}
				}
				getch();
				system("cls");

			qaq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(60, 17); cout << "IN CHINA, WHAT NUMBER IS CONSIDERED UNLUCKY BECAUSE";
				gotoxy(58, 18); cout << "ITS PRONUNCIATION IS SIMILAR TO THAT FOR THE WORD DEATH?";
				gotoxy(65, 24); cout << "TEN (10)";
				gotoxy(103, 24); cout << "THREE (3)";
				gotoxy(65, 30); cout << "FOUR (4)";
				gotoxy(101, 30); cout << "THIRTEEN (13)";
				gotoxy(96, 36); cin >> qa5;

				switch (qa5)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(65, 30); cout << "FOUR (4)";
					SetConsoleTextAttribute(color, 14);
					qa5score = 420;
					qa5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "THREE (3)";
					SetConsoleTextAttribute(color, 14);
					qa5score = 0;
					qa5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "TEN (10)";
					SetConsoleTextAttribute(color, 14);
					qa5score = 0;
					qa5c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(101, 30); cout << "THIRTEEN (13)";
					qa5score = 0;
					qa5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq5;
				}
				}
				getch();
				system("cls");

			qaq6:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(50, 17); cout << "WHICH SOUTH AMERICAN COUNTRY IS THE WORLD'S LARGEST PRODUCER OF COFFEE?";
				gotoxy(64, 24); cout << "ARGENTINA";
				gotoxy(104, 24); cout << "BRAZIL";
				gotoxy(64, 30); cout << "COLOMBIA";
				gotoxy(104, 30); cout << "ECUADOR";
				gotoxy(96, 36); cin >> qa6;

				switch (qa6)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(104, 24); cout << "BRAZIL";
					SetConsoleTextAttribute(color, 14);
					qa6score = 425;
					qa6c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "ARGENTINA";
					SetConsoleTextAttribute(color, 14);
					qa6score = 0;
					qa6c = 0;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "COLOMBIA";
					SetConsoleTextAttribute(color, 14);
					qa6score = 0;
					qa6c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "ECUADOR";
					SetConsoleTextAttribute(color, 14);
					qa6score = 0;
					qa6c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq6;
				}
				}
				getch();
				system("cls");

			qaq7:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(45, 17); cout << "LEONARDO DAVINCI'S 15TH-CENTURY MURAL, THE LAST SUPPER, IS LOCATED IN WHAT COUNTRY?";
				gotoxy(65, 24); cout << "FRANCE";
				gotoxy(101, 24); cout << "UNITED KINGDOM";
				gotoxy(65, 30); cout << "GERMANY";
				gotoxy(105, 30); cout << "ITALY";
				gotoxy(96, 36); cin >> qa7;

				switch (qa7)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(105, 30); cout << "ITALY";
					SetConsoleTextAttribute(color, 14);
					qa7score = 430;
					qa7c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(101, 24); cout << "UNITED KINGDOM";
					SetConsoleTextAttribute(color, 14);
					qa7score = 0;
					qa7c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "GERMANY";
					SetConsoleTextAttribute(color, 14);
					qa7score = 0;
					qa7c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "FRANCE";
					SetConsoleTextAttribute(color, 14);
					qa7score = 0;
					qa7c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq7;
				}
				}
				getch();
				system("cls");

			qaq8:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(53, 17); cout << "A MODULATOR-DEMODULATOR IS A HARDWARE DEVICE BETTER KNOWN AS WHAT?";
				gotoxy(65, 24); cout << "PRINTER";
				gotoxy(105, 24); cout << "MODEM";
				gotoxy(65, 30); cout << "MONITOR";
				gotoxy(103, 30); cout << "KEYBOARD";
				gotoxy(96, 36); cin >> qa8;


				switch (qa8)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "MODEM";
					SetConsoleTextAttribute(color, 14);
					qa8score = 435;
					qa8c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(65, 24); cout << "PRINTER";
					SetConsoleTextAttribute(color, 14);
					qa8score = 0;
					qa8c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "MONITOR";
					SetConsoleTextAttribute(color, 14);
					qa8score = 0;
					qa8c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(103, 30); cout << "KEYBOARD";
					SetConsoleTextAttribute(color, 14);
					qa8score = 0;
					qa8c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq8;
				}
				}
				getch();
				system("cls");

			qaq9:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(47, 17); cout << "WHICH BRANCH OF PHYSICS IS DEVOTED TO THE STUDY OF HEAT AND RELATED PHENOMENA?";
				gotoxy(62, 24); cout << "THERMODYNAMICS";
				gotoxy(103, 24); cout << "BIOLOGY";
				gotoxy(62, 30); cout << "PHENOMENOLOGY";
				gotoxy(102, 30); cout << "NATUROLOGY";
				gotoxy(96, 36); cin >> qa9;

				switch (qa9)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(62, 24); cout << "THERMODYNAMICS";
					SetConsoleTextAttribute(color, 14);
					qa9score = 440;
					qa9c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "BIOLOGY";
					SetConsoleTextAttribute(color, 14);
					qa9score = 0;
					qa9c = 0;
					break;
				}

				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(62, 30); cout << "PHENOMENOLOGY";
					SetConsoleTextAttribute(color, 14);
					qa9score = 0;
					qa9c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(102, 30); cout << "NATUROLOGY";
					SetConsoleTextAttribute(color, 14);
					qa9score = 0;
					qa9c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq9;
				}
				}
				getch();
				system("cls");

			qaq10:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();


				gotoxy(61, 17); cout << "HOW MANY PLANETS IN OUR SOLAR SYSTEM HAVE MOONS?";
				gotoxy(64, 24); cout << "EIGHT (8)";
				gotoxy(103, 24); cout << "SEVEN (7)";
				gotoxy(65, 30); cout << "SIX (6)";
				gotoxy(104, 30); cout << "FIVE (5)";
				gotoxy(96, 36); cin >> qa10;

				switch (qa10)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(65, 30); cout << "SIX (6)";
					SetConsoleTextAttribute(color, 14);
					qa10score = 445;
					qa10c = 1;
					break;
				}

				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "FIVE (5)";
					SetConsoleTextAttribute(color, 14);
					qa10score = 0;
					qa10c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(103, 24); cout << "SEVEN (7)";
					SetConsoleTextAttribute(color, 14);
					qa10score = 0;
					qa10c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "EIGHT (8)";
					SetConsoleTextAttribute(color, 14);
					qa10score = 0;
					qa10c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qaq10;
				}
				}
				getch();
				system("cls");


			resultqa:

				qaaverage = qa1score + qa2score + qa3score + qa4score + qa5score + qa6score + qa7score + qa8score + qa9score + qa10score;
				qactotal = qa1c + qa2c + qa3c + qa4c + qa5c + qa6c + qa7c + qa8c + qa9c + qa10c;

				ofstream file;
				file.open("QuizMasterhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Quiz Master";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Easy Score Result: " << qeaverage << "\n";
				file << "Correct Answer/s: " << qectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Average Score Result: " << qaaverage << "\n";
				file << "Correct Answer/s: " << qactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Difficult Score Result: " << qdaverage << "\n";
				file << "Correct Answer/s: " << qdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				nextleveld();
				moreoptionsd();
				gotoxy(78, 19); cout << "A V E R A G E";
				gotoxy(82, 23); cout << qaaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						nextleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						nextleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto qdlevel;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						int qeaverage = 0;
						int qaaverage = 0;
						int qdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "QUIZ MASTER";
						gotoxy(78, 16); cout << "AVERAGE";
						gotoxy(120, 16); cout << qactotal << " / 10";
						gotoxy(140, 16); cout << qaaverage;

						getch();
						system("cls");
						goto resultqa;


						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultqa;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP


				break;
			} //end of quizmaster average

			case 3:
			{
				system("cls");
			qdlevel:


			qdq1:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(51, 17); cout << "ON THE PERIODIC TABLE OF ELEMENTS, HG IS THE SYMBOL FOR WHAT ELEMENT?";
				gotoxy(66, 24); cout << "IRON";
				gotoxy(105, 24); cout << "GOLD";
				gotoxy(64, 30); cout << "HYDROGEN";
				gotoxy(104, 30); cout << "MERCURY";
				gotoxy(96, 36); cin >> qd1;

				switch (qd1)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "MERCURY";
					SetConsoleTextAttribute(color, 14);
					qd1score = 500;
					qd1c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "GOLD";
					SetConsoleTextAttribute(color, 14);
					qd1score = 0;
					qd1c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "HYDROGEN";
					SetConsoleTextAttribute(color, 14);
					qd1score = 0;
					qd1c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(66, 24); cout << "IRON";
					SetConsoleTextAttribute(color, 14);
					qd1score = 0;
					qd1c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qdq1;
				}
				}
				getch();
				system("cls");

			qdq2:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(48, 17); cout << "HOW MANY PLANETS IN OUR SOLAR SYSTEM ARE NOT NAMED AFTER A GOD OR GODDESS?";
				gotoxy(65, 24); cout << "ONE (1)";
				gotoxy(104, 24); cout << "TWO (2)";
				gotoxy(64, 30); cout << "THREE (3)";
				gotoxy(104, 30); cout << "FOUR (4)";
				gotoxy(96, 36); cin >> qd2;

				switch (qd2)
				{
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 10);
					abord();
					gotoxy(65, 24); cout << "ONE (1)";
					SetConsoleTextAttribute(color, 14);
					qd2score = 505;
					qd2c = 1;
					break;
				}

				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "TWO (2)";
					qd2score = 0;
					qd2c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "THREE (3)";
					SetConsoleTextAttribute(color, 14);
					qd2score = 0;
					qd2c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "FOUR (4)";
					SetConsoleTextAttribute(color, 14);
					qd2score = 0;
					qd2c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qdq2;
				}
				}
				getch();
				system("cls");

			qdq3:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(66, 17); cout << "WHAT IS THE PLURAL OF THE WORD CRISIS?";
				gotoxy(64, 24); cout << "CRISISES";
				gotoxy(105, 24); cout << "CRISES";
				gotoxy(65, 30); cout << "CRISIS";
				gotoxy(104, 30); cout << "CRISESES";
				gotoxy(96, 36); cin >> qd3;

				switch (qd3)
				{
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 10);
					bbord();
					gotoxy(105, 24); cout << "CRISES";
					SetConsoleTextAttribute(color, 14);
					qd3score = 510;
					qd3c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "CRISISES";
					SetConsoleTextAttribute(color, 14);
					qd3score = 0;
					qd3c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(65, 30); cout << "CRISIS";
					SetConsoleTextAttribute(color, 14);
					qd3score = 0;
					qd3c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "CRISESES";
					SetConsoleTextAttribute(color, 14);
					qd3score = 0;
					qd3c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qdq3;
				}
				}
				getch();
				system("cls");

			qdq4:
				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(57, 17); cout << "WHAT WAS THE FIRST COUNTRY TO USE PRINTED PAPER CURRENCY?";
				gotoxy(64, 24); cout << "AMERICA";
				gotoxy(104, 24); cout << "ITALY";
				gotoxy(65, 30); cout << "CHINA";
				gotoxy(104, 30); cout << "KOREA";
				gotoxy(96, 36); cin >> qd4;

				switch (qd4)
				{
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 10);
					cbord();
					gotoxy(65, 30); cout << "CHINA";
					SetConsoleTextAttribute(color, 14);
					qd4score = 515;
					qd4c = 1;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "AMERICA";
					SetConsoleTextAttribute(color, 14);
					qd4score = 0;
					qd4c = 0;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(104, 24); cout << "ITALY";
					SetConsoleTextAttribute(color, 14);
					qd4score = 0;
					qd4c = 0;
					break;
				}
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 4);
					dbord();
					gotoxy(104, 30); cout << "KOREA";
					SetConsoleTextAttribute(color, 14);
					qd4score = 0;
					qd4c = 0;
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qdq4;
				}
				}
				getch();
				system("cls");

			qdq5:

				quesborder();
				abord();
				bbord();
				cbord();
				dbord();

				gotoxy(49, 17); cout << "MARK ZUCKERBERG WAS ONE OF THE FOUNDERS OF WHICH SOCIAL NETWORKING SITE?";
				gotoxy(64, 24); cout << "TWITTER";
				gotoxy(105, 24); cout << "GOOGLE";
				gotoxy(64, 30); cout << "NETFLIX";
				gotoxy(104, 30); cout << "FACEBOOK";
				gotoxy(96, 36); cin >> qd5;

				switch (qd5)
				{
				case 'd':
				case 'D':
				{
					SetConsoleTextAttribute(color, 10);
					dbord();
					gotoxy(104, 30); cout << "FACEBOOK";
					SetConsoleTextAttribute(color, 14);
					qd5score = 520;
					qd5c = 1;
					break;
				}
				case 'b':
				case 'B':
				{
					SetConsoleTextAttribute(color, 4);
					bbord();
					gotoxy(105, 24); cout << "GOOGLE";
					SetConsoleTextAttribute(color, 14);
					qd5score = 0;
					qd5c = 0;
					break;
				}
				case 'c':
				case 'C':
				{
					SetConsoleTextAttribute(color, 4);
					cbord();
					gotoxy(64, 30); cout << "NETFLIX";
					SetConsoleTextAttribute(color, 14);
					qd5score = 0;
					qd5c = 0;
					break;
				}
				case 'a':
				case 'A':
				{
					SetConsoleTextAttribute(color, 4);
					abord();
					gotoxy(64, 24); cout << "TWITTER";
					qd5score = 0;
					qd5c = 0;
					SetConsoleTextAttribute(color, 14);
					break;
				}
				default:
				{
					SetConsoleTextAttribute(color, 4);
					invalidinput();
					getch();
					system("cls");
					SetConsoleTextAttribute(color, 14);
					goto qdq5;
				}
				}
				getch();
				system("cls");

			resultqd:

				qdaverage = qd1score + qd2score + qd3score + qd4score + qd5score;
				qdctotal = qd1c + qd2c + qd3c + qd4c + qd5c;

				ofstream file;
				file.open("QuizMasterhistory.txt");

				file << "GAME HISTORY\n\n";
				file << "Username: " << usern;
				file << "\n\n";
				file << "Game: Quiz Master";
				file << "\n\n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Easy Score Result: " << qeaverage << "\n";
				file << "Correct Answer/s: " << qectotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Average Score Result: " << qaaverage << "\n";
				file << "Correct Answer/s: " << qactotal << " / 10 \n";
				file << "-------------------------------------";
				file << "\n\n";
				file << "Quiz Master Difficult Score Result: " << qdaverage << "\n";
				file << "Correct Answer/s: " << qdctotal << " / 5 \n";
				file << "-------------------------------------";
				file.close();

				gresult();
				reschooseleveld();
				moreoptionsd();
				gotoxy(76, 19); cout << "D I F F I C U L T";
				gotoxy(82, 23); cout << qdaverage;

				int resoption = 0, resultl = 0, moreop = 0, moreoptionsl = 0;

				while (resultl != 1) {
					int v = 0;
					if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

						switch ((v = _getch()))
						{
						case KEY_UP:
							if (resoption == 1)
							{
							}
							else
							{
								resoption -= 1;
							}
							break;
						case KEY_DOWN:
							if (resoption == 2)
							{
							}
							else
							{
								resoption += 1;
							}
							break;

						case ENTER:
							if (resoption == 0) {
								continue;
							}
							else {
								resultl = 1;
								continue;
							}
							break;
						}
					}resultl = 0;

					switch (resoption) //Highlights the Switch for the Result option
					{
					case 1:
						SetConsoleTextAttribute(color, 11);
						reschooseleveld();
						SetConsoleTextAttribute(color, 14);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;

					case 2:
						SetConsoleTextAttribute(color, 14);
						reschooseleveld();
						SetConsoleTextAttribute(color, 11);
						moreoptionsd();
						SetConsoleTextAttribute(color, 14);
						break;
					}

					if (resoption != 1 && resoption != 2)
					{
					}
					else
					{
						resultl = 1;
					} resultl = 0;

				}

				switch (resoption)
				{
				case 1: {
					system("cls");
					goto quizmgame;
					break;
				}
				case 2: {
					system("cls");
					moreoptionspaged(); chooseanothergamed(); gamehistoryd(); homed(); backd();

					while (moreoptionsl != 1) {
						int v = 0;
						if (v == 0 || v == 224 || v == 13 || v == 10 || v == 72) { //to specify arrow keys exemplifying other values such as the ascii code.

							switch ((v = _getch()))
							{
							case KEY_UP:
								if (moreop == 1)
								{
								}
								else
								{
									moreop -= 1;
								}
								break;
							case KEY_DOWN:
								if (moreop == 4)
								{
								}
								else
								{
									moreop += 1;
								}
								break;

							case ENTER:
								if (moreop == 0) {
									continue;
								}
								else {
									moreoptionsl = 1;
									continue;
								}
								break;
							}
						}moreoptionsl = 0;

						switch (moreop) //Highlights the Switch for the Game Options in the Settings Page
						{
						case 1:
							SetConsoleTextAttribute(color, 11);
							chooseanothergamed();
							SetConsoleTextAttribute(color, 14);
							gamehistoryd(); homed(); backd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 2:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); homed(); backd();
							SetConsoleTextAttribute(color, 11);
							gamehistoryd();
							SetConsoleTextAttribute(color, 14);
							break;
						case 3:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); backd();
							SetConsoleTextAttribute(color, 11);
							homed();
							SetConsoleTextAttribute(color, 14);
							break;
						case 4:
							SetConsoleTextAttribute(color, 14);
							chooseanothergamed(); gamehistoryd(); homed();
							SetConsoleTextAttribute(color, 11);
							backd();
							SetConsoleTextAttribute(color, 14);
							break;
						}

						if (resoption != 1 && resoption != 2)
						{
						}
						else
						{
							resultl = 1;
						} resultl = 0;

					}

					switch (moreop)
					{

					case 1:
					{

						int  genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						int teaverage = 0;
						int taaverage = 0;
						int tdaverage = 0;
						int reaverage = 0;
						int raaverage = 0;
						int rdaverage = 0;
						int veaverage = 0;
						int vaaverage = 0;
						int vdaverage = 0;
						int qeaverage = 0;
						int qaaverage = 0;
						int qdaverage = 0;
						system("cls");
						goto choosegame;
						break;
					}
					case 2:
					{
						system("cls");

						gamehistory();

						gotoxy(19, 16); cout << usern;
						gotoxy(46, 16); cout << "QUIZ MASTER";
						gotoxy(78, 16); cout << "DIFFICULT";
						gotoxy(120, 16); cout << qdctotal << " / 10";
						gotoxy(140, 16); cout << qdaverage;

						getch();
						system("cls");
						goto resultqd;

						break;
					}
					case 3:
					{

						int menl = 0, men = 0, genl = 0, settingsl = 0, gamel = 0, game = 0, level = 0; //for the switch keys
						string usern;
						system("cls");
						goto menu;

						break;
					}
					case 4:
					{
						system("cls");
						goto resultqd;
					}

					} //ENd switch for More Options options

					break;

				} //END SWITCH for MORE OPTIONS LOOP

				} //END SWITCH FOR RESULTS LOOP

				break;
			} //end of quizmaster difficult
			}
			break;
		}

		}

		break;
	}
	//ENd of Case 1 (GAME)

	case 2: //Case for the Settings Page in the Home Page
		system("cls");
		settingspage();
		getch();
		system("cls");
		goto menu;
		gotoxy(85, 20); cout << usern;


		break;
	case 3: //Case for the Terms and Conditions in the Home Page
		system("cls");
		termsandconpage();
		getch();
		system("cls");
		goto menu;
		break;


	case 4: //Case for the About the Developers
		system("cls");
		aboutdevpage();
		getch();
		system("cls");
		goto menu;
		break;


	case 5: //Case for the Exit
		system("cls");
		break;


	}//end of switch(men) *for the cases of menu

	return 0;

}
