#include "MainMenu.h"

MainMenu::MainMenu(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	SetupMenu();
	connect(m_startTimerbutton, &QPushButton::clicked, this, &MainMenu::on_StartTimerClicked);
	connect(m_addSkillbutton, &QPushButton::clicked, m_skillManager, &Skill::on_AddSkillClicked);
	connect(m_addTimebutton, &QPushButton::clicked, this, &MainMenu::on_AddTimeClicked);
	connect(m_statsButton, &QPushButton::clicked, this, &MainMenu::on_SeeStatsClicked);
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

	// Enter Name of new skill
	// Add this new skill name to the QStringList
}

void MainMenu::on_AddTimeClicked() {
}

void MainMenu::on_SeeStatsClicked(){
}

