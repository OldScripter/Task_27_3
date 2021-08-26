#ifndef TASK_27_3_TEAMMANAGER_H
#define TASK_27_3_TEAMMANAGER_H

#include "Employee.h"

class TeamManager : public Employee {

public:
    TeamManager(int id, std::string name, std::string surname, Employee* topManager,);
    void work() override;
};


#endif //TASK_27_3_TEAMMANAGER_H
