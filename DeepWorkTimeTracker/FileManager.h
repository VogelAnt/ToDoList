#pragma once

#include <QObject>

class FileManager : public QObject
{
	Q_OBJECT

public:
	FileManager(QObject *parent);
	~FileManager();
};
