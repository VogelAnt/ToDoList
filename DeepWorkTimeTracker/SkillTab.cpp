#include "SkillTab.h"
#include <qtabwidget.h>
SkillTab::SkillTab(QWidget *parent):QTabWidget(parent){
	this->setTabPosition(West);
	m_tabStyle = new HorizontalTabStyle();
	tabBar()->setStyle(m_tabStyle);
}


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
SkillTab::~SkillTab(){
}
