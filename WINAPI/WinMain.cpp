#include <Windows.h>

extern bool bVisible;
void Start();
void Update();
void KeyDown(WPARAM wParam);
void Paint(HDC& hdc);

LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY WinMain(_In_ HINSTANCE const hInstance, _In_opt_ HINSTANCE const hprevInstance, _In_ LPSTR const lpCmdLine, _In_ int const nShowCmd)
{
	HWND hWindow = nullptr;

	{
		WNDCLASSEX wndClass = WNDCLASSEX();

		wndClass.cbSize = sizeof(WNDCLASSEX);
		wndClass.lpfnWndProc = WndProc;
		wndClass.hInstance = hInstance;
		wndClass.hIcon = LoadIcon(nullptr, IDI_APPLICATION);
		wndClass.hIconSm = LoadIcon(nullptr, IDI_APPLICATION);
		wndClass.hCursor = LoadCursor(nullptr, IDC_ARROW);
		wndClass.hbrBackground = static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
		wndClass.lpszClassName = L"Window";

		RegisterClassEx(&wndClass);
	}

	{
		CREATESTRUCT window = CREATESTRUCT();

		window.lpszClass = L"Window";
		window.lpszName = L"Game";
		window.style = WS_CAPTION | WS_SYSMENU;
		window.hInstance = hInstance;
		window.cx = 1280;
		window.cy = 720;

		{
			RECT rect = RECT();

			rect.right = window.cx;
			rect.bottom = window.cy;
			AdjustWindowRectEx(&rect, window.style, static_cast<bool>(window.hMenu), window.dwExStyle);

			window.cx = rect.right - rect.left;
			window.cy = rect.bottom - rect.top;

			window.x = (GetSystemMetrics(SM_CXSCREEN) - window.cx) / 2;
			window.y = (GetSystemMetrics(SM_CYSCREEN) - window.cy) / 2;
		}

		hWindow = CreateWindowEx
		(
			window.dwExStyle,
			window.lpszClass,
			window.lpszName,
			window.style,
			window.x,
			window.y,
			window.cx,
			window.cy,
			window.hwndParent,
			window.hMenu,
			window.hInstance,
			window.lpCreateParams
		);

		if (bVisible) ShowWindow(hWindow, SW_RESTORE);
	}

	{
		MSG msg = MSG();

		while (true)
		{
			if (PeekMessage(&msg, HWND(), WM_NULL, WM_NULL, PM_REMOVE))
			{
				if (msg.message == WM_QUIT)
					return static_cast<int>(msg.wParam);

				DispatchMessage(&msg);
			}
			else
			{
				SendMessage(hWindow, WM_APP, 0, 0);
			}
		}
	}
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_KEYDOWN:
    {
        KeyDown(wParam);
        InvalidateRect(hWnd, NULL, TRUE);
        break;
    }
    case WM_APP :
    {
        Update();
        break;
    }
    case WM_CREATE :
    {
        Start();
        break;
    }
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);

            Paint(hdc);

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}
