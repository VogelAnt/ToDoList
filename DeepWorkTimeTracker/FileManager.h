#pragma once

#include <QObject>
#include <qdir.h>
#include <iostream>
class FileManager{
	Q_OBJECT
public:
	FileManager();
	~FileManager();

	void CheckIfDirectoryExists();
	void CheckIfFileExists();
	void WriteFile(QString fileName);
	void ReadFile(QString fileName);
};
