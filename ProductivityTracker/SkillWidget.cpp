#include "SkillWidget.h"
#include "ui_SkillWidget.h"
#include <QSizePolicy>

// TODO: Should be somewhat separated aye ? So add something around the edge etc
SkillWidget::SkillWidget(const QString &e_skillName, const QString &e_category, const QString &e_skillTime, QWidget *parent) : QWidget(parent),ui(new Ui::SkillWidget){
    ui->setupUi(this);

}

SkillWidget::~SkillWidget(){
    delete ui;
}
