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

class Skill : public QObject {
	Q_OBJECT

public:
	Skill();
	Skill(std::string name, int time);
	~Skill();
	void AddNewSkill(QString newSkill, int newSkilltime);
	void AddTime(QString skillName, int addedTime);
	void ComputeTime(int timeTobecomputed);
	bool SkillListEmpty();
	QStringList m_skillList;

private:
	QMap<QString, int> *m_skillTimemap = nullptr;
	FileMngr *m_fileManager = nullptr;
	QTimer *m_skillTimer = nullptr;
signals:
	void LoadSkills();
};
