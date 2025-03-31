""" linkedList.py """

class Node(object):
  def __init__(self, data, next):
    object.__init__(self)
    self.data = data
    self.next = next
    
def iterate(head):
  currentNode = head
  while currentNode != None:
    print (currentNode.data)
    currentNode = currentNode.next

def main():
  c = Node("charlie", None)
  b = Node("beta", c)
  a = Node("alpha", b)
  head = a
  
  iterate(head)
  
if __name__ == "__main__":
  main()
  
