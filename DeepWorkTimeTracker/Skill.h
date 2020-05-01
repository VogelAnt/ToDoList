#pragma once
#include <qtimer.h>
#include <QObject>
#include <string>

class Skill : public QObject
{
	Q_OBJECT

public:
	Skill(QObject *parent);
	Skill(std::string name, int time);
	~Skill();

private:
	QTimer *m_skillTimer = nullptr;
	std::string m_skillName = "";
	int m_skillTime = 0;
};
