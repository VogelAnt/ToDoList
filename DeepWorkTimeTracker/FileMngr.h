#pragma once

#include <QObject>
#include <qdir.h>
#include <qfile.h>
#include <qtextstream.h>
#include <qstandardpaths.h>
#include <iostream>

class FileMngr : public QObject{
	Q_OBJECT

public:
	FileMngr();
	FileMngr(QObject *parent);
	~FileMngr();


public slots:
	void on_LoadSkills();

private:
	QString m_directoryPath;
	void CheckDirectoryExists();
	void CheckFileExists();
	void WriteFile(QString fileName);
	void ReadFile(QString fileName);
	bool fileExists = false;

signals:
	void LoadSkills();
};
