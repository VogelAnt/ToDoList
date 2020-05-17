#include "MainMenu.h"

MainMenu::MainMenu(QWidget *parent): QMainWindow(parent){
	ui.setupUi(this);
	m_skillManager = new Skill();
	InitializeMenuBar();
	SetupMenu();
	connect(this, &MainMenu::AddNewSkills, this, &MainMenu::on_AddSkillClicked);
	connect(m_startTimerbutton, &QPushButton::clicked, this, &MainMenu::on_StartTimerClicked);
	connect(m_addSkillbutton, &QPushButton::clicked, this, &MainMenu::on_AddSkillClicked);
	connect(m_addTimebutton, &QPushButton::clicked, this, &MainMenu::on_AddTimeClicked);
	connect(m_statsButton, &QPushButton::clicked, this, &MainMenu::on_SeeStatsClicked);
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
	m_skillTab = new QTabWidget(m_centralWidget);
	m_buttonLayout->addWidget(m_startTimerbutton);
	m_buttonLayout->addWidget(m_addTimebutton);
	m_buttonLayout->addWidget(m_addSkillbutton);
	m_buttonLayout->addWidget(m_statsButton);
	m_buttonLayout->addWidget(m_skillTab);
	m_skillTab->setVisible(m_statusDisplay);
}

void MainMenu::on_StartTimerClicked() {
	m_stopWatch = new StopWatch();
	m_stopWatch->setWindowTitle("StopWatch");
	m_stopWatch->show();
}

void MainMenu::on_AddSkillClicked() {
	bool stringInputdialog_ok;
	QString newSkill = QInputDialog::getText(this, "Skill Management", "Input the desired Skill", QLineEdit::Normal, 0, &stringInputdialog_ok);
	// Checking function in here ? 
	if (stringInputdialog_ok) {
		bool intInputdialog_ok;
		int newSKilltime = QInputDialog::getInt(this, "Skill Management", "Input time in minutes for skill:" + newSkill, 0, 0, 1440, 1, &intInputdialog_ok);
		if (intInputdialog_ok) {
			m_skillManager->AddNewSkill(newSkill, newSKilltime);
		}
	}
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
	if (!m_skillManager->SkillListEmpty()) {
		QMessageBox emptyListbox(QMessageBox::Information,
			"No skills found !",
			"Press Ok to add new skills", 
			QMessageBox::Ok | QMessageBox::Abort, 
			this);
		int messageBoxchoice = emptyListbox.exec();
		switch (messageBoxchoice){
		case QMessageBox::Ok:
			emit AddNewSkills();
			break;
		case QMessageBox::Abort:
			break;
		default:
			break;
		}
	}
	else {
		bool stringListinputdialog;
		QString skillName = QInputDialog::getItem(this, "Pick a skill to add time to", "Choose Skill", m_skillManager->m_skillList, 0, false, &stringListinputdialog);
		if (stringListinputdialog) {
			bool intInputdialog;
			int skillTime = QInputDialog::getInt(this, "Skill Management", "Input time in minutes for skill:" + skillName, 0, 0, 1440, 1, &intInputdialog);
			if (intInputdialog) {
				m_skillManager->AddNewSkill(skillName, skillTime);
			}
		}
	}
}

void MainMenu::on_SeeStatsClicked(){
	if (m_skillManager->SkillListEmpty()) {

	}
	else{

		m_skillTab->setVisible(!m_statusDisplay);

		// set stats button
		// display tab widget
		// 
	}
}
