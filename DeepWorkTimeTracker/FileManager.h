#pragma once

#include <QObject>
#include <qdir.h>

class FileManager : public QObject
{
	Q_OBJECT
public:
	FileManager(QObject *parent);
	~FileManager();

	void CheckIfDirectoryExists();
	void CheckIfFileExists();

};
