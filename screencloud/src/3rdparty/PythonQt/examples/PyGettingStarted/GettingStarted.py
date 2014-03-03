from PythonQt import *

# set the title of the group box, accessing the title property
box.title = 'PythonQt Example'

# set the html content of the QTextBrowser
box.browser.html = 'Hello <b>Qt</b>!'

# set the title of the button
box.button1.text = 'Append Text' 

# set the text of the line edit
box.edit.text = '42'

# define our own python method that appends the text from the line edit
# to the text browser
def appendLine():
  box.browser.append(box.edit.text)
    
# connect the button's clicked signal to our python method
box.button1.connect('clicked()', appendLine)
# connect the lineedit's returnPressed signal to our python method
box.edit.connect('returnPressed()', appendLine)

# show the window
box.show()

