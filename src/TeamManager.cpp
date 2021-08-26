#include "../include/TeamManager.h"

TeamManager::TeamManager(int id, std::string name, std::string surname, Employee* manager)
{
    this->id = id;
    this->name = std::move(name);
    this->surname = std::move(surname);
    this->position = TEAM_MANAGER;
    this->manager = manager;
}

void TeamManager::work()
{
    std::cout   << this->getPositionString()
                << ": " << getId()
                << "\t - Making work\n";
}