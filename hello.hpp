#ifndef WORLD_H
#define WORLD_H
#include <string>

std::string DEFAULT_MESSAGE = "Hello World!";

struct World {
    std::string msg;
    World(std::string msg): msg(msg) {}
    World() { this->msg = DEFAULT_MESSAGE; }
    void set(std::string msg) { this->msg = msg; }
    std::string greet() { return msg; }
};

struct Var
{
    std::string const name;
    float value;
    Var(std::string name) : name(name), value() {}
};

#endif
