from PythonQt.QtGui import *

group = QGroupBox()
box = QVBoxLayout(group)
push1 =  QPushButton(group)
box.addWidget(push1)
push2 =  QPushButton(group)
box.addWidget(push2)
check =  QCheckBox(group)
check.text = 'check me'
group.title = 'my title'
push1.text = 'press me'
push2.text = 'press me2'
box.addWidget(check)
group.show()
