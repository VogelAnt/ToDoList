#ifndef SKILLWIDGET_H
#define SKILLWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QString>

namespace Ui {class SkillWidget;
}

class SkillWidget : public QWidget{
    Q_OBJECT
public:
    explicit SkillWidget(const QString &e_skillName, const QString &e_category, const QString &e_skillTime, QWidget *parent = nullptr);
    ~SkillWidget();

private:    
    Ui::SkillWidget *ui;
};

#endif // SKILLWIDGET_H
