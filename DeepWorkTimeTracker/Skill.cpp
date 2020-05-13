#include "Skill.h"
#include <iostream>
Skill::Skill(){
	m_fileManager = new FileMngr();
	emit LoadSkills();
	connect(this, &Skill::LoadSkills, m_fileManager, &FileMngr::on_LoadSkills);
}


void Skill::AddNewSkill(QString newSkill, int newSkilltime) {
	m_skillTimemap->insert(newSkill, newSkilltime);
	// save skill in file as json 
}

void Skill::ComputeTime(int) {

}

Skill::~Skill(){
}
