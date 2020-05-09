#pragma once

#include <QObject>
#include <qdir.h>

class FileMngr : public QObject{
	Q_OBJECT

public:
	FileMngr();
	FileMngr(QObject *parent);
	~FileMngr();
private:
	void CheckDirectoryExists();
	void CheckFileExists();
};
