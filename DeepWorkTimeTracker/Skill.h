#pragma once
#include <qtimer.h>
#include <QtWidgets/qinputdialog.h>
#include <qjsonarray.h>
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

public slots:
	void on_NewSkillAdded(QString newSkill);
private:
	QStringList m_skillList;
	QTimer *m_skillTimer = nullptr;
	std::string m_skillName = "";
	int m_skillTime = 0;
};
