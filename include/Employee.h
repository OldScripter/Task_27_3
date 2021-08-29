#ifndef TASK_27_3_EMPLOYEE_H
#define TASK_27_3_EMPLOYEE_H

#include <vector>
#include <iostream>

enum TaskType
{
    TASK_A = 0,
    TASK_B = 1,
    TASK_C = 2,
    NO_TASK = 99
};

enum Position
{
    TOP_MANAGER,
    TEAM_MANAGER,
    TEAM_MEMBER
};

class Employee {

    static int Count;

protected:
    int id;
    Position position;
    Employee();

public:
    int getId() ;
    void setId(const int id);
    virtual void work(int task) = 0;

    /**
     * @method Get integer value between min and max from cin.
     * @param [in] min int
     * @param [in] max int
     * @return int result
     */
    static int getIntFromCin(int min, int max);

    /**
     * @method Returns string name of task type.
     * @param [in] taskType
     * @return std::string
     */
    static std::string getTaskTypeString(TaskType taskType);
};

#endif //TASK_27_3_EMPLOYEE_H