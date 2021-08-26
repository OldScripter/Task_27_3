#include "../include/TopManager.h"

TopManager::TopManager(int id, std::string name, std::string surname)
{
    this->id = id;
    this->name = std::move(name);
    this->surname = std::move(surname);
    this->position = TOP_MANAGER;
    this->manager = nullptr;
}

void TopManager::work()
{
    std::cout   << this->getPositionString()
                << ": " << getId()
                << "\t - Making work\n";
}