#include "SkillStatisticsWidget.h"

SkillStatisticsWidget::SkillStatisticsWidget(QString skillName, int skillTime, QWidget *parent)
	: QMainWindow(parent){
	m_centralWidget = centralWidget();
	m_verticalLayout = new QVBoxLayout(m_centralWidget);
	QString labelString = skillName + ": " + QString::number(skillTime);
	m_skillNametimelabel = new QLabel(labelString, this);
	m_verticalLayout->addWidget(m_skillNametimelabel);
}

void SkillStatisticsWidget::on_TimeUpdated(QString skillName) {
//	int newTime = Skill::m_skillTimemap[skillName];
}

SkillStatisticsWidget::~SkillStatisticsWidget(){
}
