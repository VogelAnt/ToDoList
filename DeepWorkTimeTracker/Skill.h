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
#include <qstring.h>
#include <string>
#include <map>
#include <iostream>

class Skill : public QObject {
	Q_OBJECT

public:
	Skill();
	Skill(std::string name, int time);
	~Skill();
	void AddNewSkill(QString newSkill, int newSkilltime);
	void AddTime(QString skillName, int addedTime);
	void ComputeTime(int timeTobecomputed);
	bool NoDuplicateCheck(QString newSkill);
	bool SkillListEmpty();
	QStringList m_skillList;
	QMap<QString, int> m_skillTimemap;
	std::map<std::string, int> *testMap = nullptr;

private:
	FileMngr *m_fileManager = nullptr;
	QTimer *m_skillTimer = nullptr;
signals:
	void LoadSkills();
};
