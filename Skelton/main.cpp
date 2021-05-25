#include <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	SetWindowText(L"2016003_ˆî–Ø’q‘å");
	DxLib::ChangeWindowMode(true);
	DxLib_Init();
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (DxLib::ProcessMessage() == 0) {
		ClearDrawScreen();
		DrawString(100, 100, L"hello wold", 0xffffff);

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}
