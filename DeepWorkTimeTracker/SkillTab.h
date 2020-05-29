#pragma once

#include <QObject>
#include <qtabwidget.h>
#include <qproxystyle.h>
#include <qstyleoption.h>
#include <qwidget.h>
#include <qstyle.h>
#include <qsize.h>
#include "SkillStatisticsWidget.h"

class HorizontalTabStyle : public QProxyStyle {
public:
	QSize sizeFromContents(ContentsType eType, const QStyleOption *eOption, const QSize &eSize, const QWidget *eWidget) const override;
	void drawControl(ControlElement eElement, const QStyleOption *eOption, QPainter *ePainter, const QWidget *eWidget) const override;
};

class SkillTab : public QTabWidget{
	Q_OBJECT

public:
	SkillTab(QWidget *parent);
	~SkillTab();
public slots:
	void on_AddSkillTab(QString skill, int skillTime);
private:
	SkillStatisticsWidget *m_skillTabcontent = nullptr;
	HorizontalTabStyle *m_tabStyle = nullptr;
};
