#pragma once
#include <QtWidgets/qtabwidget.h>
#include <QObject>
#include <qmainwindow.h>
#include <qwidget.h>

class SkillStatisticsWidget : public QWidget
{
	Q_OBJECT

public:
	SkillStatisticsWidget(QWidget *parent);
	~SkillStatisticsWidget();
};
