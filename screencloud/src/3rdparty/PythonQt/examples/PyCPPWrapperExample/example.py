from PythonQt.example import *

print "alternative 1 : CustomObject wrapped by decorators"

# create a new object
custom = CustomObject("John","Doe")

# print the object (to see how it is wrapped)
print custom

# print the methods available
print dir(custom)

# set a name
custom.setFirstName("Mike")
custom.setLastName("Michels")

# get the name
print custom.firstName() + " " + custom.lastName();

print
print "alternative 2 : CustomObject2 wrapped by factory"

# create a new object
custom2 = CustomObject2("John","Doe")

# print the object (to see how it is wrapped)
print custom2

# print the methods available
print dir(custom2)

# set a name
custom2.setFirstName("Mike")
custom2.setLastName("Michels")

# get the name
print custom2.firstName() + " " + custom2.lastName();
