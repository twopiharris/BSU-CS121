""" filesRecurse.py
    recursive file searching
    Note that Python already has
    an easy function for recursive
    directory searches (os.dir.walk()), but this is
    an easy example of recursion
    using existing trees.
    
    Using Python because there's no easy
    cross-platform solution for C++ without
    using an addon library like boost.
"""

import os

def listFiles(dir):
  #print "_____%s_____" % dir
  print(f"_____{dir}_____")
  for fileName in os.listdir(dir):
    print(fileName)
    fullFileName = os.path.join(dir, fileName)
    if os.path.isdir(fullFileName):
      #in some os, . and .. will appear
      #these are current and parent directories
      #which will cause infinite recursion!
      if fileName != ".":
        if fileName != "..":
          listFiles(fullFileName)

def main():
  listFiles(".")
  
if __name__ == "__main__":
  main()
  
