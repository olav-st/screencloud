from PythonQt import QtCore, QtGui, example

# call our new constructor of QSize
size = QtCore.QSize(QtCore.QPoint(1,2));

# call our new QPushButton constructor
button = QtGui.QPushButton("sometext");

# call the move slot (overload1)
button.move(QtCore.QPoint(0,0))

# call the move slot (overload2)
button.move(0,0)

# call the static method
print QtGui.QWidget.mouseGrabber();

# create a CPP object via constructor
yourCpp = example.YourCPPObject(2,11.5)

# call the wrapped method on CPP object
print yourCpp.doSomething(3);

# show slots available on yourCpp 
print dir(yourCpp)

# destructor will be called:
yourCpp = None
