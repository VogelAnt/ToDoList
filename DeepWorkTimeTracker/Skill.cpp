#include "Skill.h"
#include <iostream>
Skill::Skill(){

}

void Skill::on_NewSkillAdded(QString newSkill, int skillTime) {
	m_skillTimemap->insert(newSkill, skillTime);
	// save skill in file as json 
}

void Skill::ComputeTime(int) {

}

Skill::~Skill(){
}
