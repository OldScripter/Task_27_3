#include <iostream>
#include "include/TopManager.h"
#include "include/TeamManager.h"
#include "include/TeamMember.h"

int main() {

    TopManager* topManger = new TopManager(0, "Rifki", "Salem");
    TeamManager* teamManager = new TeamManager(1, "Stas", "Talanov", nullptr);
    TeamMember* teamMember = new TeamMember(2, "Alex", "Zinoviev", teamManager);

    teamManager->setManager(topManger);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
