#ifndef TASK_27_3_EMPLOYEE_H
#define TASK_27_3_EMPLOYEE_H

#include <vector>
#include <iostream>

enum Position
{
    TOP_MANAGER,
    TEAM_MANAGER,
    TEAM_MEMBER
};

class Employee {

protected:

    int id;
    std::string name;
    std::string surname;
    Position position;
    Employee* manager {nullptr};

    Employee(){};

public:
    int getId() const;
    std::string getName() const;
    std::string getSurname() const;
    Position getPosition() const;
    std::string getPositionString() const;
    Employee* getManager() const;

    void setId(const int id);
    void setName(std::string name);
    void setSurname(std::string surname);
    void setPosition(const Position position);

    virtual void setManager(Employee* manager);
    virtual void work() = 0;

};


#endif //TASK_27_3_EMPLOYEE_H
