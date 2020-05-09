#include "MainMenu.h"

MainMenu::MainMenu(QWidget *parent): QMainWindow(parent){
	ui.setupUi(this);
	InitializeMenuBar();
	SetupMenu();
	//m_fileManager = new FileManager();
	m_skillManager = new Skill();
	connect(m_startTimerbutton, &QPushButton::clicked, this, &MainMenu::on_StartTimerClicked);
	connect(m_addSkillbutton, &QPushButton::clicked, this, &MainMenu::on_AddSkillClicked);
	connect(m_addTimebutton, &QPushButton::clicked, this, &MainMenu::on_AddTimeClicked);
	connect(m_statsButton, &QPushButton::clicked, this, &MainMenu::on_SeeStatsClicked);
	connect(this, &MainMenu::AddNewSkill, m_skillManager, &Skill::on_NewSkillAdded);
}

void MainMenu::InitializeMenuBar() {
	m_option = new QAction("&Test", this);
	m_optionsMenu = menuBar()->addMenu("&TestMenu");
	m_optionsMenu->addAction(m_option);
}

void MainMenu::SetupMenu() {
	m_centralWidget = this->centralWidget();
	m_buttonLayout = new QVBoxLayout(m_centralWidget);
	m_startTimerbutton = new QPushButton("Start Timer", m_centralWidget);
	m_addTimebutton = new QPushButton("Add Time", m_centralWidget);
	m_addSkillbutton = new QPushButton("Add Skill", m_centralWidget);
	m_statsButton = new QPushButton("See Stats", m_centralWidget);
	m_buttonLayout->addWidget(m_startTimerbutton);
	m_buttonLayout->addWidget(m_addTimebutton);
	m_buttonLayout->addWidget(m_addSkillbutton);
	m_buttonLayout->addWidget(m_statsButton);
}


void MainMenu::on_StartTimerClicked() {
	m_stopWatch = new StopWatch();
	m_stopWatch->setWindowTitle("StopWatch");
	m_stopWatch->show();
}

void MainMenu::on_AddSkillClicked() {
	m_skillInputdialog = new QInputDialog();
	QString newSkill = QInputDialog::getText(this, "Skill Management", "Input the desired Skill");
	emit AddNewSkill(newSkill);
	// Enter Name of new skill
	// Add this new skill name to the QStringList
}

MainMenu::~MainMenu(){
	delete m_centralWidget;
	delete m_skillInputdialog;
	delete m_skillManager;
	delete m_stopWatch;
	delete m_option;
	delete m_optionsMenu;
}

void MainMenu::on_AddTimeClicked() {
}

void MainMenu::on_SeeStatsClicked(){
}

