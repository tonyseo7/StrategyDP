#include "VerifyViewer.h"

void VerifyViewer::ViewPicture(Picture *picture)
{
	cout << "사진 파일명: " << picture->GetName() << endl;
	cout << "색조: " << picture->GetTone() << endl;
	cout << "명도: " << picture->GetBrightness() << endl;
	cout << "채도:" << picture->GetSaturation() << endl;
}