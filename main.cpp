#include <iostream>
#include "include/TopManager.h"

/**
 * @function Print company hierarchy for certain top manager.
 * @param [in] topManager TopManager*
 */
void printHierarchy(TopManager* topManager)
{
    std::cout << "------------- Hierarchy -------------\n";
    std::cout << "Top manager: " << topManager->getId() << "\n";
    for (TeamManager* manager : *(topManager->getTeamManagers()))
    {
        std::cout << "\tTeam manager: " << manager->getId() << "\n";
        for (TeamMember* member : *(manager->getTeamMembers()))
        {
            std::cout << "\t\tTeam member: " << member->getId() << "\n";
        }
    }
    std::cout << "=====================================\n";
}

int main() {
    //Top manager creation:
    TopManager* topManager = new TopManager();
    std::cout << "Top manager with id #" << topManager->getId() << " is assigned!\n";

    //Teams quantity clarification:
    int teamsQuantity {0};
    do
    {
        std::cout << "Please enter the teams quantity (from 1 to 10): ";
        teamsQuantity = Employee::getIntFromCin(1, 10);
    } while (teamsQuantity <= 0);

    //Teams creation:
    for (int i = 0; i < teamsQuantity; ++i)
    {
        TeamManager* teamManager = new TeamManager();
        topManager->getTeamManagers()->push_back(teamManager);
    }

    //Team members creation:
    for (TeamManager* teamManager : *(topManager->getTeamManagers()))
    {
        int employeeQuantity{0};
        do
        {
            std::cout << "Please enter the employee quantity in team (from 1 to 10) for manager #" << teamManager->getId() << ": ";
            employeeQuantity = Employee::getIntFromCin(1, 10);
        } while (employeeQuantity <= 0);

        for (int j = 0; j < employeeQuantity; ++j)
        {
            TeamMember* teamMember = new TeamMember();
            teamManager->getTeamMembers()->push_back(teamMember);
        }
    }

    //Hierarchy view:
    printHierarchy(topManager);

    //Setting strategy:
    do
    {
        std::cout   << "\t- Top manager #" << topManager->getId()
                    << ": Please enter the strategy id (from 1 to 999): ";
        int strategicDirection = Employee::getIntFromCin(1, 999);
        topManager->work(strategicDirection);
    } while (topManager->getIfResourcesAvailable());

    std::cout << "No resources available. Everyone is working!";

    return 0;
}