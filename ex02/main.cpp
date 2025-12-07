




#include "FragTrap.h"
#include "ScavTrap.h"



int main()
{
    {
        std::cout << "------------------base test-------------------\n" << std::endl;
        FragTrap a("RobotA");
        // ClapTrap b(a);

        a.attack("building");
        a.takeDamage(10);
        a.beRepaired(0000000000000);
        a.highFivesGuys();
    }
    std::cout << "### TESTING POLYMORPHISM (VIRTUAL DESTRUCTOR) ###\n" << std::endl;
    {
        ClapTrap* a = new FragTrap("allocation");
        
        a->attack("target");
        delete a;
    }
}