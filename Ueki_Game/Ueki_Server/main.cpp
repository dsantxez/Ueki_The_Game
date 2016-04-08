#include "ueki_server.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Ueki_Server w;
	w.show();
	return a.exec();
}
