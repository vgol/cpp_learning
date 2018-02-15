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

    if (monster.type == MonsterType::DRAGON) {
        printableType = "Dragon";
    }
    else if (monster.type == MonsterType::GIANT_SPIDER) {
        printableType = "Giant Spider";
    }
    else if (monster.type == MonsterType::OGRE) {
        printableType = "Ogre";
    }
    else if (monster.type == MonsterType::ORK) {
        printableType = "Ork";
    }
    else if (monster.type == MonsterType::SLIME) {
        printableType = "Slime";
    }
    else {
        printableType = "Unknown creature";
    }

    return printableType;
}
