#pragma once
#define MAX_LOADSTRING 100
class MainWindow
{
	HINSTANCE hInst;                                // ���݂̃C���^�[�t�F�C�X
	WCHAR szTitle[MAX_LOADSTRING];                  // �^�C�g�� �o�[�̃e�L�X�g
	WCHAR szWindowClass[MAX_LOADSTRING];            // ���C�� �E�B���h�E �N���X��
	static LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
	static INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
public:
	ATOM                MyRegisterClass(HINSTANCE hInstance);
	BOOL                InitInstance(HINSTANCE, int);
};

