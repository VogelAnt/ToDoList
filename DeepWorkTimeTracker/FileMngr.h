#pragma once

#include <QObject>
#include <qdir.h>
#include <iostream>

class FileMngr : public QObject{
	Q_OBJECT

public:
	FileMngr();
	FileMngr(QObject *parent);
	~FileMngr();
private:
	void CheckDirectoryExists();
	void CheckFileExists();
	void WriteFile(QString fileName);
	void ReadFile(QString fileName);
};
