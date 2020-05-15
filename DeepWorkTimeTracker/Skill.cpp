#include "Skill.h"
#include <iostream>
Skill::Skill(){
	m_skillTimemap = new QMap<QString, int>();
	m_fileManager = new FileMngr();
	emit LoadSkills();
	connect(this, &Skill::LoadSkills, m_fileManager, &FileMngr::on_LoadSkills);
}

bool Skill::SkillListEmpty() {
	if (m_skillList.isEmpty()) {
		return false;
	}
	else{
		return true;
	}
}

void Skill::AddNewSkill(QString newSkill, int newSkilltime) {
	m_skillTimemap->insert(newSkill, newSkilltime);
	m_skillList.append(newSkill);
}

void Skill::AddTime(QString skillName, int addedTime) {
	int oldTime;
	testMap->emplace(skillName.toStdString(), addedTime);
	std::cout << "integer value at" + skillName.toStdString()  << testMap->at(skillName.toStdString()) << std::endl;
	testMap->at(skillName.toStdString()) = testMap->at(skillName.toStdString()) + addedTime;
	std::cout << "new integer value is" << testMap->at(skillName.toStdString()) << std::endl;
}

void Skill::ComputeTime(int) {

}

Skill::~Skill(){
	delete m_skillTimemap;
	delete m_fileManager;
	delete m_skillTimer;
}
