#include "SkillStatisticsWidget.h"

SkillStatisticsWidget::SkillStatisticsWidget(QString skillName, int skillTime, QWidget *parent)
	: QMainWindow(parent) {
	skillWidget = this->centralWidget();
	m_verticalLayout = new QVBoxLayout(skillWidget);
	m_skillNamebutton = new QPushButton(skillName + ": " + QString::number(skillTime), skillWidget);
	m_verticalLayout->addWidget(m_skillNamebutton);
}

void SkillStatisticsWidget::on_TimeUpdated(QString skillName) {
//	int newTime = Skill::m_skillTimemap[skillName];
}

SkillStatisticsWidget::~SkillStatisticsWidget(){
}
