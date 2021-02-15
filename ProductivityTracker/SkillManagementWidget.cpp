#include "SkillManagementWidget.h"
#include "ui_SkillManagementWidget.h"

SkillManagementWidget::SkillManagementWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SkillManagementWidget)
{
    ui->setupUi(this);
    InitialSetupMenu();
}

SkillManagementWidget::~SkillManagementWidget()
{
    delete ui;
}

void SkillManagementWidget::InitialSync(){

}

void SkillManagementWidget::InitialSetupMenu(){
    m_central = new QWidget(this);
    m_central = this->centralWidget();
    m_addButton = new QPushButton("ADD", m_central);
    SkillWidget *test = new SkillWidget("Name", "Cat", "50", m_central);
    m_overViewlayout = new QVBoxLayout(m_central);
    m_overViewlayout->addWidget(test);
    m_overViewlayout->addWidget(m_addButton);
}
