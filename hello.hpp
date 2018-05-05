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

struct Num
{
    float value;
    Num(float value): value(value) {}
    float get() { return value; }
    void set(float value) { this->value = value; }
};

struct Base
{
    virtual ~Base() {}
    virtual std::string fun() = 0;
};

struct Derived : Base
{
    std::string fun() { return "Derived"; }
};

Base* factory() { return new Derived; }

std::string doFunBase(Base* base) {
    return base->fun();
}

std::string doFunDerived(Derived* derived) {
    return derived->fun();
}

#endif
