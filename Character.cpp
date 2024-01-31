//
// Created by lydie on 31/01/2024.
//

#include "Character.h"
#include <string>

short Character::getHealth() {
    return 0;
}

std::string Character::toString() const {
    return std::string();
}

const std::string &Character::getName() const {
    return name;
}

void Character::setName(const std::string &name) {
    Character::name = name;
}

const std::vector<std::string> &Character::getDialogues() const {
    return dialogues;
}

void Character::setDialogues(const std::vector<std::string> &dialogues) {
    Character::dialogues = dialogues;
}

void Character::setHealth(short health) {
    Character::health = health;
}

Character::Character(const std::string &name, const std::vector<std::string> &dialogues, short health) : name(name),
                                                                                                           dialogues(
                                                                                                                   dialogues),
                                                                                                           health(health) {}

std::ostream &operator<<(std::ostream &os, const Character &personnage) {
    os << "name: " << personnage.name << " dialogues: " << " health: " << personnage.health;
    return os;
}

Character::Character() {}
