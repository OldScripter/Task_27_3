#ifndef TASK_27_3_TEAMMEMBER_H
#define TASK_27_3_TEAMMEMBER_H

#include "Employee.h"

class TeamMember : public Employee {

public:
    TeamMember(int id, std::string name, std::string surname, Employee* manager);
    void work() override;
};


#endif //TASK_27_3_TEAMMEMBER_H
