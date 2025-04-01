""" lisp.py
    given an expression in a basic form of LISP,
    create a program that can process that expression.
    very easy in Python with recursion    
    can't use tuple tricks or eval in C++ / Java

    using tuple format:
    ( "+", 8, ( "*", ( "-", 5, 3 ), ( "/", 10, 2 ) ) )
     8 + ((5-3) * (10/2))
     =  8 + (2 * 5)
     =  8 + 10
     =  18
 
"""

def strToTuple(inString):
    """ converts a string to a Python nested tuple """
    
    outString = ""
    data = inString.split(" ")
    for item in data:
        if item == "+":
            outString += "'+', "
        elif item == "-":
            outString += "'-', "
        elif item == "*":
            outString += "'*', "
        elif item == "/":
            outString += "'/', "
        
        elif item == "(":
            outString += "("
        else:
            outString += item + ", "

    return eval(outString)[0]

def solve(problem):
    """ given problem as a tuple, breaks problem
        into operation, a, and b.
        If a or b are tuples, recursively calls until
        a and b are primitives.  """
        
    op = problem[0] 
    a = problem[1]
    b = problem[2]
        
    if type(a) == tuple:
        a = solve(a)
       
    if type(b) == tuple:
        b = solve(b)
    
    problemString = "%d %s %d" % (a, op, b)
    #print problemString
    
    return eval(problemString)

def main():
    inFile = open("lispIN.txt")
    for inString in inFile:
        inString = inString.strip()        
        inCode = strToTuple(inString)
        print solve(inCode)
        
    inFile.close()
    
if __name__ == "__main__":
    main()
