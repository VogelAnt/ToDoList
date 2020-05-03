#pragma once
#include <qtimer.h>
#include <QtWidgets/qinputdialog.h>
#include <QObject>
#include <string>

class Skill : public QObject
{
	Q_OBJECT

public:
	Skill(QObject *parent);
	Skill(std::string name, int time);
	~Skill();

public slots:
	void on_AddSkillClicked();
private:
	QInputDialog *m_skillInputdialog = nullptr;
	QStringList m_skillList;
	QTimer *m_skillTimer = nullptr;
	std::string m_skillName = "";
	int m_skillTime = 0;
};
