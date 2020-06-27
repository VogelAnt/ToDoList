#include "MainMenu.h"
#include "ui_MainMenu.h"

MainMenu::MainMenu(QWidget *parent): QMainWindow(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);
    SetupMenu();
    SetupTaskBar();
    connect(this, &MainMenu::InitializeTab, m_menuTab, &MenuTab::on_InitializeTab);
    InitializeTab();
}

void MainMenu::SetupMenu(){
    m_centralWidget = this->centralWidget();
    m_menuLayout = new QVBoxLayout(m_centralWidget);
    m_menuTab = new MenuTab(m_centralWidget);
    m_menuLayout->addWidget(m_menuTab);
}

void MainMenu::SetupTaskBar(){
    m_menuAction = new QAction("&Stuff etc", this);
    m_optionsMenu = menuBar()->addMenu("&Help");
    m_optionsMenu->addAction(m_menuAction);
}

MainMenu::~MainMenu(){
    delete ui;
    delete m_centralWidget;
    delete m_menuAction;
    delete m_optionsMenu;
}

