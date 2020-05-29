#pragma once
#include <QtWidgets/qtabwidget.h>
#include <QObject>
#include <qmainwindow.h>
#include <qwidget.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qlabel.h>
#include "Skill.h"

class SkillStatisticsWidget : public QMainWindow{
	Q_OBJECT

public:
	SkillStatisticsWidget(QString skillName, int skillTime, QWidget *parent);
	~SkillStatisticsWidget();
public slots:
	void on_TimeUpdated(QString skillName);
private:
	QWidget *skillWidget = nullptr;
	QVBoxLayout *m_verticalLayout = nullptr;
	QLabel *m_skillNamelabel = nullptr;
};
