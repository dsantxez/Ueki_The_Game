#ifndef UEKI_CLIENT_H
#define UEKI_CLIENT_H

#include <QtWidgets/QMainWindow>
#include "ui_ueki_client.h"

class Ueki_Client : public QMainWindow
{
	Q_OBJECT

public:
	Ueki_Client(QWidget *parent = 0);
	~Ueki_Client();

private:
	Ui::Ueki_ClientClass ui;
};

#endif // UEKI_CLIENT_H
