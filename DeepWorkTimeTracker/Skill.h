#pragma once
#include "FileMngr.h"
#include <qtimer.h>
#include <QtWidgets/qinputdialog.h>
#include <qjsonarray.h>
#include <qmap.h>
#include <qdebug.h>
#include <qfile.h>
#include <qtextstream.h>
#include <QObject>
#include <string>

class Skill : public QObject {
	Q_OBJECT

public:
	Skill();
	Skill(std::string name, int time);
	~Skill();
private:
	void ComputeTime(int);
	void AddNewSkill(QString newSkill, int newSkilltime);

	QMap<QString, int> *m_skillTimemap = nullptr;
	FileMngr *m_fileManager = nullptr;
	QTimer *m_skillTimer = nullptr;
	std::string m_skillName = "";
	int m_skillTime = 0;
signals:
	void LoadSkills();
};
