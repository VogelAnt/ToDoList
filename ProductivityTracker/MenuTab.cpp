#include "MenuTab.h"

QSize HorizontalTabStyle::sizeFromContents(ContentsType eType, const QStyleOption *eOption, const QSize &eSize, const QWidget *eWidget) const {

    return QProxyStyle::sizeFromContents(eType, eOption, eSize, eWidget).transposed();
}

void HorizontalTabStyle::drawControl(ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget) const {

    if (element == CE_TabBarTabLabel) {
        const QStyleOptionTab *tab = qstyleoption_cast<const QStyleOptionTab *>(option);
        if (tab != nullptr) {
            QStyleOptionTab opt(*tab);
            opt.shape = QTabBar::RoundedNorth;
            QProxyStyle::drawControl(element, &opt, painter, widget);
            return;
        }
    }
    QProxyStyle::drawControl(element, option, painter, widget);
}

MenuTab::MenuTab(QWidget *parent) : QTabWidget(parent){
    this->setTabPosition(West);
    m_tabStyle = new HorizontalTabStyle();
    tabBar()->setStyle(m_tabStyle);
    m_timerWidget = new TimerWidget(this);
    m_activityWidget = new ActivityWidget(this);
    m_skillManagementwidget = new SkillManagementWidget(this);
}

void MenuTab::on_InitializeTab(){
    addTab(m_timerWidget, "Timer");
    addTab(m_activityWidget, "Activity");
    addTab(m_skillManagementwidget, "Skills");
}

MenuTab::~MenuTab(){
    delete m_timerWidget;
    delete m_activityWidget;
    delete m_skillManagementwidget;
    delete m_tabStyle;
}
