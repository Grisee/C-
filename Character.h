//
// Created by lydie on 31/01/2024.
//

#ifndef C_CHARACTER_H
#define C_CHARACTER_H
#include <string.h>
#include <iostream>
#include <vector>

class Character {

private:
    std::string name;
    std::vector<std::string> dialogues;
    short health;
public:
    Character();

public:
    friend std::ostream &operator<<(std::ostream &os, const Character &character);

public:
    Character(const std::string &name, const std::vector<std::string> &dialogues, short health);

public:
    const std::string &getName() const;

    void setName(const std::string &name);

    const std::vector<std::string> &getDialogues() const;

    void setDialogues(const std::vector<std::string> &dialogues);

    void setHealth(short health);

public:
    short getHealth();
    std::string toString() const;

};


#endif //C_CHARACTER_H
