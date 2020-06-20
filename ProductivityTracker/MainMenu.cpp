#include "MainMenu.h"
#include "ui_MainMenu.h"

MainMenu::MainMenu(QWidget *parent): QMainWindow(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);
    SetupMenu();
}

void MainMenu::SetupMenu(){
    m_centralWidget = this->centralWidget();
    m_menuLayout = new QVBoxLayout(m_centralWidget);
    m_menuTab = new MenuTab(m_centralWidget);
    m_menuLayout->addWidget(m_menuTab);
}

void MainMenu::SetupMenuTab(){
//    m_menuTab->addTab("Timer");

}

MainMenu::~MainMenu(){
    delete ui;
    delete m_centralWidget;
}

