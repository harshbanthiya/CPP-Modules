#include <iostream>


class ClapTrap
{
    private:
    std::string Name;
    int         HitPoints;
    int         EnergyPoints;
    int         AttackDamage;


    public:
    ClapTrap(std::string n);
    ~ClapTrap();
    ClapTrap(const ClapTrap &n);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};