/** RecLL.java
    Linked list using recursion
*/

public class RecLL{
  
  protected Node head = null;
  
  public static void main(String[] args){
    RecLL r = new RecLL();
    
    r.traverse(r.head);
    
    System.out.println(r.count(r.head));
    
  } // end main
  
  public RecLL(){
    
    // for this example, just manually add
    Node c = new Node("C", null);
    Node b = new Node("B", c);
    Node a = new Node("A", b);
    head = a;
  } // end constructor
  
  public void traverse(Node currentNode){
    //this is a recursive traversal
    if (currentNode == null){
      //base case: do nothing
    } else {
      System.out.println(currentNode.getPayload());
      traverse(currentNode.getNext());
    } // end if
  } // end traverse
  
  public int count(Node currentNode){
    int counter;
    if (currentNode == null){
      //base case
      counter = 0;
    } else {
      counter = 1 + count(currentNode.getNext());
    } // end if
    return counter;
  } // end count
  
} // end class def
