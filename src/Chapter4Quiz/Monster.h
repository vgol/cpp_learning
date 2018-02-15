#ifndef CPP_LEARNING_MONSTER_CPP_H
#define CPP_LEARNING_MONSTER_CPP_H

#include <string>

namespace Monsters
{

enum class MonsterType
{
    OGRE,
    DRAGON,
    ORK,
    GIANT_SPIDER,
    SLIME,
};

struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};

void printMonster(Monster monster);
std::string printType(Monster monster);

} // Monsters

#endif //CPP_LEARNING_MONSTER_CPP_H
