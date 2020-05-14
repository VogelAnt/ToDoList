#pragma once
/**
ToDo List looks liek this

projects (add new project, add subproject to existing project, browse projects

Add a project
"Would you like to ... add a new project"
Add a
--> the project should include

LightMode/DarkMode
Set Defalult mode

You create a project ie research project X
You can create tasks or tasklists(templates)
you can schedule them
set deadlines
set estimated workload
view statistics (dates up ahead, time put in / of X hours)

Extras : Tomatoe timers (show how many tomatoe timers are left to go)
Tomatoe mode (Tomatoe animation)

Add in shortcuts
(win + p)
new project (n) browse projects (b)
(win + t)
new task (assign to project? assign all current tasks to project?)

There should be a website to which all of this shit is being uploaded (WT)
The website should give you the possibility to

Mission Critical Mode
A Tim Ferris inspired To-Do-List in which you can define two (more possible but not recommended) tasks that are absolutely essential for the progress of your life mission.
Each task can be outfitted with sub tasks that require completion before the big task can be crossed off.
*/
#include <QtWidgets/QMainWindow>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qwidget.h>
#include <qmessagebox.h>
#include <qaction.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qstatusbar.h>
#include "Skill.h"
#include "StopWatch.h"
#include "ui_MainMenu.h"
/*
Menu on top where you can choose directory 
Add Skill clicked -> input skill -> would you like to add preexisting worked off time ?
Skill and Time should be in key value list
Add Skill if no time take 0 as value for skill key

Add Time choose an existing skill (load from csv file)
At startup immediatley load skills from csv file into map
Low priority -> fix the stop watch 
*/
class MainMenu : public QMainWindow
{
	Q_OBJECT

public:
	MainMenu(QWidget *parent = Q_NULLPTR);
	~MainMenu();
private slots:
	void on_StartTimerClicked();
	void on_AddTimeClicked();
	void on_AddSkillClicked();
	void on_SeeStatsClicked();

private:
	void SetupMenu();
	void InitializeMenuBar();
	Ui::MainMenuClass ui;
	Skill *m_skillManager = nullptr;
	QInputDialog *m_skillInputdialog = nullptr;
	QVBoxLayout *m_buttonLayout = nullptr;
	QPushButton *m_startTimerbutton = nullptr;
	QPushButton *m_addSkillbutton = nullptr;
	QPushButton *m_addTimebutton = nullptr;
	QPushButton *m_statsButton = nullptr;
	QWidget *m_centralWidget = nullptr;
	StopWatch *m_stopWatch = nullptr;
	QMenu *m_optionsMenu = nullptr;
	QAction *m_option = nullptr;
};