#include "Skill.h"
#include <iostream>
Skill::Skill(){
	m_skillTimemap = new QMap<QString, int>();
	m_fileManager = new FileMngr();
	emit LoadSkills();
	connect(this, &Skill::LoadSkills, m_fileManager, &FileMngr::on_LoadSkills);
}


void Skill::AddNewSkill(QString newSkill, int newSkilltime) {
	m_skillTimemap->insert(newSkill, newSkilltime);
}

void Skill::ComputeTime(int) {

}

Skill::~Skill(){
	delete m_skillTimemap;
	delete m_fileManager;
	delete m_skillTimer;
}
