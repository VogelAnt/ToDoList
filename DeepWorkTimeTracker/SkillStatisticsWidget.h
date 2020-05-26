#pragma once
#include <QtWidgets/qtabwidget.h>
#include <QObject>
#include <qmainwindow.h>
#include <qwidget.h>
#include "Skill.h"

class SkillStatisticsWidget : public QMainWindow, Skill
{
	Q_OBJECT

public:
	SkillStatisticsWidget(QString skillName, int skillTime, QWidget *parent);
	~SkillStatisticsWidget();
public slots:
	void on_TimeUpdated(QString skillName);
};
