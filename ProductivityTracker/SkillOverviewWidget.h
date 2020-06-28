#ifndef SKILLOVERVIEWWIDGET_H
#define SKILLOVERVIEWWIDGET_H
#include "SkillWidget.h"
#include "SQLClient.h"
#include "FileManager.h"

#include <QPushButton>
#include <QMainWindow>
#include <QObject>
#include <QWidget>

class SkillOverviewWidget : public QMainWindow
{
    Q_OBJECT
public:
    explicit SkillOverviewWidget(QWidget *parent = nullptr);

private:
    void InitialSync();
    QVBoxLayout *m_overViewlayout = nullptr;
    FileManager *m_fileMngr = nullptr;
    SQLClient *m_sqlClient = nullptr;
    QWidget *m_central = nullptr;
    QPushButton *m_addButton = nullptr;
signals:

};

#endif // SKILLOVERVIEWWIDGET_H
