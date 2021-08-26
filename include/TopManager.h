#ifndef TASK_27_3_TOPMANAGER_H
#define TASK_27_3_TOPMANAGER_H

#include "Employee.h"

class TopManager : public Employee {
private:
    void setManager(Employee* employee) override {};

public:
    TopManager(int id, std::string name, std::string surname);
    void work() override;
};

#endif //TASK_27_3_TOPMANAGER_H
