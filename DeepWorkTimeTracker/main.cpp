#include "MainMenu.h"
#include "StopWatch.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/qdesktopwidget.h>

int main(int argc, char *argv[]){
	QApplication a(argc, argv);
	MainMenu w;
	w.show();
	return a.exec();
}
