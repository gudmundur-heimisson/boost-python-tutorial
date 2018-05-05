#ifndef WORLD_H
#define WORLD_H
#include <string>

std::string DEFAULT_MESSAGE = "Hello World!";

struct World {
    World(std::string msg): msg(msg) {}
    World() { this->msg = DEFAULT_MESSAGE; }
    void set(std::string msg) { this->msg = msg; }
    std::string greet() { return msg; }
    std::string msg;
};

#endif
