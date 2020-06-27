#ifndef MENUTAB_H
#define MENUTAB_H

#include "TimerWidget.h"
#include "ActivityWidget.h"
#include "SkillOverviewWidget.h"

#include <QProxyStyle>
#include <QStyle>
#include <QStyleOption>
#include <QSize>
#include <QTabWidget>
#include <QObject>
#include <QWidget>

class HorizontalTabStyle : public QProxyStyle {
public:
    QSize sizeFromContents(ContentsType eType, const QStyleOption *eOption, const QSize &eSize, const QWidget *eWidget) const override;
    void drawControl(ControlElement eElement, const QStyleOption *eOption, QPainter *ePainter, const QWidget *eWidget) const override;
};

class MenuTab : public QTabWidget{
    Q_OBJECT
public:
    explicit MenuTab(QWidget *parent = nullptr);
    ~MenuTab();
public slots:
    void on_InitializeTab();

private:
    TimerWidget *m_timerWidget = nullptr;
    ActivityWidget *m_activityWidget = nullptr;
    SkillOverviewWidget *m_skillOverviewwidget = nullptr;
    HorizontalTabStyle *m_tabStyle = nullptr;
signals:
};

#endif // MENUTAB_H
