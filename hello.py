import hello
hi = hello.World("Hello World!")
print(hi.greet())
hi = hello.World()
print(hi.greet())
hi.set("Hello There!")
print(hi.greet())

var = hello.Var("pi")
var.value = 3.14
print(f"{var.name} is {var.value}")

num = hello.Num(2.7)
print(num.value, num.rovalue)
num.value = 2.8131
print(num.value, num.rovalue)

base = hello.factory()
print(base.fun())
print(hello.doFunBase(base))
print(hello.doFunDerived(base))

class Derived(hello.Base):
    def fun(self):
        return "Python Derived"

derived = Derived()
print(derived.fun())
print(hello.doFunBase(derived))