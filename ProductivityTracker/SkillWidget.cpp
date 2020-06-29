#include "SkillWidget.h"
#include "ui_SkillWidget.h"
// TODO: Should be somewhat separated aye ? So add something around the edge etc
SkillWidget::SkillWidget(const QString &e_skillName, const QString &e_category, QString e_skillTime, QWidget *parent) : QWidget(parent),ui(new Ui::SkillWidget){
    ui->setupUi(this);    
}

SkillWidget::~SkillWidget(){
    delete ui;
}
