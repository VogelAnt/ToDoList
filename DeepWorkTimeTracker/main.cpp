#include "MainMenu.h"
#include "StopWatch.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/qdesktopwidget.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainMenu w;
	w.show();
	//a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()));
	return a.exec();
}
