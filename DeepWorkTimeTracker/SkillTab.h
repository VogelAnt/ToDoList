#pragma once

#include <QObject>
#include <qtabwidget.h>

class SkillTab : public QTabWidget
{
	Q_OBJECT

public:
	SkillTab(QObject *parent);
	~SkillTab();
};
