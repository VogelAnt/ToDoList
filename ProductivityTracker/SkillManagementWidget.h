#ifndef SKILLMANAGEMENTWIDGET_H
#define SKILLMANAGEMENTWIDGET_H
#include "SkillWidget.h"
#include "SQLClient.h"
#include "FileManager.h"

#include <QPushButton>
#include <QMainWindow>
#include <QObject>
#include <QWidget>

namespace Ui {
class SkillManagementWidget;
}

class SkillManagementWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit SkillManagementWidget(QWidget *parent = nullptr);
    ~SkillManagementWidget();

private:
    void InitialSetupMenu();
    void InitialSync();
    QVBoxLayout *m_overViewlayout = nullptr;
    FileManager *m_fileMngr = nullptr;
    SQLClient *m_sqlClient = nullptr;
    QWidget *m_central = nullptr;
    QPushButton *m_addButton = nullptr;
    Ui::SkillManagementWidget *ui;
};

#endif // SKILLMANAGEMENTWIDGET_H
