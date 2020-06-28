#include "SkillWidget.h"
#include "ui_SkillWidget.h"
// TODO: Should be somewhat separated aye ? So add something around the edge etc
SkillWidget::SkillWidget(const QString &e_skillName, const QString &e_category, QString e_skillTime, QWidget *parent) : QWidget(parent),ui(new Ui::SkillWidget){
    ui->setupUi(this);    
    m_verticalLayout = new QVBoxLayout(this);
    m_skillNamelabel = new QLabel("SkillName : " + e_skillName, this);
    m_skillTimelabel = new QLabel("Progress in hours" + e_skillTime, this);
    m_verticalLayout->addWidget(m_skillNamelabel);
    m_verticalLayout->addWidget(m_skillTimelabel);
}

SkillWidget::~SkillWidget(){
    delete ui;
}
