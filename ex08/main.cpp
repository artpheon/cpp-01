#include "Human.hpp"
int main() {
    Human hero = Human("new human");
    Human enemy = Human("his enemy");
    hero.action("melee", enemy.getName());
    enemy.action("ranged", hero.getName());
    hero.action("shout", enemy.getName());
    return(0);
}