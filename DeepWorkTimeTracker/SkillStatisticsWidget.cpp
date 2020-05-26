#include "SkillStatisticsWidget.h"

SkillStatisticsWidget::SkillStatisticsWidget(QString skillName, int skillTime, QWidget *parent)
	: QMainWindow(parent){

}

void SkillStatisticsWidget::on_TimeUpdated(QString skillName) {
	int newTime = Skill::m_skillTimemap[skillName];
}

SkillStatisticsWidget::~SkillStatisticsWidget(){
}
