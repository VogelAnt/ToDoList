#include "Skill.h"

Skill::Skill(){
}

void Skill::on_NewSkillAdded(QString newSkill) {
	m_skillList.append(newSkill);
}

Skill::~Skill()
{
}
