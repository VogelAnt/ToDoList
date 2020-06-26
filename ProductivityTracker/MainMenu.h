#ifndef MAINMENU_H
#define MAINMENU_H
#include "MenuTab.h"
#include <QMainWindow>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public QMainWindow{
    Q_OBJECT
public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

signals:
void InitializeTab();

private:
    void SetupMenu();
    void SetupTaskBar();
    Ui::MainMenu *ui;
    QVBoxLayout *m_menuLayout = nullptr;
    QWidget *m_centralWidget = nullptr;
    MenuTab *m_menuTab = nullptr;
};
#endif // MAINMENU_H
