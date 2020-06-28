#include "SkillOverviewWidget.h"
#include <QDebug>
//
SkillOverviewWidget::SkillOverviewWidget(QWidget *parent) : QMainWindow(parent){
    m_central = new QWidget();
    m_central = this->centralWidget();
    m_addButton = new QPushButton("ADD", m_central);
    SkillWidget *test = new SkillWidget("dsfdf", "fdfddfdf", "50", m_central);
    m_overViewlayout = new QVBoxLayout(m_central);
    m_overViewlayout->addWidget(test);
    m_overViewlayout->addWidget(m_addButton);
    qDebug() << "Added Widgets in SkillOverview" ;
}

// fetches data from SQL Client, Redis Client or File
void SkillOverviewWidget::InitialSync(){

}

