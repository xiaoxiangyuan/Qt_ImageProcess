#include "Image_Process.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Image_Process w;
	w.show();
	return a.exec();
}
