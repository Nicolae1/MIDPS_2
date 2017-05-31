#include <windows.h>
#include<math.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
#include <assert.h>
#include <gdiplus.h>
using namespace Gdiplus;
#pragma comment (lib, "gdiplus.lib")
float x=0, y=0, z=0;

float adun(float a, float b)
{
	float c;
	c = a + b;
	return c;
}

float difer(float a, float b)
{
	float c;
	c = a - b;
	return c;
}

float inmul(float a, float b)
{
	float c;
	c = a * b;
	return c;
}
float impart(float a, float b)
{
	float c;
	c = a / b;
	return c;
}
float rad(float a)
{
	return sqrt(a);
}
float putere(float a, float b)
{
	float c;
	int i;
	c = a;
	for (i = 0; i < b; i++) { c = c*a; }
	return c;
}
float procent(float a, float b)
{
	float c;
	c = (a * b)/100;
	return c;
}
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow)
{
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;
	Status st = GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	assert(st == Ok);
	if (st != Ok) return FALSE;
	static char szAppName[] = "CALCULATOR";
	HWND        hwnd;
	
	MSG         msg;
	WNDCLASSEX  wndclass;
	wndclass.cbSize = sizeof(wndclass);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	RegisterClassEx(&wndclass);
	hwnd = CreateWindow(szAppName,         // window class name
		"CALCULATOR",     // window caption
		WS_OVERLAPPEDWINDOW,     // window style
		CW_USEDEFAULT,           // initial x position
		CW_USEDEFAULT,           // initial y position
		730,           // initial x size
		550,           // initial y size
		NULL,                    // parent window handle
		NULL,                    // window menu handle
		hInstance,               // program instance handle
		NULL);		             // creation parameters
	ShowWindow(hwnd, iCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	GdiplusShutdown(gdiplusToken);
	return msg.wParam;
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	static int  cxChar, cxCaps, cyChar;
	HDC         hdc;
	PAINTSTRUCT ps;
	TEXTMETRIC  tm;
	HFONT hFont;
	POINT     pt;
	switch (iMsg)
	{
	case WM_CREATE:
	{hdc = GetDC(hwnd);
	GetTextMetrics(hdc, &tm);
	cxChar = tm.tmAveCharWidth;
	cxCaps = (tm.tmPitchAndFamily & 1 ? 3 : 2) * cxChar / 2;
	cyChar = tm.tmHeight + tm.tmExternalLeading;
	ReleaseDC(hwnd, hdc);
	return 0; }
	case WM_PAINT:
	{hdc = BeginPaint(hwnd, &ps);

	Graphics graphics(hdc);
	hFont = CreateFont(48, 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
		CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Impact"));
	SelectObject(hdc, hFont);

	// Create a Pen objects.
	Pen blackPen(Color(255, 0, 0, 0),5);
	Pen greenPen(Color(255, 0, 255, 0));
	Pen bluePen(Color(255, 0, 0, 255));

	// Create a SolidBrush object.
	SolidBrush greenBrush(Color(255, 0, 255, 0));
	SolidBrush blueBrush(Color(100, 0, 100, 200));
	SolidBrush blackBrush(Color(255, 0, 0, 0));
	SolidBrush whiteBrush(Color(255, 255, 255, 255));

	// Create the frame
	
	
	graphics.FillRectangle(&blueBrush, 50, 10, 600, 450);
	graphics.FillRectangle(&whiteBrush, 70, 20, 560, 100);
	graphics.FillRectangle(&whiteBrush, 90, 150, 70, 50);
	graphics.FillRectangle(&whiteBrush, 90, 220, 70, 50);
	graphics.FillRectangle(&whiteBrush, 90, 290, 70, 50);
	graphics.FillRectangle(&whiteBrush, 90, 360, 160, 50);
	graphics.FillRectangle(&whiteBrush, 180, 220, 70, 50);
	graphics.FillRectangle(&whiteBrush, 180, 150, 70, 50);
	graphics.FillRectangle(&whiteBrush, 180, 290, 70, 50);
	graphics.FillRectangle(&whiteBrush, 270, 150, 70, 50);
	graphics.FillRectangle(&whiteBrush, 270, 220, 70, 50);
	graphics.FillRectangle(&whiteBrush, 270, 290, 70, 50);
	graphics.FillRectangle(&whiteBrush, 270, 360, 70, 50);
	graphics.FillRectangle(&whiteBrush, 360, 360, 70, 50);
	graphics.FillRectangle(&whiteBrush, 360, 290, 70, 50);
	graphics.FillRectangle(&whiteBrush, 360, 220, 70, 50);
	graphics.FillRectangle(&whiteBrush, 360, 150, 70, 50);
	graphics.FillRectangle(&whiteBrush, 450, 290, 70, 50);
	graphics.FillRectangle(&whiteBrush, 450, 220, 70, 50);
	graphics.FillRectangle(&whiteBrush, 450, 150, 70, 50);
	graphics.FillRectangle(&whiteBrush, 450, 360, 160, 50);
	graphics.FillRectangle(&whiteBrush, 540, 150, 70, 50);
	graphics.FillRectangle(&whiteBrush, 540, 220, 70, 50);
	graphics.FillRectangle(&whiteBrush, 540, 290, 70, 50);

	TextOut(hdc, 115, 290, "1", 1);
	TextOut(hdc, 205, 290, "2", 1);
	TextOut(hdc, 295, 290, "3", 1);
	TextOut(hdc, 115, 220, "4", 1);
	TextOut(hdc, 205, 220, "5", 1);
	TextOut(hdc, 295, 220, "6", 1);
	TextOut(hdc, 115, 150, "7", 1);
	TextOut(hdc, 205, 150, "8", 1);
	TextOut(hdc, 295, 150, "9", 1);
	TextOut(hdc, 300, 360, ",", 1);
	TextOut(hdc, 165, 360, "0", 1);
	TextOut(hdc, 385, 360, "±", 1);
	TextOut(hdc, 385, 150, "+", 1);
	TextOut(hdc, 387, 220, "-", 1);
	graphics.DrawLine(&blackPen, 370, 310, 382, 310);
	graphics.DrawLine(&blackPen, 380, 310, 390,330);
	graphics.DrawLine(&blackPen, 390, 330, 402, 297);
	TextOut(hdc, 475, 150, "/", 1);
	TextOut(hdc, 475, 220, "*", 1);
	TextOut(hdc, 475, 290, "^", 1);
	TextOut(hdc, 515, 360, "=", 1);
	TextOut(hdc, 560, 150, "%", 1);
	TextOut(hdc, 560, 220, "C", 1);
	TextOut(hdc, 553, 290, "CE", 2);
	
	


	EndPaint(hwnd, &ps);
	return 0;
	}

	case WM_DESTROY:
	{PostQuitMessage(0);
	return 0; }
	}
	return DefWindowProc(hwnd, iMsg, wParam, lParam);
}
