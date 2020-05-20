#pragma once
#include <QtWidgets/qtabwidget.h>
#include <QObject>

class SkillStatisticsWidget : public QObject
{
	Q_OBJECT

public:
	SkillStatisticsWidget(QWidget *parent);
	~SkillStatisticsWidget();
};
