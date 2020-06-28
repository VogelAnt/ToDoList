#ifndef SKILLWIDGET_H
#define SKILLWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>
#include <QPainter>

namespace Ui {
class SkillWidget;
}

class SkillWidget : public QWidget{
    Q_OBJECT
public:
    explicit SkillWidget(const QString &e_skillName, const QString &e_category, QString e_skillTime, QWidget *parent = nullptr);
    ~SkillWidget();

private:    
    Ui::SkillWidget *ui;
    QVBoxLayout *m_verticalLayout = nullptr;
    QHBoxLayout *m_horizontalLayout = nullptr;
    QLabel *m_skillNamelabel = nullptr;
    QLabel *m_skillTimelabel = nullptr;
};

#endif // SKILLWIDGET_H
