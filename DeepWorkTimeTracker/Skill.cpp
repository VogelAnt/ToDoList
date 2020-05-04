#include "Skill.h"
#include <iostream>
Skill::Skill(){
	QString directoryPath = "C:/Dokumente/ToDoListDirectory";
	QDir dir(directoryPath);
	if (dir.exists()) {
		std::cout << "directory " << directoryPath.toStdString() << " exists " << std::endl;
	}
	// open file containing skill list
	// check if directory exists
}

void Skill::on_NewSkillAdded(QString newSkill) {
	m_skillList.append(newSkill);
	// save skill in file as json 
}

Skill::~Skill(){
}
