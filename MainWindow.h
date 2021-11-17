#pragma once
#define MAX_LOADSTRING 100
class MainWindow
{
	HINSTANCE hInst;                                // 現在のインターフェイス
	WCHAR szTitle[MAX_LOADSTRING];                  // タイトル バーのテキスト
	WCHAR szWindowClass[MAX_LOADSTRING];            // メイン ウィンドウ クラス名
	static LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
	static INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
public:
	ATOM                MyRegisterClass(HINSTANCE hInstance);
	BOOL                InitInstance(HINSTANCE, int);
};

