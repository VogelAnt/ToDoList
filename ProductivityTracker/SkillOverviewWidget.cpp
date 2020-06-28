#include "SkillOverviewWidget.h"

//
SkillOverviewWidget::SkillOverviewWidget(QWidget *parent) : QMainWindow(parent){
    m_central = this->centralWidget();
    m_overViewlayout = new QVBoxLayout(m_central);
    m_addButton = new QPushButton("ADD", this);
    m_overViewlayout->addWidget(m_addButton);
}

// fetches data from SQL Client, Redis Client or File
void SkillOverviewWidget::InitialSync(){

}

