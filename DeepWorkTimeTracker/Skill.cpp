#include "Skill.h"
#include <iostream>
Skill::Skill(){

}

void Skill::on_NewSkillAdded(QString newSkill, int newSkilltime) {
	m_skillTimemap->insert(newSkill, newSkilltime);
	// save skill in file as json 
}

void Skill::ComputeTime(int) {

}

Skill::~Skill(){
}
