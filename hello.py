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
