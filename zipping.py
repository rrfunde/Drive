__author__ = 'rohit'


import os
import zipfile

def zipdir(path, zip):
    for root, dirs, files in os.walk(path):
        for file in files:
            zip.write(os.path.join(root, file))

if __name__ == '__main__':
    zipf = zipfile.ZipFile('Python.zip', 'w')
    zipdir('/home/rohit/Documents/R', zipf)
    zipf.close()