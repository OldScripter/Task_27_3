#include "../include/TeamMember.h"

TeamMember::TeamMember(int id, std::string name, std::string surname, Employee* manager)
{
    this->id = id;
    this->name = std::move(name);
    this->surname = std::move(surname);
    this->position = TEAM_MEMBER;
    this->manager = manager;
}

void TeamMember::work()
{
    std::cout   << this->getPositionString()
                << ": " << getId()
                << "\t - Making work\n";
}