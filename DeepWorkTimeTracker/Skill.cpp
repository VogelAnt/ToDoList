#include "Skill.h"

Skill::Skill(){
	// open file containing skill list
}

void Skill::on_NewSkillAdded(QString newSkill) {
	m_skillList.append(newSkill);
	// save skill in file as json 
}

Skill::~Skill(){
}
