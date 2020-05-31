#include "Skill.h"
#include <iostream>
Skill::Skill(){
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

bool Skill::NoDuplicateCheck(QString newSkill) {
	if (m_skillTimemap.count(newSkill)>0){
		return false;
	}
	else{
		return true;
	}
}

void Skill::AddNewSkill(QString newSkill, int newSkilltime) {
	m_skillTimemap.insert(newSkill, newSkilltime);
	m_skillList.append(newSkill);
}

void Skill::AddTime(QString skillName, int addedTime) {
	int oldTime = m_skillTimemap[skillName];
	m_skillTimemap[skillName] = oldTime + addedTime;
}

void Skill::ComputeTime(int) {

}

void Skill::ParseCSVFile() {

}

Skill::~Skill(){
	delete m_fileManager;
	delete m_skillTimer;
}
