#include "SimpleViewer.h"

void SimpleViewer::ViewPicture(Picture *picture)
{
	cout << "사진 파일명:" << picture->GetName() << endl;
}