#include "MainMenu.h"
#include "ui_MainMenu.h"

MainMenu::MainMenu(QWidget *parent): QMainWindow(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);
    SetupMenu();
    connect(this, &MainMenu::InitializeTab, m_menuTab, &MenuTab::on_InitializeTab);
    InitializeTab();
}

void MainMenu::SetupMenu(){
    m_centralWidget = this->centralWidget();
    m_menuLayout = new QVBoxLayout(m_centralWidget);
    m_menuTab = new MenuTab(m_centralWidget);
    m_menuLayout->addWidget(m_menuTab);
}

MainMenu::~MainMenu(){
    delete ui;
    delete m_centralWidget;
}

