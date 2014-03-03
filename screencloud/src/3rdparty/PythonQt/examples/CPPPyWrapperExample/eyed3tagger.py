class EyeD3Tagger():
    def __init__(self, fileName = None):
        if not fileName is None:
            self.setFileName(fileName)

    def fileName(self):
        return self.fn
        
    def setFileName(self, fileName):
        self.fn = fileName
