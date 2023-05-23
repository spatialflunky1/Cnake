#ifndef MAIN_H
#define MAIN_H

#include <Windows.h>

// Need to define UNICODE to avoid LPCSTR being used instead of wchat_t
#ifndef UNICODE
#define UNICODE
#endif 

#define ID_QUIT 100
#define ID_ABOUT 101
#define ID_SETTINGS 102
#define WIDTH 640
#define HEIGHT 480
#define GAME_UPDATE_SCORE 0x0050

// Initializes the window procedure signature
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void gameLoop();
void printNum(HDC hdc, int x, int y, int num);
void printString(HDC hdc, int x, int y, wchar_t string[]);
void paintScore(HWND hwnd, int score);

#endif