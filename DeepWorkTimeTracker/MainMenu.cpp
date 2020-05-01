#include "MainMenu.h"

MainMenu::MainMenu(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	SetupMenu();
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

}

void MainMenu::on_AddTimeClicked() {

}

void MainMenu::on_AddSkillClicked() {

}

void MainMenu::on_SeeStatsClicked() {

}

