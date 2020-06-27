#include "SkillWidget.h"
#include "ui_SkillWidget.h"

SkillWidget::SkillWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SkillWidget)
{
    ui->setupUi(this);
}

SkillWidget::~SkillWidget()
{
    delete ui;
}
