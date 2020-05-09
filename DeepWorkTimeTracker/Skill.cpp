#include "Skill.h"
#include <iostream>
Skill::Skill(){

}

void Skill::on_NewSkillAdded(QString newSkill) {
	m_skillList.append(newSkill);
	// save skill in file as json 
}

Skill::~Skill(){
}
