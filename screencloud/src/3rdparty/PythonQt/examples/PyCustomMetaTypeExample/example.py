from PythonQt.example import CustomObject

# create a new object
custom = CustomObject("John","Doe")

# print the methods available
print dir(custom)

# set a name
custom.setFirstName("Mike")
custom.setLastName("Michels")

# get the name
print custom.firstName() + " " + custom.lastName();
