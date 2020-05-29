#include "SkillStatisticsWidget.h"

SkillStatisticsWidget::SkillStatisticsWidget(QString skillName, int skillTime, QWidget *parent)
	: QMainWindow(parent) {
	skillWidget = this->centralWidget();
	m_verticalLayout = new QVBoxLayout(skillWidget);
	m_skillNamelabel = new QLabel(skillName + ": " + QString::number(skillTime), this);
	m_verticalLayout->addWidget(m_skillNamelabel);
}

void SkillStatisticsWidget::on_TimeUpdated(QString skillName) {
//	int newTime = Skill::m_skillTimemap[skillName];
}

SkillStatisticsWidget::~SkillStatisticsWidget(){
}
