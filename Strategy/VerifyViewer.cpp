#include "VerifyViewer.h"

void VerifyViewer::ViewPicture(Picture *picture)
{
	cout << "���� ���ϸ�: " << picture->GetName() << endl;
	cout << "����: " << picture->GetTone() << endl;
	cout << "��: " << picture->GetBrightness() << endl;
	cout << "ä��:" << picture->GetSaturation() << endl;
}