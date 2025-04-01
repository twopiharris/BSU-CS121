/** Stack
 *  A simple stack implementation using a basic node
 **/

public class Stack{
  
  protected Node head;
  
  public static void main(String[] args){
    Stack s = new Stack();
    s.push(new Node("A", null));
    s.push(new Node("B", null));
    s.push(new Node("C", null));

    System.out.println("Initial stack is 'upside down'");
    s.iterate();
    
    System.out.println("Invert by copying to a new stack");
    Stack t = new Stack();
    while (s.isEmpty() == false){
      t.push(s.pop());
    } // end while

    System.out.println("\n S: ");
    s.iterate();
    System.out.println("\n T:");
    t.iterate();

    System.out.println("copy back to original");
    s = t;
    System.out.println("\n S: ");
    s.iterate();
    System.out.println("\n Finding B");
    Node b = s.search("B");
    System.out.println(b.getPayload());

    System.out.println("\n ... and the stack has not changed");
    s.iterate();
  } // end main

  public Stack(){
    head = null;
  } // end constructor

  public void push(Node newNode){
    newNode.setNext(head);
    head = newNode;
  } // end push

  public Node pop(){
    Node topNode = head;
    head = topNode.getNext();
    return topNode;
  } // end pop

  public boolean hasNext(){
    boolean result = true;
    if (head.getNext() == null){
      result = false;
    } // end if
    return result;
  } // end hasNext

  public boolean isEmpty(){
    boolean result = false;
    if (head == null){
      result = true;
    } // end if
    return result;
  } // end isEmpty

  public Node search(String target){
    Stack t = new Stack();
    Node currentNode = this.pop();
    t.push(currentNode);
    boolean keepGoing = true;
    Node result = null;
    while(keepGoing){
      if (target.equals(currentNode.getPayload())){
        result = currentNode;
        keepGoing = false;
      } // end if
      currentNode = this.pop();
      if (this.head == null){
        keepGoing = false;
      } else {
        t.push(currentNode);
      } // end if
    } // end while
    
    //so now we have t, currentNode, and this.  
    //put them all back together
    this.push(currentNode);
    while (t.isEmpty() == false){
      this.push(t.pop());
    } // end while
    return result;
  } // end search

  public void iterate(){
    Node current = head;
    while (current != null){
      System.out.println(current.getPayload());
      current = current.getNext();
    } // end while
  } // end iterate;


} // end class def
