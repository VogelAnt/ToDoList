#pragma once

#include <QObject>
#include <qtabwidget.h>
#include <qproxystyle.h>
#include <qwidget.h>
#include <qstyle.h>
#include <qsize.h>

class HorizontalTabStyle : public QProxyStyle {
public:
	// TODO: Add constant override
	QSize sizefromContents(ContentsType eType, const QStyleOption *eOption, const QSize &eSize, const QWidget *eWidget);
	void drawControl(ControlElement eElement, const QStyleOption *eOption, QPainter *ePainter, const QWidget *eWidget);
};

class SkillTab : public QTabWidget
{
	Q_OBJECT

public:
	SkillTab(QObject *parent);
	~SkillTab();
private:
	HorizontalTabStyle *m_tabStyle = nullptr;
};
