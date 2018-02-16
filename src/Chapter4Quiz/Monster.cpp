#include <iostream>
#include "Monster.h"


int main()
{
    Monsters::Monster ogre {Monsters::MonsterType::OGRE, "Torg", 145};
    Monsters::Monster slime {Monsters::MonsterType::SLIME, "Blurp", 23};

    Monsters::printMonster(ogre);
    Monsters::printMonster(slime);

    return 0;
}

void Monsters::printMonster(Monsters::Monster monster)
{
    std::cout << "This " << Monsters::printType(monster) << " is named "
              << monster.name << " and has " << monster.health << " health." << std::endl;
}

std::string Monsters::printType(Monsters::Monster monster)
{
    using Monsters::MonsterType;

    std::string printableType;

    switch (monster.type)
    {
        case MonsterType::DRAGON:
            printableType = "Dragon";
            break;
        case MonsterType::GIANT_SPIDER:
            printableType = "Giant Spider";
            break;
        case MonsterType::OGRE:
            printableType = "Ogre";
            break;
        case MonsterType::ORK:
            printableType = "Ork";
            break;
        case MonsterType::SLIME:
            printableType = "Slime";
            break;
    }

    return printableType;
}
