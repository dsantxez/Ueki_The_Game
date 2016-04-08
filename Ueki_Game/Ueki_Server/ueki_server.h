#ifndef UEKI_SERVER_H
#define UEKI_SERVER_H

#include <QtWidgets/QMainWindow>
#include "ui_ueki_server.h"

class Ueki_Server : public QMainWindow
{
	Q_OBJECT

public:
	Ueki_Server(QWidget *parent = 0);
	~Ueki_Server();

private:
	Ui::Ueki_ServerClass ui;
};

#endif // UEKI_SERVER_H
