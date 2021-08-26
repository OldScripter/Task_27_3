#include "../include/Employee.h"

int Employee::getId() const
{
    return this->id;
}

void Employee::setId(const int id)
{
    this->id = id;
}

void Employee::setName(std::string name)
{
    this->name = std::move(name);
}

void Employee::setSurname(std::string surname)
{
    this->surname = std::move(surname);
}

void Employee::setPosition(const Position position)
{
    this->position = position;
}

std::string Employee::getName() const
{
    return this->name;
}

std::string Employee::getSurname() const
{
    return this->surname;
}

Position Employee::getPosition() const
{
    return position;
}

std::string Employee::getPositionString() const
{
    switch (position)
    {
        case TOP_MANAGER:
            return "TOP MANAGER";
        case TEAM_MANAGER:
            return "TEAM MANAGER";
        case TEAM_MEMBER:
            return "TEAM MEMBER";
        default:
            return "NOT SET";
    }
}

Employee *Employee::getManager() const
{
    return this->manager;
}

void Employee::setManager(Employee *manager)
{
    if (manager != nullptr)
    {
        this->manager = manager;
    }

}