#include "PictureCollection.h"


void main()
{
	Picture *picture1 = new Picture("õ�� ��Ÿ�", 100, 100, 100);
	Picture *picture2 = new Picture("������ �ɼ�����", 120, 90, 90);

	PictureCollection *pc = new PictureCollection();

	pc->Add(picture1);
	pc->Add(picture2);
	pc->View();
	pc->SetMode(1);
	pc->View();

	delete pc;
	delete picture2;
	delete picture1;
}