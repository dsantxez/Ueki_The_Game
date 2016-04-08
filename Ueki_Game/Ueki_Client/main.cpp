#include "ueki_client.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Ueki_Client w;
	w.show();
	return a.exec();
}
