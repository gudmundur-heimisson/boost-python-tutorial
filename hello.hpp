#ifndef WORLD_H
#define WORLD_H
#include <string>

struct World {
    World(std::string msg): msg(msg) {}
    void set(std::string msg) { this->msg = msg; }
    std::string greet() { return msg; }
    std::string msg;
};

#endif
