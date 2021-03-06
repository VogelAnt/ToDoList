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
	connect(m_option, &QAction::triggered, this, &MainMenu::on_FileSetupTriggered);
}

void MainMenu::InitializeMenuBar() {
	m_option = new QAction("&Files", this);
	m_optionsMenu = menuBar()->addMenu("&Setup");
	m_optionsMenu->addAction(m_option);
}

void MainMenu::SetupMenu() {
	m_centralWidget = this->centralWidget();
	m_buttonLayout = new QVBoxLayout(m_centralWidget);
	m_startTimerbutton = new QPushButton("Start Timer", m_centralWidget);
	m_addTimebutton = new QPushButton("Add Time", m_centralWidget);
	m_addSkillbutton = new QPushButton("Add Skill", m_centralWidget);
	m_statsButton = new QPushButton("See Stats", m_centralWidget);
	m_skillTab = new SkillTab(m_centralWidget);
	connect(this, &MainMenu::AddSkillTab, m_skillTab, &SkillTab::on_AddSkillTab);
	m_buttonLayout->addWidget(m_startTimerbutton);
	m_buttonLayout->addWidget(m_addTimebutton);
	m_buttonLayout->addWidget(m_addSkillbutton);
	m_buttonLayout->addWidget(m_statsButton);
	m_buttonLayout->addWidget(m_skillTab);
	m_skillTab->setVisible(m_statusDisplay);
	m_startTimerbutton->setEnabled(false);
	m_addTimebutton->setEnabled(false);
	m_addSkillbutton->setEnabled(false);

	m_statsButton->setVisible(false);
}

void MainMenu::on_StartTimerClicked() {
	m_stopWatch = new StopWatch();
	m_stopWatch->setWindowTitle("StopWatch");
	m_stopWatch->show();
}

void MainMenu::on_AddSkillClicked() {
	bool stringInputdialog_ok;
	QString newSkill = QInputDialog::getText(this, "Skill Management", "Input the desired Skill", QLineEdit::Normal, 0, &stringInputdialog_ok);
	if (stringInputdialog_ok && m_skillManager->NoDuplicateCheck(newSkill)) {
		bool intInputdialog_ok;
		int newSKilltime = QInputDialog::getInt(this, "Skill Management", "Input time in minutes for skill:" + newSkill, 0, 0, 1440, 1, &intInputdialog_ok);
		if (intInputdialog_ok) {
			m_skillManager->AddNewSkill(newSkill, newSKilltime);
			m_statsButton->setVisible(true);
			emit AddSkillTab(newSkill, newSKilltime);
			// Move this all inside the the TabWidget
			//m_skillWidget = new SkillStatisticsWidget(newSkill, newSKilltime, m_skillTab);
			//connect(this, &MainMenu::TimeUpdated, m_skillWidget, &SkillStatisticsWidget::on_TimeUpdated);
			//m_skillTab->addTab(m_skillWidget, newSkill);
		}
	}
	else{
		QMessageBox duplicateWarningbox(QMessageBox::Warning,
			"Duplicate Skill!",
			"You entered the name of an already existing skill. Please restart the process",
			QMessageBox::Ok,
			this);
		duplicateWarningbox.exec();
	}
}

MainMenu::~MainMenu(){
	delete m_centralWidget;
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
				m_skillManager->AddTime(skillName, skillTime);
				// 

			}
		}
	}
}

void MainMenu::on_FileSetupTriggered() {
	// if resource file is not empty, call parse csv function
	if (0) {
		//
	}
	else {

	}
}

void MainMenu::on_SeeStatsClicked(){
	if (!m_skillManager->SkillListEmpty()) {

	}
	else{
		m_statusDisplay = !m_statusDisplay;
		if (m_statusDisplay) {
			m_statsButton->setText("Hide Stats");
		}
		else {
			m_statsButton->setText("See Stats");
		}
		m_skillTab->setVisible(m_statusDisplay);
	}
}
